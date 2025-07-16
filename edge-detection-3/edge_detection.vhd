library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
use STD.TEXTIO.ALL;
use IEEE.STD_LOGIC_TEXTIO.ALL;

entity edge_detection_filter is
    generic (
        input_file_name : string := "E:\data\2-output gaussian blur\image61.txt";  -- ????? CLAHE
        output_file_name : string := "E:\data\3-output edge detection\image61.txt";
        IMG_WIDTH : integer := 640;   
        IMG_HEIGHT : integer := 640		
    );
end edge_detection_filter;

architecture Behavioral of edge_detection_filter is
    
    -- Enhanced edge detection parameters
    constant GAUSSIAN_SIZE : integer := 3;  -- Reduced for better detail preservation
    constant LOW_THRESHOLD : integer := 30;   -- Lowered for better weak edge detection
    constant HIGH_THRESHOLD : integer := 100; -- Lowered for more sensitive detection
    constant ENHANCEMENT_FACTOR : integer := 2; -- For gradient enhancement
    
    -- Helper functions
    function max(a, b: integer) return integer is
    begin
        if a > b then return a; else return b; end if;
    end function;
    
    function min(a, b: integer) return integer is
    begin
        if a < b then return a; else return b; end if;
    end function;
    
    function abs_val(a: integer) return integer is
    begin
        if a < 0 then return -a; else return a; end if;
    end function;
    
    function sqrt_approx(x: integer) return integer is
        variable result: integer := 0;
        variable i: integer := 1;
    begin
        while i * i <= x loop
            result := i;
            i := i + 1;
        end loop;
        return result;
    end function;
    
    -- Enhanced clamp function
    function clamp(value, min_val, max_val: integer) return integer is
    begin
        if value < min_val then return min_val;
        elsif value > max_val then return max_val;
        else return value;
        end if;
    end function;
    
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
        variable enhanced_image : image_array;  -- Added for preprocessing
        variable blurred_image : image_array;
        variable gradient_x : image_array;
        variable gradient_y : image_array;
        variable gradient_mag : image_array;
        variable gradient_dir : image_array;
        variable nms_image : image_array;
        variable final_edges : image_array;
        
        -- Smaller, sharper Gaussian kernel (3x3)
        type gaussian_kernel_3x3 is array (0 to 2, 0 to 2) of integer;
        constant gauss_kernel_3x3 : gaussian_kernel_3x3 := (
            (1, 2, 1),
            (2, 4, 2),
            (1, 2, 1)
        );
        constant gauss_sum_3x3 : integer := 16;
        
        -- Enhanced Sobel kernels with higher sensitivity
        type sobel_kernel is array (0 to 2, 0 to 2) of integer;
        constant sobel_x : sobel_kernel := (
            (-1, 0, 1),
            (-2, 0, 2),
            (-1, 0, 1)
        );
        constant sobel_y : sobel_kernel := (
            (-1, -2, -1),
            (0, 0, 0),
            (1, 2, 1)
        );
        
        -- Sharpening kernel for preprocessing
        type sharpen_kernel is array (0 to 2, 0 to 2) of integer;
        constant sharpen : sharpen_kernel := (
            (0, -1, 0),
            (-1, 5, -1),
            (0, -1, 0)
        );
        
        -- Preprocessing: Image sharpening
        impure function apply_sharpening(x, y : integer) return integer is
            variable sum : integer := 0;
            variable kx, ky : integer;
            variable px, py : integer;
        begin
            for ky in 0 to 2 loop
                for kx in 0 to 2 loop
                    px := x + kx - 1;
                    py := y + ky - 1;
                    
                    -- Boundary handling
                    if px < 0 then px := 0; end if;
                    if px >= IMG_WIDTH then px := IMG_WIDTH - 1; end if;
                    if py < 0 then py := 0; end if;
                    if py >= IMG_HEIGHT then py := IMG_HEIGHT - 1; end if;
                    
                    sum := sum + input_image(py, px) * sharpen(ky, kx);
                end loop;
            end loop;
            
            return clamp(sum, 0, 255);
        end function;
        
        -- Smaller Gaussian blur function
        impure function apply_gaussian_blur_3x3(x, y : integer) return integer is
            variable sum : integer := 0;
            variable kx, ky : integer;
            variable px, py : integer;
        begin
            for ky in 0 to 2 loop
                for kx in 0 to 2 loop
                    px := x + kx - 1;
                    py := y + ky - 1;
                    
                    -- Boundary handling
                    if px < 0 then px := 0; end if;
                    if px >= IMG_WIDTH then px := IMG_WIDTH - 1; end if;
                    if py < 0 then py := 0; end if;
                    if py >= IMG_HEIGHT then py := IMG_HEIGHT - 1; end if;
                    
                    sum := sum + enhanced_image(py, px) * gauss_kernel_3x3(ky, kx);
                end loop;
            end loop;
            
            return sum / gauss_sum_3x3;
        end function;
        
        -- Enhanced Sobel gradient calculation with amplification
        impure function apply_sobel_x_enhanced(x, y : integer) return integer is
            variable sum : integer := 0;
            variable kx, ky : integer;
            variable px, py : integer;
        begin
            for ky in 0 to 2 loop
                for kx in 0 to 2 loop
                    px := x + kx - 1;
                    py := y + ky - 1;
                    
                    if px < 0 then px := 0; end if;
                    if px >= IMG_WIDTH then px := IMG_WIDTH - 1; end if;
                    if py < 0 then py := 0; end if;
                    if py >= IMG_HEIGHT then py := IMG_HEIGHT - 1; end if;
                    
                    sum := sum + blurred_image(py, px) * sobel_x(ky, kx);
                end loop;
            end loop;
            
            return sum * ENHANCEMENT_FACTOR;  -- Amplify gradients
        end function;
        
        impure function apply_sobel_y_enhanced(x, y : integer) return integer is
            variable sum : integer := 0;
            variable kx, ky : integer;
            variable px, py : integer;
        begin
            for ky in 0 to 2 loop
                for kx in 0 to 2 loop
                    px := x + kx - 1;
                    py := y + ky - 1;
                    
                    if px < 0 then px := 0; end if;
                    if px >= IMG_WIDTH then px := IMG_WIDTH - 1; end if;
                    if py < 0 then py := 0; end if;
                    if py >= IMG_HEIGHT then py := IMG_HEIGHT - 1; end if;
                    
                    sum := sum + blurred_image(py, px) * sobel_y(ky, kx);
                end loop;
            end loop;
            
            return sum * ENHANCEMENT_FACTOR;  -- Amplify gradients
        end function;
        
        -- Enhanced non-maximum suppression with 8-directional support
        impure function non_max_suppression_enhanced(x, y : integer) return integer is
            variable gx, gy, mag : integer;
            variable angle : integer;
            variable q, r : integer;
            variable abs_gx, abs_gy : integer;
        begin
            gx := gradient_x(y, x);
            gy := gradient_y(y, x);
            mag := gradient_mag(y, x);
            
            if mag = 0 then return 0; end if;
            
            abs_gx := abs_val(gx);
            abs_gy := abs_val(gy);
            
            -- Calculate angle with 8 directions
            if abs_gx > abs_gy * 2 then
                -- Horizontal (0 or 180 degrees)
                angle := 0;
            elsif abs_gy > abs_gx * 2 then
                -- Vertical (90 or 270 degrees)  
                angle := 90;
            elsif (gx > 0 and gy > 0) or (gx < 0 and gy < 0) then
                -- Diagonal 45 degrees
                angle := 45;
            else
                -- Diagonal 135 degrees
                angle := 135;
            end if;
            
            -- Check neighbors based on gradient direction
            case angle is
                when 0 => -- Horizontal
                    if x > 0 and x < IMG_WIDTH-1 then
                        q := gradient_mag(y, x-1);
                        r := gradient_mag(y, x+1);
                    else
                        return mag;
                    end if;
                when 45 => -- Diagonal /
                    if x > 0 and x < IMG_WIDTH-1 and y > 0 and y < IMG_HEIGHT-1 then
                        q := gradient_mag(y-1, x+1);
                        r := gradient_mag(y+1, x-1);
                    else
                        return mag;
                    end if;
                when 90 => -- Vertical
                    if y > 0 and y < IMG_HEIGHT-1 then
                        q := gradient_mag(y-1, x);
                        r := gradient_mag(y+1, x);
                    else
                        return mag;
                    end if;
                when 135 => -- Diagonal \
                    if x > 0 and x < IMG_WIDTH-1 and y > 0 and y < IMG_HEIGHT-1 then
                        q := gradient_mag(y-1, x-1);
                        r := gradient_mag(y+1, x+1);
                    else
                        return mag;
                    end if;
                when others =>
                    return mag;
            end case;
            
            -- Suppress if not local maximum
            if mag >= q and mag >= r then
                return mag;
            else
                return 0;
            end if;
        end function;
        
        -- Enhanced double threshold
        impure function double_threshold_enhanced(x, y : integer) return integer is
            variable mag : integer;
        begin
            mag := nms_image(y, x);
            
            if mag >= HIGH_THRESHOLD then
                return 255; -- Strong edge
            elsif mag >= LOW_THRESHOLD then
                return 128; -- Weak edge
            else
                return 0;   -- No edge
            end if;
        end function;
        
        -- Enhanced edge tracking with better connectivity
        impure function edge_tracking_enhanced(x, y : integer) return integer is
            variable current : integer;
            variable dx, dy : integer;
            variable nx, ny : integer;
            variable neighbor : integer;
            variable strong_neighbor_count : integer := 0;
        begin
            current := final_edges(y, x);
            
            if current = 255 then
                return 255; -- Already strong edge
            elsif current = 0 then
                return 0;   -- No edge
            else -- current = 128 (weak edge)
                -- Check 8-connected neighbors for strong edges
                for dy in -1 to 1 loop
                    for dx in -1 to 1 loop
                        if dx = 0 and dy = 0 then
                            next; -- Skip center pixel
                        end if;
                        
                        nx := x + dx;
                        ny := y + dy;
                        
                        if nx >= 0 and nx < IMG_WIDTH and ny >= 0 and ny < IMG_HEIGHT then
                            neighbor := final_edges(ny, nx);
                            if neighbor = 255 then
                                strong_neighbor_count := strong_neighbor_count + 1;
                            end if;
                        end if;
                    end loop;
                end loop;
                
                -- Connect if at least one strong neighbor
                if strong_neighbor_count > 0 then
                    return 255;
                else
                    return 0;
                end if;
            end if;
        end function;
        
    begin
        -- 1. Read input image
        report "Reading input image...";
        file_open(status, input_file, input_file_name, read_mode);
        if status /= open_ok then
            report "Error opening input file" severity failure;
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
        end loop;
        file_close(input_file);
        
        -- 2. Preprocessing: Image sharpening for better edge definition
        report "Applying image sharpening...";
        for y in 0 to IMG_HEIGHT-1 loop
            for x in 0 to IMG_WIDTH-1 loop
                enhanced_image(y, x) := apply_sharpening(x, y);
            end loop;
        end loop;
        
        -- 3. Smaller Gaussian blur (preserves more detail)
        report "Applying optimized Gaussian blur...";
        for y in 0 to IMG_HEIGHT-1 loop
            for x in 0 to IMG_WIDTH-1 loop
                blurred_image(y, x) := apply_gaussian_blur_3x3(x, y);
            end loop;
        end loop;
        
        -- 4. Enhanced Sobel gradient calculation
        report "Calculating enhanced gradients...";
        for y in 0 to IMG_HEIGHT-1 loop
            for x in 0 to IMG_WIDTH-1 loop
                gradient_x(y, x) := apply_sobel_x_enhanced(x, y);
                gradient_y(y, x) := apply_sobel_y_enhanced(x, y);
                
                -- Calculate magnitude with better precision
                gradient_mag(y, x) := sqrt_approx(gradient_x(y, x) * gradient_x(y, x) + 
                                                  gradient_y(y, x) * gradient_y(y, x));
                
                -- Enhanced clamping
                gradient_mag(y, x) := clamp(gradient_mag(y, x), 0, 255);
            end loop;
        end loop;
        
        -- 5. Enhanced non-maximum suppression
        report "Applying enhanced non-maximum suppression...";
        for y in 0 to IMG_HEIGHT-1 loop
            for x in 0 to IMG_WIDTH-1 loop
                nms_image(y, x) := non_max_suppression_enhanced(x, y);
            end loop;
        end loop;
        
        -- 6. Enhanced double threshold
        report "Applying enhanced double threshold...";
        for y in 0 to IMG_HEIGHT-1 loop
            for x in 0 to IMG_WIDTH-1 loop
                final_edges(y, x) := double_threshold_enhanced(x, y);
            end loop;
        end loop;
        
        -- 7. Enhanced edge tracking by hysteresis (more passes for better connectivity)
        report "Enhanced edge tracking by hysteresis...";
        for pass in 1 to 5 loop  -- Increased passes
            for y in 0 to IMG_HEIGHT-1 loop
                for x in 0 to IMG_WIDTH-1 loop
                    if final_edges(y, x) = 128 then
                        final_edges(y, x) := edge_tracking_enhanced(x, y);
                    end if;
                end loop;
            end loop;
        end loop;
        
        -- Convert remaining weak edges to no edges
        for y in 0 to IMG_HEIGHT-1 loop
            for x in 0 to IMG_WIDTH-1 loop
                if final_edges(y, x) = 128 then
                    final_edges(y, x) := 0;
                end if;
            end loop;
        end loop;
        
        -- 8. Write output
        report "Writing enhanced edge detected image...";
        file_open(status, output_file, output_file_name, write_mode);
        if status /= open_ok then
            report "Error opening output file" severity failure;
        end if;
        
        for y in 0 to IMG_HEIGHT-1 loop
            for x in 0 to IMG_WIDTH-1 loop
                write(output_line, final_edges(y, x));
                writeline(output_file, output_line);
            end loop;
        end loop;
        file_close(output_file);
        
        report "=== Enhanced Edge Detection Complete ===";
        report "Output: " & output_file_name;
        report "Low threshold: " & integer'image(LOW_THRESHOLD);
        report "High threshold: " & integer'image(HIGH_THRESHOLD);
        report "Enhancement factor: " & integer'image(ENHANCEMENT_FACTOR);
        
        wait;
        
    end process main_process;
    
end Behavioral;