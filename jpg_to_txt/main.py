import os
import cv2


def image_to_txt(image_path, output_txt_path, output_img_path, width=640, height=640):
    """
    Convert image to text file containing RGB pixel values

    Args:
        image_path: Path to input image
        output_txt_path: Path for output text file
        output_img_path: Path for resized image
        width: Target width
        height: Target height

    Returns:
        bool: Success status
    """
    # Read image
    img = cv2.imread(image_path)
    if img is None:
        print(f"Error: Could not read image {image_path}")
        return False

    # Resize image
    img = cv2.resize(img, (width, height))

    # Save resized image
    cv2.imwrite(output_img_path, img)

    # Convert to text file (RGB format)
    with open(output_txt_path, 'w') as f:
        for y in range(height):
            for x in range(width):
                b, g, r = img[y, x]  # OpenCV uses BGR format
                f.write(f"{int(r)} {int(g)} {int(b)}\n")

    print(f"Converted: {os.path.basename(image_path)}")
    return True


def batch_convert(input_folder, output_folder, width=640, height=640):
    """
    Batch convert images to text files

    Args:
        input_folder: Input directory containing images
        output_folder: Output directory for text files
        width: Target width for resizing
        height: Target height for resizing
    """
    # Create output directory
    os.makedirs(output_folder, exist_ok=True)

    # Find image files
    image_extensions = ['.jpg', '.jpeg', '.png', '.bmp']
    image_files = [f for f in os.listdir(input_folder)
                   if any(f.lower().endswith(ext) for ext in image_extensions)]

    if not image_files:
        print(f"No images found in {input_folder}")
        return

    print(f"Found {len(image_files)} images to process")

    # Process each image
    successful = 0
    for i, img_file in enumerate(image_files, 1):
        # Generate file paths
        input_path = os.path.join(input_folder, img_file)
        name_without_ext = os.path.splitext(img_file)[0]
        txt_path = os.path.join(output_folder, f"{name_without_ext}.txt")
        img_path = os.path.join(output_folder, f"{name_without_ext}_resized.jpg")

        # Convert image to text
        if image_to_txt(input_path, txt_path, img_path, width, height):
            successful += 1

        print(f"Progress: {i}/{len(image_files)}")

    print(f"Conversion completed: {successful}/{len(image_files)} successful")


# Usage example
if __name__ == "__main__":
    # Configuration
    INPUT_FOLDER = "input_images"
    OUTPUT_FOLDER = "output_txt"
    WIDTH = 640
    HEIGHT = 640

    # Batch conversion
    batch_convert(INPUT_FOLDER, OUTPUT_FOLDER, WIDTH, HEIGHT)

    # Single image conversion example:
    # image_to_txt("image.jpg", "output.txt", "resized.jpg", WIDTH, HEIGHT)