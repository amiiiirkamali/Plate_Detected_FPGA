library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
use STD.TEXTIO.ALL;
use IEEE.STD_LOGIC_TEXTIO.ALL;

entity morphology_license_plate_optimized is
    generic (
        input_file_name : string := "E:\data\4-output adaptive threshold\image61.txt";
        output_file_name : string := "E:\data\5-output morphological\image61.txt";
        IMG_WIDTH : integer := 640;
        IMG_HEIGHT : integer := 640
    );
end morphology_license_plate_optimized;

architecture Behavioral of morphology_license_plate_optimized is
    
    -- ?????????? ????? ??? ???? ???? ?????
    constant NOISE_KERNEL_SIZE : integer := 3;     -- 3x3 ???? ??? ????
    constant CONNECT_KERNEL_W : integer := 7;      -- 7x3 ???? ????? ???? ?????/???????
    constant CONNECT_KERNEL_H : integer := 3;
    constant CLEAN_KERNEL_SIZE : integer := 3;     -- 3x3 ???? ??????? ?????
    constant MIN_COMPONENT_SIZE : integer := 8;    -- ????? ?????? component ?????
    
    -- ???? ????
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
        variable temp_image1 : image_array;
        variable temp_image2 : image_array;
        
        -- ???? ??? ???? ?????? (????? ????)
        impure function smart_noise_removal(img : image_array; x, y : integer) return integer is
            variable current_pixel : integer;
            variable white_neighbors : integer := 0;
            variable black_neighbors : integer := 0;
            variable corner_whites : integer := 0;
            variable cross_whites : integer := 0;
            variable nx, ny : integer;
        begin
            current_pixel := img(y, x);
            
            -- ????? ???????? ?????
            for dy in -1 to 1 loop
                for dx in -1 to 1 loop
                    if dx = 0 and dy = 0 then next; end if;
                    
                    nx := x + dx;
                    ny := y + dy;
                    
                    if nx >= 0 and nx < IMG_WIDTH and ny >= 0 and ny < IMG_HEIGHT then
                        if img(ny, nx) = 255 then
                            white_neighbors := white_neighbors + 1;
                            
                            -- ????? ??????? ? ??????
                            if (dx /= 0 and dy /= 0) then
                                corner_whites := corner_whites + 1;
                            else
                                cross_whites := cross_whites + 1;
                            end if;
                        else
                            black_neighbors := black_neighbors + 1;
                        end if;
                    else
                        black_neighbors := black_neighbors + 1; -- ??? ?? ????? ????
                    end if;
                end loop;
            end loop;
            
            if current_pixel = 255 then
                -- ??? ???? ???? ????? ? ?????
                if white_neighbors <= 1 then
                    return 0; -- ???? ?????? ?????
                elsif white_neighbors = 2 and corner_whites = 2 and cross_whites = 0 then
                    return 0; -- ?? ???? ???? (???????? ????)
                elsif white_neighbors <= 3 and cross_whites = 0 then
                    return 0; -- ???? ????? ????? ???
                else
                    return 255;
                end if;
            else
                -- ?? ???? ????????? ???? ?? ????
                if white_neighbors >= 6 then
                    return 255; -- ????? ??? ???? ????
                elsif white_neighbors >= 4 and cross_whites >= 3 then
                    return 255; -- ????? ????? ???
                else
                    return 0;
                end if;
            end if;
        end function;
        
        -- ???? ????? ???? ????? (????? ????)
        impure function connect_characters_advanced(img : image_array; x, y : integer) return integer is
            variable current_pixel : integer;
            variable left_white, right_white : boolean := false;
            variable up_white, down_white : boolean := false;
            variable horizontal_gap : integer := 0;
            variable vertical_support : integer := 0;
            variable nx, ny : integer;
        begin
            current_pixel := img(y, x);
            
            -- ??? ????? ???? ???? ???? ?????? ???? ????
            if current_pixel = 255 then
                return 255;
            end if;
            
            -- ????? ???? ????????? ???? ?? ?? ? ???? (???? ????? ????)
            for dx in 1 to 4 loop
                -- ??? ????
                nx := x + dx;
                if nx < IMG_WIDTH and img(y, nx) = 255 then
                    right_white := true;
                    exit;
                end if;
            end loop;
            
            for dx in 1 to 4 loop
                -- ??? ??
                nx := x - dx;
                if nx >= 0 and img(y, nx) = 255 then
                    left_white := true;
                    exit;
                end if;
            end loop;
            
            -- ??? ?? ?? ? ???? ????? ???? ???? ??
            if left_white and right_white then
                -- ????? ???????? ????? (??? ??? ?? ????? ????)
                for dy in -1 to 1 loop
                    ny := y + dy;
                    if ny >= 0 and ny < IMG_HEIGHT then
                        -- ????? ???? ?????? ????
                        if img(ny, x) = 255 then
                            vertical_support := vertical_support + 1;
                        end if;
                        
                        -- ????? ????? ?????
                        for dx in -1 to 1 loop
                            nx := x + dx;
                            if nx >= 0 and nx < IMG_WIDTH and img(ny, nx) = 255 then
                                vertical_support := vertical_support + 1;
                            end if;
                        end loop;
                    end if;
                end loop;
                
                -- ??? ???????? ???? ???? ????? ????? ??
                if vertical_support >= 2 then
                    return 255;
                end if;
            end if;
            
            return current_pixel;
        end function;
        
        -- ???? Opening ?????
        impure function optimized_erosion(img : image_array; x, y : integer) return integer is
            variable min_val : integer := 255;
            variable nx, ny : integer;
        begin
            -- Erosion ?? 3x3 kernel
            for dy in -1 to 1 loop
                for dx in -1 to 1 loop
                    nx := x + dx;
                    ny := y + dy;
                    
                    if nx >= 0 and nx < IMG_WIDTH and ny >= 0 and ny < IMG_HEIGHT then
                        if img(ny, nx) < min_val then
                            min_val := img(ny, nx);
                        end if;
                    else
                        min_val := 0; -- ??? ????
                    end if;
                end loop;
            end loop;
            return min_val;
        end function;
        
        impure function optimized_dilation(img : image_array; x, y : integer) return integer is
            variable max_val : integer := 0;
            variable nx, ny : integer;
        begin
            -- Dilation ?? 3x3 kernel
            for dy in -1 to 1 loop
                for dx in -1 to 1 loop
                    nx := x + dx;
                    ny := y + dy;
                    
                    if nx >= 0 and nx < IMG_WIDTH and ny >= 0 and ny < IMG_HEIGHT then
                        if img(ny, nx) > max_val then
                            max_val := img(ny, nx);
                        end if;
                    end if;
                end loop;
            end loop;
            return max_val;
        end function;
        
        -- ???? ??????? ????? ???????
        impure function final_cleanup(img : image_array; x, y : integer) return integer is
            variable current_pixel : integer;
            variable component_size : integer := 0;
            variable nx, ny : integer;
            variable connectivity : integer := 0;
        begin
            current_pixel := img(y, x);
            
            if current_pixel = 0 then
                return 0;
            end if;
            
            -- ????? ?????? component (??????)
            for dy in -2 to 2 loop
                for dx in -2 to 2 loop
                    nx := x + dx;
                    ny := y + dy;
                    
                    if nx >= 0 and nx < IMG_WIDTH and ny >= 0 and ny < IMG_HEIGHT then
                        if img(ny, nx) = 255 then
                            component_size := component_size + 1;
                            
                            -- ????? ??????
                            if (dx = 0 or dy = 0) and not (dx = 0 and dy = 0) then
                                connectivity := connectivity + 1;
                            end if;
                        end if;
                    end if;
                end loop;
            end loop;
            
            -- ??? component ??? ???? ????
            if component_size < MIN_COMPONENT_SIZE then
                return 0;
            elsif connectivity < 2 then
                return 0; -- component ?????
            else
                return 255;
            end if;
        end function;
        
    begin
        -- 1. ?????? ?????
        report "=== ???? Morphology ????? ??? ???? ???? ===";
        file_open(status, input_file, input_file_name, read_mode);
        if status /= open_ok then
            report "??? ?? ??? ???? ???? ?????: " & input_file_name severity failure;
        end if;
        
        report "?????? ????? ?????...";
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
            
            if (y mod 128) = 0 then
                report "?????? ??????: " & integer'image(y) & "/" & integer'image(IMG_HEIGHT);
            end if;
        end loop;
        file_close(input_file);
        
        -- 2. Pipeline ????? ??? (4 ?????)
        
        -- ????? 1: ??? ???? ??????
        report "????? 1: ??? ???? ??????...";
        for y in 0 to IMG_HEIGHT-1 loop
            for x in 0 to IMG_WIDTH-1 loop
                temp_image1(y, x) := smart_noise_removal(input_image, x, y);
            end loop;
        end loop;
        
        -- ????? 2: ????? ???? ???????
        report "????? 2: ????? ????? ????...";
        for y in 0 to IMG_HEIGHT-1 loop
            for x in 0 to IMG_WIDTH-1 loop
                temp_image2(y, x) := connect_characters_advanced(temp_image1, x, y);
            end loop;
        end loop;
        
        -- ????? 3: Opening (Erosion + Dilation)
        report "????? 3: Opening ???? ???????...";
        
        -- ????? Erosion
        for y in 0 to IMG_HEIGHT-1 loop
            for x in 0 to IMG_WIDTH-1 loop
                temp_image1(y, x) := optimized_erosion(temp_image2, x, y);
            end loop;
        end loop;
        
        -- ??? Dilation
        for y in 0 to IMG_HEIGHT-1 loop
            for x in 0 to IMG_WIDTH-1 loop
                temp_image2(y, x) := optimized_dilation(temp_image1, x, y);
            end loop;
        end loop;
        
        -- ????? 4: ??????? ????? ???????
        report "????? 4: ??????? ?????...";
        for y in 0 to IMG_HEIGHT-1 loop
            for x in 0 to IMG_WIDTH-1 loop
                output_image(y, x) := final_cleanup(temp_image2, x, y);
            end loop;
        end loop;
        
        -- 3. ????? ?????
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
            
            if (y mod 128) = 0 then
                report "?????? ?????: " & integer'image(y) & "/" & integer'image(IMG_HEIGHT);
            end if;
        end loop;
        file_close(output_file);
        
        -- 4. ???????? ? ????
        report "=== Morphology ????? ??? ???? ?? ===";
        report "";
        report "???????:";
        report "  ?????: " & input_file_name;
        report "  ?????: " & output_file_name;
        report "  ?????: " & integer'image(IMG_WIDTH) & "x" & integer'image(IMG_HEIGHT);
        report "";
        report "????? ?????? ????? ???:";
        report "1. ??? ???? ??????";
        report "   - ????? ???? ?????";
        report "   - ??? ???? ???? ????";
        report "   - ?? ???? ????????? ???? ????";
        report "";
        report "2. ????? ????? ????"; 
        report "   - ?????? ?????? ?? ??? ????";
        report "   - ????? ???????? ?????";
        report "   - ????? ????? ?? ??? ??????";
        report "";
        report "3. Opening ???????";
        report "   - Erosion ???? ??? ??????? ????";
        report "   - Dilation ???? ????????? ??? ????";
        report "";
        report "4. ??????? ????? ???????";
        report "   - ??? component ??? ????";
        report "   - ????? connectivity";
        report "   - ??? ????????? ?????";
        report "";
        report "????????????? ???? ???? ?????:";
        report "- ????? kernel ?? ???? ???? ????? ????";
        report "- ???????? ????? ????? ????? ??? ????";
        report "- ??? ?????? ???? ???? ???? ?? ????";
        report "- ??????? ????? ?? ??? ?????? ???";
        report "";
        report "=== ?????? ?? ?????? ????? ?? ===";
        
        wait;
        
    end process main_process;
    
end Behavioral;