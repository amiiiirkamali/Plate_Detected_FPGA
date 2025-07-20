library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
use STD.TEXTIO.ALL;
use IEEE.STD_LOGIC_TEXTIO.ALL;

entity improved_clahe_filter is
    generic (
        input_file_name : string := "E:\data\0-data\image61.txt";
        output_file_name : string := "E:\data\1-output clahe\image61.txt";
        IMG_WIDTH : integer := 640;   
        IMG_HEIGHT : integer := 640		
    );
end improved_clahe_filter;

architecture Behavioral of improved_clahe_filter is
    
    constant CLAHE_CLIP_LIMIT : integer := 20;  
    constant TILE_SIZE : integer := 64;         
    constant BLEND_FACTOR : integer := 70;      
    
    function max(a, b: integer) return integer is
    begin
        if a > b then return a; else return b; end if;
    end function;
    
    function min(a, b: integer) return integer is
    begin
        if a < b then return a; else return b; end if;
    end function;
    
    -- Custom types
    type integer_array is array (natural range <>) of integer;
    
begin
    main_process: process
        -- Image data types
        type image_array is array (0 to IMG_HEIGHT-1, 0 to IMG_WIDTH-1) of integer range 0 to 255;
        
        -- File variables
        file input_file : text;
        file output_file : text;
        variable input_line : line;
        variable output_line : line;
        variable pixel_value : integer;
        variable status : file_open_status;
        
        -- Image processing variables
        variable input_image : image_array;
        variable clahe_image : image_array;
        variable final_image : image_array;
        
        -- ????? ????? CLAHE function
        impure function apply_improved_clahe(x, y : integer) return integer is
            variable local_hist : integer_array(0 to 255) := (others => 0);
            variable tile_x1, tile_y1, tile_x2, tile_y2 : integer;
            variable enhanced_value : integer;
            variable cumulative : integer := 0;
            variable total_pixels : integer;
            variable clipped_hist : integer_array(0 to 255) := (others => 0);
            variable excess : integer := 0;
            variable redistribution : integer := 0;
            variable remainder : integer := 0;
        begin
            -- Define tile boundaries with overlap handling
            tile_x1 := max(0, (x / TILE_SIZE) * TILE_SIZE - TILE_SIZE/4);
            tile_y1 := max(0, (y / TILE_SIZE) * TILE_SIZE - TILE_SIZE/4);
            tile_x2 := min(tile_x1 + TILE_SIZE + TILE_SIZE/2 - 1, IMG_WIDTH - 1);
            tile_y2 := min(tile_y1 + TILE_SIZE + TILE_SIZE/2 - 1, IMG_HEIGHT - 1);
            
            -- Build local histogram
            for ty in tile_y1 to tile_y2 loop
                for tx in tile_x1 to tile_x2 loop
                    local_hist(input_image(ty, tx)) := local_hist(input_image(ty, tx)) + 1;
                end loop;
            end loop;
            
            total_pixels := (tile_x2 - tile_x1 + 1) * (tile_y2 - tile_y1 + 1);
            
            -- Apply clipping and calculate excess
            excess := 0;
            for i in 0 to 255 loop
                if local_hist(i) > CLAHE_CLIP_LIMIT then
                    excess := excess + (local_hist(i) - CLAHE_CLIP_LIMIT);
                    clipped_hist(i) := CLAHE_CLIP_LIMIT;
                else
                    clipped_hist(i) := local_hist(i);
                end if;
            end loop;
            
            -- Redistribute excess more evenly
            if excess > 0 then
                redistribution := excess / 256;
                remainder := excess mod 256;
                
                for i in 0 to 255 loop
                    clipped_hist(i) := clipped_hist(i) + redistribution;
                    if i < remainder then
                        clipped_hist(i) := clipped_hist(i) + 1;
                    end if;
                end loop;
            end if;
            
            -- Calculate cumulative distribution function (CDF)
            cumulative := 0;
            for i in 0 to input_image(y, x) loop
                cumulative := cumulative + clipped_hist(i);
            end loop;
            
            -- Normalize to get enhanced value
            if total_pixels > 0 then
                enhanced_value := (cumulative * 255) / total_pixels;
            else
                enhanced_value := input_image(y, x);
            end if;
            
            -- Clamp values
            if enhanced_value > 255 then enhanced_value := 255; end if;
            if enhanced_value < 0 then enhanced_value := 0; end if;
            
            return enhanced_value;
        end function;
        
        -- ???? ????? adaptive
        impure function apply_adaptive_blend(x, y : integer; clahe_val : integer) return integer is
            variable original : integer;
            variable final_val : integer;
            variable local_contrast : integer;
        begin
            original := input_image(y, x);
            
            -- ?????? ??????? ???? ???? ????? ???
            local_contrast := 0;
            if x > 0 and x < IMG_WIDTH-1 and y > 0 and y < IMG_HEIGHT-1 then
                local_contrast := abs(input_image(y,x) - input_image(y,x-1)) +
                                abs(input_image(y,x) - input_image(y,x+1)) +
                                abs(input_image(y,x) - input_image(y-1,x)) +
                                abs(input_image(y,x) - input_image(y+1,x));
                local_contrast := local_contrast / 4;
            end if;
            
            -- ????? ??? ?? ???? ??????? ????
            if local_contrast < 10 then
                -- ????? smooth: ????? CLAHE
                final_val := (clahe_val * 80 + original * 20) / 100;
            elsif local_contrast > 50 then
                -- ????? high contrast: ???? CLAHE
                final_val := (clahe_val * 50 + original * 50) / 100;
            else
                -- ???? ????
                final_val := (clahe_val * BLEND_FACTOR + original * (100 - BLEND_FACTOR)) / 100;
            end if;
            
            -- Clamp final value
            if final_val > 255 then final_val := 255; end if;
            if final_val < 0 then final_val := 0; end if;
            
            return final_val;
        end function;
        
    begin
        -- 1. Read image from file
        report "Starting image reading from file: " & input_file_name;
        file_open(status, input_file, input_file_name, read_mode);
        if status /= open_ok then
            report "Error opening input file: " & input_file_name severity failure;
        end if;
        
        for y in 0 to IMG_HEIGHT-1 loop
            for x in 0 to IMG_WIDTH-1 loop
                if not endfile(input_file) then
                    readline(input_file, input_line);
                    read(input_line, pixel_value);
                    input_image(y, x) := pixel_value;
                else
                    input_image(y, x) := 0;
                end if;
            end loop;
            
            if (y mod 50) = 0 then
                report "Reading progress: " & integer'image(y) & "/" & integer'image(IMG_HEIGHT);
            end if;
        end loop;
        
        file_close(input_file);
        report "Image reading completed successfully!";
        
        -- 2. Apply improved CLAHE filter
        report "Applying improved CLAHE filter...";
        for y in 0 to IMG_HEIGHT-1 loop
            for x in 0 to IMG_WIDTH-1 loop
                clahe_image(y, x) := apply_improved_clahe(x, y);
            end loop;
            
            if (y mod 50) = 0 then
                report "CLAHE progress: " & integer'image(y) & "/" & integer'image(IMG_HEIGHT);
            end if;
        end loop;
        report "CLAHE filter applied successfully!";
        
        -- 3. Apply adaptive blending
        report "Applying adaptive blending...";
        for y in 0 to IMG_HEIGHT-1 loop
            for x in 0 to IMG_WIDTH-1 loop
                final_image(y, x) := apply_adaptive_blend(x, y, clahe_image(y, x));
            end loop;
            
            if (y mod 50) = 0 then
                report "Blending progress: " & integer'image(y) & "/" & integer'image(IMG_HEIGHT);
            end if;
        end loop;
        report "Adaptive blending completed!";
        
        -- 4. Write enhanced image to output file
        report "Writing enhanced image to file: " & output_file_name;
        file_open(status, output_file, output_file_name, write_mode);
        if status /= open_ok then
            report "Error opening output file: " & output_file_name severity failure;
        end if;
        
        for y in 0 to IMG_HEIGHT-1 loop
            for x in 0 to IMG_WIDTH-1 loop
                write(output_line, final_image(y, x));
                writeline(output_file, output_line);
            end loop;
            
            if (y mod 50) = 0 then
                report "Writing progress: " & integer'image(y) & "/" & integer'image(IMG_HEIGHT);
            end if;
        end loop;
        
        file_close(output_file);
        report "Enhanced image written to output file successfully!";
        
        -- 5. Final summary
        report "=== Improved CLAHE Filter Processing Summary ===";
        report "Input file: " & input_file_name;
        report "Output file: " & output_file_name;
        report "Image dimensions: " & integer'image(IMG_WIDTH) & "x" & integer'image(IMG_HEIGHT);
        report "CLAHE tile size: " & integer'image(TILE_SIZE) & "x" & integer'image(TILE_SIZE);
        report "CLAHE clip limit: " & integer'image(CLAHE_CLIP_LIMIT);
        report "Blend factor: " & integer'image(BLEND_FACTOR) & "% CLAHE";
        report "Processing completed successfully with improved quality!";
        
        wait;
        
    end process main_process;
    
end Behavioral;