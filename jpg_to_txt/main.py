import os
import cv2


def image_to_txt(image_path, output_txt_path, output_img_path, width=1364, height=768):
    """
    تبدیل ساده تصویر به فایل متنی بدون هیچ پردازشی
    """
    print(f"📸 تبدیل تصویر: {image_path}")

    # خواندن تصویر
    img = cv2.imread(image_path)
    if img is None:
        print(f"❌ خطا: تصویر خوانده نشد!")
        return False

    # تغییر اندازه
    img = cv2.resize(img, (width, height))

    # ذخیره تصویر ریسایز شده
    cv2.imwrite(output_img_path, img)

    # تبدیل به فایل متنی
    print(f"💾 ذخیره در: {output_txt_path}")

    with open(output_txt_path, 'w') as f:
        for y in range(height):
            for x in range(width):
                b, g, r = img[y, x]
                r, g, b = int(r), int(g), int(b)
                f.write(f"{r} {g} {b}\n")

    print(f"✅ تکمیل شد")
    return True


def batch_convert(input_folder, output_folder, width=640, height=640):
    """
    تبدیل دسته‌ای تصاویر به فایل متنی
    """
    print(f"🚀 تبدیل دسته‌ای...")
    print(f"📂 ورودی: {input_folder}")
    print(f"📂 خروجی: {output_folder}")
    print(f"📐 اندازه: {width}×{height}")
    print("-" * 50)

    # ایجاد پوشه خروجی
    os.makedirs(output_folder, exist_ok=True)

    # پیدا کردن تصاویر
    image_extensions = ['.jpg', '.jpeg', '.png', '.bmp']
    image_files = []

    for file in os.listdir(input_folder):
        if any(file.lower().endswith(ext) for ext in image_extensions):
            image_files.append(file)

    print(f"📸 {len(image_files)} تصویر پیدا شد")

    # پردازش هر تصویر
    total_success = 0
    for i, img_file in enumerate(image_files, 1):
        print(f"\n--- تصویر {i}/{len(image_files)}: {img_file} ---")

        # مسیرها
        input_path = os.path.join(input_folder, img_file)
        name_without_ext = os.path.splitext(img_file)[0]
        txt_path = os.path.join(output_folder, f"{name_without_ext}.txt")
        img_path = os.path.join(output_folder, f"{name_without_ext}_resized.jpg")

        # تبدیل
        success = image_to_txt(input_path, txt_path, img_path, width, height)

        if success:
            total_success += 1

    # خلاصه نتایج
    print(f"\n" + "=" * 50)
    print(f"🎉 خلاصه نتایج:")
    print(f"   📸 کل تصاویر: {len(image_files)}")
    print(f"   ✅ تبدیل موفق: {total_success}")
    print("=" * 50)


# === استفاده ===
if __name__ == "__main__":
    # تنظیمات
    INPUT_FOLDER = r"C:\Users\Amir\PycharmProjects\jpg_to_txt\plate2"
    OUTPUT_FOLDER = r"C:\Users\Amir\PycharmProjects\jpg_to_txt\result2"

    WIDTH = 640
    HEIGHT = 640

    print("🎯 تبدیل ساده تصویر به متن")
    print("=" * 50)

    # تبدیل دسته‌ای
    batch_convert(INPUT_FOLDER, OUTPUT_FOLDER, WIDTH, HEIGHT)

    # برای تبدیل تک تصویر:
    # image_to_txt("path/to/image.jpg", "output.txt", "resized_image.jpg", WIDTH, HEIGHT)