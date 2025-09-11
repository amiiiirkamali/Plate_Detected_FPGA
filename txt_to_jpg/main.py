import numpy as np
import cv2
import os
import glob


def convert_txt_to_image(input_folder, output_folder, image_size=(640, 640)):
    """
    Convert text files containing pixel values to images

    Args:
        input_folder: Path to folder containing txt files
        output_folder: Path to output folder for saving images
        image_size: Tuple of (height, width) for output images
    """
    height, width = image_size

    # Create output directory if it doesn't exist
    os.makedirs(output_folder, exist_ok=True)

    # Find all txt files in the input folder
    txt_files = glob.glob(os.path.join(input_folder, "*.txt"))

    if not txt_files:
        print(f"No txt files found in '{input_folder}'")
        return

    print(f"Found {len(txt_files)} txt files to process")

    # Process each file
    for i, txt_file in enumerate(txt_files, 1):
        try:
            # Read pixel values from text file
            with open(txt_file, 'r') as f:
                lines = f.readlines()

            # Convert lines to pixel array
            pixels = []
            for line in lines:
                line = line.strip()
                if line:
                    if ' ' in line:
                        # RGB values - convert to grayscale
                        rgb_values = [int(val) for val in line.split()]
                        gray_value = int(sum(rgb_values) / len(rgb_values))
                        pixels.append(gray_value)
                    else:
                        # Single grayscale value
                        pixels.append(int(line))

            # Convert to numpy array
            pixels = np.array(pixels, dtype=np.uint8)

            # Check pixel count
            if len(pixels) != height * width:
                print(f"Error: {os.path.basename(txt_file)} has {len(pixels)} pixels, expected {height * width}")
                continue

            # Reshape to image format
            image = pixels.reshape((height, width))

            # Generate output filename
            base_name = os.path.splitext(os.path.basename(txt_file))[0]
            output_path = os.path.join(output_folder, f"{base_name}.png")

            # Save image
            cv2.imwrite(output_path, image)
            print(f"Processed ({i}/{len(txt_files)}): {base_name}.png")

        except Exception as e:
            print(f"Error processing {os.path.basename(txt_file)}: {str(e)}")

    print("Conversion completed!")


def convert_txt_to_color_image(input_folder, output_folder, image_size=(640, 640)):
    """
    Convert text files containing RGB values to color images

    Args:
        input_folder: Path to folder containing txt files
        output_folder: Path to output folder for saving images
        image_size: Tuple of (height, width) for output images
    """
    height, width = image_size

    # Create output directory if it doesn't exist
    os.makedirs(output_folder, exist_ok=True)

    # Find all txt files
    txt_files = glob.glob(os.path.join(input_folder, "*.txt"))

    if not txt_files:
        print(f"No txt files found in '{input_folder}'")
        return

    print(f"Found {len(txt_files)} txt files to process")

    # Process each file
    for i, txt_file in enumerate(txt_files, 1):
        try:
            # Read pixel values from text file
            with open(txt_file, 'r') as f:
                lines = f.readlines()

            # Convert lines to RGB pixel array
            pixels = []
            for line in lines:
                line = line.strip()
                if line:
                    if ' ' in line:
                        # RGB values
                        rgb_values = [int(val) for val in line.split()]
                        # Ensure 3 RGB values
                        while len(rgb_values) < 3:
                            rgb_values.append(rgb_values[-1])
                        pixels.append(rgb_values[:3])
                    else:
                        # Single value - replicate for RGB
                        val = int(line)
                        pixels.append([val, val, val])

            # Convert to numpy array
            pixels = np.array(pixels, dtype=np.uint8)

            # Check pixel count
            if len(pixels) != height * width:
                print(f"Error: {os.path.basename(txt_file)} has {len(pixels)} pixels, expected {height * width}")
                continue

            # Reshape to color image format (height, width, 3)
            image = pixels.reshape((height, width, 3))

            # Convert RGB to BGR for OpenCV
            image_bgr = cv2.cvtColor(image, cv2.COLOR_RGB2BGR)

            # Generate output filename
            base_name = os.path.splitext(os.path.basename(txt_file))[0]
            output_path = os.path.join(output_folder, f"{base_name}_color.png")

            # Save image
            cv2.imwrite(output_path, image_bgr)
            print(f"Processed ({i}/{len(txt_files)}): {base_name}_color.png")

        except Exception as e:
            print(f"Error processing {os.path.basename(txt_file)}: {str(e)}")

    print("Conversion completed!")


# Usage example
if __name__ == "__main__":
    input_folder = "input_txt_files"
    output_folder = "output_images"

    # Convert to grayscale images
    convert_txt_to_image(input_folder, output_folder)

    # Or convert to color images
    # convert_txt_to_color_image(input_folder, output_folder)