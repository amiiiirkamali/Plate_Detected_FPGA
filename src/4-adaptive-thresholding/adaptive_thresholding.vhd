library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
use STD.TEXTIO.ALL;
use IEEE.STD_LOGIC_TEXTIO.ALL;

entity adaptive_thresholding_optimized is
    generic (
        input_file_name : string := "E:\data\3-output edge detection\image61.txt";
        output_file_name : string := "E:\data\4-output adaptive threshold\image61.txt";
        IMG_WIDTH : integer := 640;
        IMG_HEIGHT : integer := 640
    );
end adaptive_thresholding_optimized;

architecture Behavioral of adaptive_thresholding_optimized is
    
    -- ?????????? ????? ???? ????? ????
    constant BLOCK_SIZE : integer := 11;        -- ?????? ???? ?????
    constant C_CONSTANT : integer := 8;         -- ?????? ???? ???? ??? ??????
    constant BLOCK_RADIUS : integer := BLOCK_SIZE / 2;
    constant MIN_EDGE_STRENGTH : integer := 20; -- ????? ???? ???
    
    -- ???????? ????
    function max(a, b: integer) return integer is
    begin
        if a > b then return a; else return b; end if;
    end function;
    
    function min(a, b: integer) return integer is
    begin
        if a < b then return a; else return b; end if;
    end function;
    
    function clamp(value, min_val, max_val: integer) return integer is
    begin
        if value < min_val then return min_val;
        elsif value > max_val then return max_val;
        else return value;
        end if;
    end function;

begin
    main_process: process
        -- ????? ??????? ?????
        type image_array is array (0 to IMG_HEIGHT-1, 0 to IMG_WIDTH-1) of integer range 0 to 255;
        
        -- ???????? ????
        file input_file : text;
        file output_file : text;
        variable input_line : line;
        variable output_line : line;
        variable pixel_value : integer;
        variable status : file_open_status;
        
        -- ????????? ?????
        variable input_image : image_array;
        variable output_image : image_array;
        
        -- ???????? ??????
        variable sum_val : integer;
        variable count : integer;
        variable mean_val : integer;
        variable threshold_val : integer;
        variable current_pixel : integer;
        
        -- ???? ?????? ??????? ???? ????
        impure function calculate_local_mean(center_x, center_y : integer) return integer is
            variable sum : integer := 0;
            variable pixel_count : integer := 0;
            variable x, y : integer;
        begin
            -- ?????? ??????? ?? ???? ???? ???
            for dy in -BLOCK_RADIUS to BLOCK_RADIUS loop
                for dx in -BLOCK_RADIUS to BLOCK_RADIUS loop
                    x := center_x + dx;
                    y := center_y + dy;
                    
                    -- ????? ?????
                    if x >= 0 and x < IMG_WIDTH and y >= 0 and y < IMG_HEIGHT then
                        sum := sum + input_image(y, x);
                        pixel_count := pixel_count + 1;
                    end if;
                end loop;
            end loop;
            
            if pixel_count > 0 then
                return sum / pixel_count;
            else
                return 128; -- ????? ???????
            end if;
        end function;
        
        -- ???? ????? ????? ????? ??? ??? ??? ??? ?? ??
        impure function is_strong_edge(x, y : integer) return boolean is
            variable current_val : integer;
            variable neighbor_val : integer;
            variable max_diff : integer := 0;
            variable diff : integer;
            variable nx, ny : integer;
        begin
            current_val := input_image(y, x);
            
            -- ????? ????? ?? ???????? ?????
            for dy in -1 to 1 loop
                for dx in -1 to 1 loop
                    if dx = 0 and dy = 0 then next; end if;
                    
                    nx := x + dx;
                    ny := y + dy;
                    
                    if nx >= 0 and nx < IMG_WIDTH and ny >= 0 and ny < IMG_HEIGHT then
                        neighbor_val := input_image(ny, nx);
                        if current_val > neighbor_val then
                            diff := current_val - neighbor_val;
                        else
                            diff := neighbor_val - current_val;
                        end if;
                        
                        if diff > max_diff then
                            max_diff := diff;
                        end if;
                    end if;
                end loop;
            end loop;
            
            return max_diff >= MIN_EDGE_STRENGTH;
        end function;
        
        -- ???? ??? ???? ????
        impure function denoise_pixel(x, y : integer) return integer is
            variable white_count : integer := 0;
            variable black_count : integer := 0;
            variable total_count : integer := 0;
            variable nx, ny : integer;
            variable neighbor_val : integer;
        begin
            -- ????? ????????? ???? ? ???? ?? ???? 3x3
            for dy in -1 to 1 loop
                for dx in -1 to 1 loop
                    nx := x + dx;
                    ny := y + dy;
                    
                    if nx >= 0 and nx < IMG_WIDTH and ny >= 0 and ny < IMG_HEIGHT then
                        neighbor_val := output_image(ny, nx);
                        total_count := total_count + 1;
                        
                        if neighbor_val = 255 then
                            white_count := white_count + 1;
                        else
                            black_count := black_count + 1;
                        end if;
                    end if;
                end loop;
            end loop;
            
            -- ?????????? ?? ???? ??????
            if white_count > black_count then
                return 255;
            else
                return 0;
            end if;
        end function;
        
    begin
        -- 1. ?????? ????? edge detection
        report "???? ?????? Adaptive Thresholding ????? ???...";
        file_open(status, input_file, input_file_name, read_mode);
        if status /= open_ok then
            report "??? ?? ??? ???? ???? ?????: " & input_file_name severity failure;
        end if;
        
        report "?????? ?????...";
        for y in 0 to IMG_HEIGHT-1 loop
            for x in 0 to IMG_WIDTH-1 loop
                if not endfile(input_file) then
                    readline(input_file, input_line);
                    read(input_line, pixel_value);
                    input_image(y, x) := clamp(pixel_value, 0, 255);
                else
                    input_image(y, x) := 0;
                end if;
            end loop;
            
            -- ????? ??????
            if (y mod 80) = 0 then
                report "?????? ??: " & integer'image(y) & "/" & integer'image(IMG_HEIGHT) & " ??";
            end if;
        end loop;
        file_close(input_file);
        
        -- 2. ????? Adaptive Thresholding ????? ???
        report "????? Adaptive Thresholding...";
        for y in 0 to IMG_HEIGHT-1 loop
            for x in 0 to IMG_WIDTH-1 loop
                current_pixel := input_image(y, x);
                
                -- ?????? ??????? ????
                mean_val := calculate_local_mean(x, y);
                
                -- ?????? ?????? ??????
                threshold_val := mean_val - C_CONSTANT;
                
                -- ????? ?????? ???? ??????? ???
                if is_strong_edge(x, y) then
                    threshold_val := threshold_val - 5; -- ?????? ???????? ???? ??????? ???
                end if;
                
                -- ????? ????????????
                if current_pixel > clamp(threshold_val, 0, 255) then
                    output_image(y, x) := 255; -- ????
                else
                    output_image(y, x) := 0;   -- ????
                end if;
            end loop;
            
            if (y mod 80) = 0 then
                report "?????? ??: " & integer'image(y) & "/" & integer'image(IMG_HEIGHT) & " ??";
            end if;
        end loop;
        
        -- 3. ??? ???? ???? (???????)
        report "????? ??? ????...";
        for y in 1 to IMG_HEIGHT-2 loop
            for x in 1 to IMG_WIDTH-2 loop
                -- ??? ????????? ????? ?? ????? ??
                if (output_image(y, x) = 255 and 
                    output_image(y-1, x) = 0 and output_image(y+1, x) = 0 and 
                    output_image(y, x-1) = 0 and output_image(y, x+1) = 0) then
                    output_image(y, x) := 0; -- ??? ???? ???? ?????
                elsif (output_image(y, x) = 0 and 
                       output_image(y-1, x) = 255 and output_image(y+1, x) = 255 and 
                       output_image(y, x-1) = 255 and output_image(y, x+1) = 255) then
                    output_image(y, x) := 255; -- ?? ???? ???? ???? ?????
                end if;
            end loop;
        end loop;
        
        -- 4. ????? ?????
        report "????? ????? ?????...";
        file_open(status, output_file, output_file_name, write_mode);
        if status /= open_ok then
            report "??? ?? ??? ???? ???? ?????: " & output_file_name severity failure;
        end if;
        
        for y in 0 to IMG_HEIGHT-1 loop
            for x in 0 to IMG_WIDTH-1 loop
                write(output_line, output_image(y, x));
                writeline(output_file, output_line);
            end loop;
            
            if (y mod 80) = 0 then
                report "????? ??: " & integer'image(y) & "/" & integer'image(IMG_HEIGHT) & " ??";
            end if;
        end loop;
        file_close(output_file);
        
        -- ????? ?????
        report "=== Adaptive Thresholding ????? ??? ???? ?? ===";
        report "???? ?????: " & input_file_name;
        report "???? ?????: " & output_file_name;
        report "?????? ?????: " & integer'image(IMG_WIDTH) & "x" & integer'image(IMG_HEIGHT);
        report "?????? ????: " & integer'image(BLOCK_SIZE) & "x" & integer'image(BLOCK_SIZE);
        report "???? C: " & integer'image(C_CONSTANT);
        report "????? ???? ???: " & integer'image(MIN_EDGE_STRENGTH);
        report "????????? ??????????:";
        report "- ???????? ??????? ? ???????";
        report "- ????? ??????? ???";
        report "- ??? ???? ?????";
        report "- ????? ???? ????? ????";
        
        wait;
        
    end process main_process;
    
end Behavioral;