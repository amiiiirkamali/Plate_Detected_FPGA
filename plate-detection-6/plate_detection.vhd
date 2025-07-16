library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
use STD.TEXTIO.ALL;
use IEEE.STD_LOGIC_TEXTIO.ALL;

entity license_plate_detector is
    generic (
        input_file_name : string := "E:\data\5-output morphological\image61.txt";
        original_image_file_name : string := "E:\data\0-data\image61.txt";  
        roi_file_name : string := "E:\data\roi_mask.txt";
        output_file_name : string := "E:\data\6-output detected plate\image61.txt";
        IMG_WIDTH : integer := 640;
        IMG_HEIGHT : integer := 640
    );
end license_plate_detector;

architecture Behavioral of license_plate_detector is
    
    constant MAX_REGIONS : integer := 500;
    constant MIN_PLATE_WIDTH : integer := 60;
    constant MAX_PLATE_WIDTH : integer := 500;
    constant MIN_PLATE_HEIGHT : integer := 15;
    constant MAX_PLATE_HEIGHT : integer := 120;
    constant MIN_ASPECT_RATIO : integer := 20;
    constant MAX_ASPECT_RATIO : integer := 80;
    constant IDEAL_ASPECT_RATIO : integer := 40;
    constant MIN_DENSITY : integer := 10;
    constant MAX_DENSITY : integer := 90;
    constant IDEAL_DENSITY : integer := 45;
    constant MIN_PIXEL_COUNT : integer := 800;
    constant MAX_PIXEL_COUNT : integer := 25000;
    constant WHITE_PIXEL_THRESHOLD : integer := 180;
    constant GRAY_PIXEL_THRESHOLD : integer := 120;
    constant BACKGROUND_THRESHOLD : integer := 60;
    constant EXPANSION_PERCENT_X : integer := 10;
    constant EXPANSION_PERCENT_Y : integer := 15;
    constant LEFT_EXPANSION_BONUS : integer := 3;
    constant RIGHT_EXPANSION_BONUS : integer := 3;
    constant SMART_SEARCH_RANGE : integer := 25;
    constant MIN_ACCEPTABLE_SCORE : integer := 15;
    constant ROI_THRESHOLD : integer := 128;
    
    type region_info is record
        min_x, max_x : integer;
        min_y, max_y : integer;
        width, height : integer;
        pixel_count : integer;
        white_pixel_count : integer;
        aspect_ratio : integer;
        density : integer;
        white_density : integer;
        score : integer;
        is_valid : boolean;
        center_x, center_y : integer;
    end record;
    
    type region_array is array (0 to MAX_REGIONS-1) of region_info;
    
    function clamp(value, min_val, max_val: integer) return integer is
    begin
        if value < min_val then return min_val;
        elsif value > max_val then return max_val;
        else return value;
        end if;
    end function;
    
    function max(a, b: integer) return integer is
    begin
        if a > b then return a; else return b; end if;
    end function;
    
    function min(a, b: integer) return integer is
    begin
        if a < b then return a; else return b; end if;
    end function;
    
    function abs_diff(a, b: integer) return integer is
    begin
        if a > b then return a - b; else return b - a; end if;
    end function;
    
    function is_bright_pixel(pixel_value: integer) return boolean is
    begin
        return pixel_value >= WHITE_PIXEL_THRESHOLD;
    end function;
    
    function is_valid_pixel(pixel_value: integer) return boolean is
    begin
        return pixel_value >= GRAY_PIXEL_THRESHOLD;
    end function;
    
    function is_in_roi(roi_value: integer) return boolean is
    begin
        return roi_value >= ROI_THRESHOLD;
    end function;

begin
    main_process: process
        type image_array is array (0 to IMG_HEIGHT-1, 0 to IMG_WIDTH-1) of integer range 0 to 255;
        type label_array is array (0 to IMG_HEIGHT-1, 0 to IMG_WIDTH-1) of integer range 0 to MAX_REGIONS;
        
        impure function smart_content_search(img : image_array; roi : image_array; reg : region_info; direction : integer; range_limit : integer) return integer is
            variable found_pixels : integer := 0;
            variable bright_pixels : integer := 0;
            variable total_pixels : integer := 0;
            variable test_x : integer;
            variable pixel_count_in_column : integer;
            variable bright_count_in_column : integer;
            variable consecutive_empty : integer := 0;
            variable max_consecutive_empty : integer := 3;
            variable search_height : integer;
        begin
            search_height := reg.height + 4;
            
            for extend in 1 to range_limit loop
                if direction < 0 then
                    test_x := reg.min_x - extend;
                else
                    test_x := reg.max_x + extend;
                end if;
                
                exit when test_x < 0 or test_x >= IMG_WIDTH;
                
                pixel_count_in_column := 0;
                bright_count_in_column := 0;
                
                for y in max(0, reg.min_y - 2) to min(IMG_HEIGHT - 1, reg.max_y + 2) loop
                    if is_in_roi(roi(y, test_x)) then
                        total_pixels := total_pixels + 1;
                        
                        if is_valid_pixel(img(y, test_x)) then
                            found_pixels := found_pixels + 1;
                            pixel_count_in_column := pixel_count_in_column + 1;
                        end if;
                        
                        if is_bright_pixel(img(y, test_x)) then
                            bright_pixels := bright_pixels + 1;
                            bright_count_in_column := bright_count_in_column + 1;
                        end if;
                    end if;
                end loop;
                
                if pixel_count_in_column = 0 then
                    consecutive_empty := consecutive_empty + 1;
                else
                    consecutive_empty := 0;
                end if;
                
                if consecutive_empty >= max_consecutive_empty then
                    return extend - max_consecutive_empty;
                end if;
                
                if extend > 3 and bright_count_in_column = 0 and pixel_count_in_column < 1 then
                    return extend - 1;
                end if;
            end loop;
            
            return range_limit;
        end function;

        impure function detect_precise_plate_bounds(img : image_array; roi : image_array; reg : region_info) return region_info is
            variable precise_reg : region_info;
            variable found_left, found_right, found_top, found_bottom : boolean := false;
            variable content_threshold : integer := 3;
            variable content_count : integer;
        begin
            precise_reg := reg;
            
            for x in reg.min_x to reg.max_x loop
                content_count := 0;
                for y in reg.min_y to reg.max_y loop
                    if is_in_roi(roi(y, x)) and is_valid_pixel(img(y, x)) then
                        content_count := content_count + 1;
                    end if;
                end loop;
                
                if content_count >= content_threshold then
                    precise_reg.min_x := x;
                    found_left := true;
                    exit;
                end if;
            end loop;
            
            for x in reg.max_x downto reg.min_x loop
                content_count := 0;
                for y in reg.min_y to reg.max_y loop
                    if is_in_roi(roi(y, x)) and is_valid_pixel(img(y, x)) then
                        content_count := content_count + 1;
                    end if;
                end loop;
                
                if content_count >= content_threshold then
                    precise_reg.max_x := x;
                    found_right := true;
                    exit;
                end if;
            end loop;
            
            for y in reg.min_y to reg.max_y loop
                content_count := 0;
                for x in precise_reg.min_x to precise_reg.max_x loop
                    if is_in_roi(roi(y, x)) and is_valid_pixel(img(y, x)) then
                        content_count := content_count + 1;
                    end if;
                end loop;
                
                if content_count >= content_threshold then
                    precise_reg.min_y := y;
                    found_top := true;
                    exit;
                end if;
            end loop;
            
            for y in reg.max_y downto reg.min_y loop
                content_count := 0;
                for x in precise_reg.min_x to precise_reg.max_x loop
                    if is_in_roi(roi(y, x)) and is_valid_pixel(img(y, x)) then
                        content_count := content_count + 1;
                    end if;
                end loop;
                
                if content_count >= content_threshold then
                    precise_reg.max_y := y;
                    found_bottom := true;
                    exit;
                end if;
            end loop;
            
            precise_reg.width := precise_reg.max_x - precise_reg.min_x + 1;
            precise_reg.height := precise_reg.max_y - precise_reg.min_y + 1;
            precise_reg.center_x := (precise_reg.min_x + precise_reg.max_x) / 2;
            precise_reg.center_y := (precise_reg.min_y + precise_reg.max_y) / 2;
            
            return precise_reg;
        end function;

        impure function advanced_expand_region(img : image_array; roi : image_array; reg : region_info; img_w, img_h : integer) return region_info is
            variable expanded_reg : region_info;
            variable base_expand_x, base_expand_y : integer;
            variable smart_left_expand, smart_right_expand : integer;
            variable final_left_expand, final_right_expand : integer;
            variable vertical_expand_up, vertical_expand_down : integer;
        begin
            expanded_reg := reg;
            
            base_expand_x := max(2, (reg.width * EXPANSION_PERCENT_X) / 100);
            base_expand_y := max(1, (reg.height * EXPANSION_PERCENT_Y) / 100);
            
            smart_left_expand := smart_content_search(img, roi, reg, -1, SMART_SEARCH_RANGE);
            smart_right_expand := smart_content_search(img, roi, reg, 1, SMART_SEARCH_RANGE);
            
            final_left_expand := min(base_expand_x + LEFT_EXPANSION_BONUS, smart_left_expand);
            final_right_expand := min(base_expand_x + RIGHT_EXPANSION_BONUS, smart_right_expand);
            
            vertical_expand_up := max(1, base_expand_y);
            vertical_expand_down := max(1, base_expand_y);
            
            expanded_reg.min_x := clamp(reg.min_x - final_left_expand, 0, img_w - 1);
            expanded_reg.max_x := clamp(reg.max_x + final_right_expand, 0, img_w - 1);
            expanded_reg.min_y := clamp(reg.min_y - vertical_expand_up, 0, img_h - 1);
            expanded_reg.max_y := clamp(reg.max_y + vertical_expand_down, 0, img_h - 1);
            
            expanded_reg.width := expanded_reg.max_x - expanded_reg.min_x + 1;
            expanded_reg.height := expanded_reg.max_y - expanded_reg.min_y + 1;
            expanded_reg.center_x := (expanded_reg.min_x + expanded_reg.max_x) / 2;
            expanded_reg.center_y := (expanded_reg.min_y + expanded_reg.max_y) / 2;
            
            return expanded_reg;
        end function;
        
        function regions_overlap(reg1, reg2 : region_info; threshold : integer) return boolean is
            variable overlap_x, overlap_y : integer;
            variable total_area : integer;
            variable overlap_area : integer;
        begin
            overlap_x := max(0, min(reg1.max_x, reg2.max_x) - max(reg1.min_x, reg2.min_x) + 1);
            overlap_y := max(0, min(reg1.max_y, reg2.max_y) - max(reg1.min_y, reg2.min_y) + 1);
            
            overlap_area := overlap_x * overlap_y;
            total_area := min(reg1.width * reg1.height, reg2.width * reg2.height);
            
            if total_area > 0 then
                return (overlap_area * 100) / total_area >= threshold;
            else
                return false;
            end if;
        end function;

        file input_file : text;
        file original_file : text;
        file roi_file : text;
        file output_file : text;
        variable input_line : line;
        variable output_line : line;
        variable pixel_value : integer;
        variable status : file_open_status;
        
        variable input_image : image_array;
        variable original_image : image_array;
        variable roi_image : image_array;
        variable morphological_image : image_array;
        variable output_image : image_array;
        variable label_image : label_array;
        
        variable regions : region_array;
        variable region_count : integer := 0;
        variable current_label : integer := 1;
        
        variable best_region_index : integer := -1;
        variable best_score : integer := 0;
        variable expanded_region : region_info;
        
        impure function flood_fill_label(img : image_array; roi : image_array; start_x, start_y, region_label : integer) return region_info is
            variable temp_region : region_info;
            type stack_array_x is array(0 to 19999) of integer;
            type stack_array_y is array(0 to 19999) of integer;
            variable stack_x : stack_array_x;
            variable stack_y : stack_array_y;
            variable stack_top : integer := 0;
            variable current_x, current_y : integer;
            variable nx, ny : integer;
            variable current_pixel : integer;
        begin
            temp_region.min_x := IMG_WIDTH;
            temp_region.max_x := 0;
            temp_region.min_y := IMG_HEIGHT;
            temp_region.max_y := 0;
            temp_region.pixel_count := 0;
            temp_region.white_pixel_count := 0;
            temp_region.is_valid := false;
            
            stack_x(0) := start_x;
            stack_y(0) := start_y;
            stack_top := 0;
            
            while stack_top >= 0 and stack_top < 19999 loop
                current_x := stack_x(stack_top);
                current_y := stack_y(stack_top);
                stack_top := stack_top - 1;
                
                if current_x >= 0 and current_x < IMG_WIDTH and 
                   current_y >= 0 and current_y < IMG_HEIGHT and
                   label_image(current_y, current_x) = 0 and
                   is_in_roi(roi(current_y, current_x)) then
                    
                    current_pixel := img(current_y, current_x);
                    
                    if is_valid_pixel(current_pixel) then
                        label_image(current_y, current_x) := region_label;
                        temp_region.pixel_count := temp_region.pixel_count + 1;
                        
                        if is_bright_pixel(current_pixel) then
                            temp_region.white_pixel_count := temp_region.white_pixel_count + 1;
                        end if;
                        
                        temp_region.min_x := min(temp_region.min_x, current_x);
                        temp_region.max_x := max(temp_region.max_x, current_x);
                        temp_region.min_y := min(temp_region.min_y, current_y);
                        temp_region.max_y := max(temp_region.max_y, current_y);
                        
                        for dy in -1 to 1 loop
                            for dx in -1 to 1 loop
                                if dx = 0 and dy = 0 then next; end if;
                                
                                nx := current_x + dx;
                                ny := current_y + dy;
                                
                                if nx >= 0 and nx < IMG_WIDTH and 
                                   ny >= 0 and ny < IMG_HEIGHT and
                                   label_image(ny, nx) = 0 and
                                   is_in_roi(roi(ny, nx)) and
                                   is_valid_pixel(img(ny, nx)) and
                                   stack_top < 19998 then
                                    
                                    stack_top := stack_top + 1;
                                    stack_x(stack_top) := nx;
                                    stack_y(stack_top) := ny;
                                end if;
                            end loop;
                        end loop;
                    end if;
                end if;
            end loop;
            
            if temp_region.pixel_count > 0 then
                temp_region.width := temp_region.max_x - temp_region.min_x + 1;
                temp_region.height := temp_region.max_y - temp_region.min_y + 1;
                temp_region.center_x := (temp_region.min_x + temp_region.max_x) / 2;
                temp_region.center_y := (temp_region.min_y + temp_region.max_y) / 2;
                temp_region.is_valid := true;
                
                if temp_region.height > 0 then
                    temp_region.aspect_ratio := (temp_region.width * 10) / temp_region.height;
                else
                    temp_region.aspect_ratio := 0;
                end if;
                
                if temp_region.width > 0 and temp_region.height > 0 then
                    temp_region.density := (temp_region.pixel_count * 100) / (temp_region.width * temp_region.height);
                    temp_region.white_density := (temp_region.white_pixel_count * 100) / (temp_region.width * temp_region.height);
                else
                    temp_region.density := 0;
                    temp_region.white_density := 0;
                end if;
            end if;
            
            return temp_region;
        end function;
        
        impure function calculate_score(temp_region : region_info) return integer is
            variable score : integer := 0;
            variable size_score : integer := 0;
            variable ratio_score : integer := 0;
            variable density_score : integer := 0;
            variable position_score : integer := 0;
            variable pixel_count_score : integer := 0;
            variable white_density_score : integer := 0;
            variable shape_score : integer := 0;
            variable aspect_diff : integer;
            variable density_diff : integer;
            variable white_density_diff : integer;
        begin
            if not temp_region.is_valid then
                return 0;
            end if;
            
            if temp_region.width >= MIN_PLATE_WIDTH and temp_region.width <= MAX_PLATE_WIDTH and
               temp_region.height >= MIN_PLATE_HEIGHT and temp_region.height <= MAX_PLATE_HEIGHT then
                size_score := 20;
                
                if temp_region.width >= 120 and temp_region.width <= 280 and
                   temp_region.height >= 25 and temp_region.height <= 70 then
                    size_score := size_score + 15;
                end if;
            end if;
            
            if temp_region.pixel_count >= MIN_PIXEL_COUNT and temp_region.pixel_count <= MAX_PIXEL_COUNT then
                pixel_count_score := 20;
                
                if temp_region.pixel_count >= 1500 and temp_region.pixel_count <= 12000 then
                    pixel_count_score := pixel_count_score + 10;
                end if;
            end if;
            
            if temp_region.aspect_ratio >= MIN_ASPECT_RATIO and temp_region.aspect_ratio <= MAX_ASPECT_RATIO then
                aspect_diff := abs_diff(temp_region.aspect_ratio, IDEAL_ASPECT_RATIO);
                
                if aspect_diff <= 10 then
                    ratio_score := 35;
                elsif aspect_diff <= 20 then
                    ratio_score := 25;
                elsif aspect_diff <= 30 then
                    ratio_score := 15;
                else
                    ratio_score := 10;
                end if;
            end if;
            
            if temp_region.density >= MIN_DENSITY and temp_region.density <= MAX_DENSITY then
                density_diff := abs_diff(temp_region.density, IDEAL_DENSITY);
                
                if density_diff <= 8 then
                    density_score := 20;
                elsif density_diff <= 15 then
                    density_score := 15;
                elsif density_diff <= 25 then
                    density_score := 10;
                else
                    density_score := 5;
                end if;
            end if;
            
            if temp_region.white_pixel_count > 0 then
                white_density_diff := abs_diff(temp_region.white_density, 25);
                
                if white_density_diff <= 10 then
                    white_density_score := 15;
                elsif white_density_diff <= 20 then
                    white_density_score := 12;
                else
                    white_density_score := 8;
                end if;
            end if;
            
            if temp_region.center_y > (IMG_HEIGHT * 3) / 4 then
                position_score := 20;
            elsif temp_region.center_y > (IMG_HEIGHT * 2) / 3 then
                position_score := 15;
            elsif temp_region.center_y > IMG_HEIGHT / 2 then
                position_score := 10;
            else
                position_score := 5;
            end if;
            
            if temp_region.width > temp_region.height * 2 and temp_region.white_pixel_count > temp_region.pixel_count / 4 then
                shape_score := 10;
            end if;
            
            score := size_score + ratio_score + density_score + position_score + 
                    pixel_count_score + white_density_score + shape_score;
            return score;
        end function;
        
        impure function is_valid_plate(temp_region : region_info) return boolean is
        begin
            return (temp_region.is_valid and 
                   temp_region.width >= MIN_PLATE_WIDTH and temp_region.width <= MAX_PLATE_WIDTH and
                   temp_region.height >= MIN_PLATE_HEIGHT and temp_region.height <= MAX_PLATE_HEIGHT and
                   temp_region.pixel_count >= MIN_PIXEL_COUNT and temp_region.pixel_count <= MAX_PIXEL_COUNT and
                   temp_region.aspect_ratio >= MIN_ASPECT_RATIO and temp_region.aspect_ratio <= MAX_ASPECT_RATIO and
                   temp_region.density >= MIN_DENSITY and temp_region.density <= MAX_DENSITY and
                   temp_region.white_pixel_count > temp_region.pixel_count / 6);
        end function;
        
        variable has_overlap : boolean;
        
        begin
            file_open(status, input_file, input_file_name, read_mode);
            if status /= open_ok then
                assert false report "Error opening morphological input file" severity failure;
            end if;
            
            for y in 0 to IMG_HEIGHT-1 loop
                for x in 0 to IMG_WIDTH-1 loop
                    if not endfile(input_file) then
                        readline(input_file, input_line);
                        read(input_line, pixel_value);
                        input_image(y, x) := clamp(pixel_value, 0, 255);
                        morphological_image(y, x) := clamp(pixel_value, 0, 255);
                    else
                        input_image(y, x) := 0;
                        morphological_image(y, x) := 0;
                    end if;
                end loop;
            end loop;
            file_close(input_file);
            
            file_open(status, original_file, original_image_file_name, read_mode);
            if status /= open_ok then
                assert false report "Error opening original image file" severity failure;
            end if;
            
            for y in 0 to IMG_HEIGHT-1 loop
                for x in 0 to IMG_WIDTH-1 loop
                    if not endfile(original_file) then
                        readline(original_file, input_line);
                        read(input_line, pixel_value);
                        original_image(y, x) := clamp(pixel_value, 0, 255);
                    else
                        original_image(y, x) := 0;
                    end if;
                end loop;
            end loop;
            file_close(original_file);
            
            file_open(status, roi_file, roi_file_name, read_mode);
            if status /= open_ok then
                assert false report "Error opening ROI file" severity failure;
            end if;
            
            for y in 0 to IMG_HEIGHT-1 loop
                for x in 0 to IMG_WIDTH-1 loop
                    if not endfile(roi_file) then
                        readline(roi_file, input_line);
                        read(input_line, pixel_value);
                        roi_image(y, x) := clamp(pixel_value, 0, 255);
                    else
                        roi_image(y, x) := 0;
                    end if;
                end loop;
            end loop;
            file_close(roi_file);
            
            for y in 0 to IMG_HEIGHT-1 loop
                for x in 0 to IMG_WIDTH-1 loop
                    label_image(y, x) := 0;
                end loop;
            end loop;
            
            for i in 0 to MAX_REGIONS-1 loop
                regions(i).is_valid := false;
                regions(i).score := 0;
                regions(i).pixel_count := 0;
                regions(i).white_pixel_count := 0;
                regions(i).min_x := 0;
                regions(i).max_x := 0;
                regions(i).min_y := 0;
                regions(i).max_y := 0;
                regions(i).width := 0;
                regions(i).height := 0;
                regions(i).aspect_ratio := 0;
                regions(i).density := 0;
                regions(i).white_density := 0;
                regions(i).center_x := 0;
                regions(i).center_y := 0;
            end loop;
            
            for y in 0 to IMG_HEIGHT-1 loop
                for x in 0 to IMG_WIDTH-1 loop
                    if label_image(y, x) = 0 and is_in_roi(roi_image(y, x)) and is_valid_pixel(input_image(y, x)) and region_count < MAX_REGIONS-1 then
                        regions(region_count) := flood_fill_label(input_image, roi_image, x, y, current_label);
                        
                        if is_valid_plate(regions(region_count)) then
                            regions(region_count).score := calculate_score(regions(region_count));
                            region_count := region_count + 1;
                            current_label := current_label + 1;
                        else
                            for clear_y in regions(region_count).min_y to regions(region_count).max_y loop
                                for clear_x in regions(region_count).min_x to regions(region_count).max_x loop
                                    if clear_x >= 0 and clear_x < IMG_WIDTH and clear_y >= 0 and clear_y < IMG_HEIGHT then
                                        if label_image(clear_y, clear_x) = current_label then
                                            label_image(clear_y, clear_x) := 0;
                                        end if;
                                    end if;
                                end loop;
                            end loop;
                        end if;
                    end if;
                end loop;
            end loop;
            
            for i in 0 to region_count-1 loop
                if regions(i).is_valid then
                    for j in i+1 to region_count-1 loop
                        if regions(j).is_valid then
                            if regions_overlap(regions(i), regions(j), 30) then
                                if regions(i).score >= regions(j).score then
                                    regions(j).is_valid := false;
                                else
                                    regions(i).is_valid := false;
                                    exit;
                                end if;
                            end if;
                        end if;
                    end loop;
                end if;
            end loop;
            
            best_score := 0;
            best_region_index := -1;
            
            for i in 0 to region_count-1 loop
                if regions(i).is_valid and regions(i).score > best_score and regions(i).score >= MIN_ACCEPTABLE_SCORE then
                    best_score := regions(i).score;
                    best_region_index := i;
                end if;
            end loop;
            
            for y in 0 to IMG_HEIGHT-1 loop
                for x in 0 to IMG_WIDTH-1 loop
                    output_image(y, x) := original_image(y, x);
                end loop;
            end loop;
            
            if best_region_index >= 0 then
                regions(best_region_index) := detect_precise_plate_bounds(input_image, roi_image, regions(best_region_index));
                expanded_region := advanced_expand_region(input_image, roi_image, regions(best_region_index), IMG_WIDTH, IMG_HEIGHT);
                
                for x in expanded_region.min_x to expanded_region.max_x loop
                    if x >= 0 and x < IMG_WIDTH then
                        if expanded_region.min_y >= 0 and expanded_region.min_y < IMG_HEIGHT then
                            output_image(expanded_region.min_y, x) := 255;
                        end if;
                        if expanded_region.max_y >= 0 and expanded_region.max_y < IMG_HEIGHT then
                            output_image(expanded_region.max_y, x) := 255;
                        end if;
                    end if;
                end loop;
                
                for y in expanded_region.min_y to expanded_region.max_y loop
                    if y >= 0 and y < IMG_HEIGHT then
                        if expanded_region.min_x >= 0 and expanded_region.min_x < IMG_WIDTH then
                            output_image(y, expanded_region.min_x) := 255;
                        end if;
                        if expanded_region.max_x >= 0 and expanded_region.max_x < IMG_WIDTH then
                            output_image(y, expanded_region.max_x) := 255;
                        end if;
                    end if;
                end loop;
            end if;
            
            file_open(status, output_file, output_file_name, write_mode);
            if status /= open_ok then
                assert false report "Error opening output file" severity failure;
            end if;
            
            for y in 0 to IMG_HEIGHT-1 loop
                for x in 0 to IMG_WIDTH-1 loop
                    write(output_line, output_image(y, x));
                    writeline(output_file, output_line);
                end loop;
            end loop;
            file_close(output_file);
            
            assert false report "License plate detection completed successfully" severity note;
            wait;
        end process;
        
end Behavioral;