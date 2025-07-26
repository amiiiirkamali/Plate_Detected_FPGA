    # import numpy as np
    # import cv2
    #
    # # ابعاد تصویر
    # height = 640
    # width = 640
    #
    # # خواندن مقادیر از فایل متنی
    # with open('image3.txt', 'r') as f:
    #     pixels = f.readlines()
    #
    # # تبدیل به عدد و آرایه numpy
    # pixels = np.array([int(p.strip()) for p in pixels], dtype=np.uint8)
    #
    # # reshape به شکل تصویر
    # image = pixels.reshape((height, width))
    #
    # # ذخیره تصویر
    # cv2.imwrite('output_image.png', image)
    #
    # # نمایش تصویر
    # cv2.imshow('Image', image)
    # cv2.waitKey(0)
    # cv2.destroyAllWindows()
import numpy as np
import cv2
import os
import glob


def convert_txt_to_image(input_folder, output_folder):
    """
    تبدیل تمام فایل‌های txt موجود در پوشه‌ای به تصویر

    Args:
        input_folder: مسیر پوشه حاوی فایل‌های txt
        output_folder: مسیر پوشه خروجی برای ذخیره تصاویر
    """

    # ابعاد تصویر
    height = 640
    width = 640

    # ایجاد پوشه خروجی اگر وجود نداشته باشد
    if not os.path.exists(output_folder):
        os.makedirs(output_folder)
        print(f"پوشه خروجی '{output_folder}' ایجاد شد.")

    # پیدا کردن تمام فایل‌های txt در پوشه
    txt_files = glob.glob(os.path.join(input_folder, "*.txt"))

    if not txt_files:
        print(f"هیچ فایل txt در پوشه '{input_folder}' پیدا نشد!")
        return

    print(f"تعداد {len(txt_files)} فایل txt پیدا شد.")

    # پردازش هر فایل
    for i, txt_file in enumerate(txt_files, 1):
        try:
            # خواندن مقادیر از فایل متنی
            with open(txt_file, 'r') as f:
                lines = f.readlines()

            # تبدیل به آرایه numpy
            pixels = []
            for line in lines:
                line = line.strip()
                if line:  # اگر خط خالی نباشد
                    # اگر خط شامل مقادیر جدا شده با فاصله باشد (RGB)
                    if ' ' in line:
                        rgb_values = line.split()
                        # تبدیل مقادیر RGB به grayscale (میانگین)
                        gray_value = int(sum(int(val) for val in rgb_values) / len(rgb_values))
                        pixels.append(gray_value)
                    else:
                        # اگر مقدار تکی باشد
                        pixels.append(int(line))

            # تبدیل به آرایه numpy
            pixels = np.array(pixels, dtype=np.uint8)

            # بررسی تعداد پیکسل‌ها
            if len(pixels) != height * width:
                print(
                    f"خطا در فایل '{os.path.basename(txt_file)}': تعداد پیکسل‌ها {len(pixels)} است، باید {height * width} باشد!")
                continue

            # reshape به شکل تصویر
            image = pixels.reshape((height, width))

            # نام فایل خروجی
            base_name = os.path.splitext(os.path.basename(txt_file))[0]
            output_path = os.path.join(output_folder, f"{base_name}.png")

            # ذخیره تصویر
            cv2.imwrite(output_path, image)

            print(f"({i}/{len(txt_files)}) '{os.path.basename(txt_file)}' -> '{base_name}.png' تبدیل شد.")

        except Exception as e:
            print(f"خطا در پردازش فایل '{os.path.basename(txt_file)}': {str(e)}")

    print("تبدیل تمام فایل‌ها کامل شد!")


def convert_txt_to_color_image(input_folder, output_folder):
    """
    تبدیل فایل‌های txt حاوی RGB به تصاویر رنگی

    Args:
        input_folder: مسیر پوشه حاوی فایل‌های txt
        output_folder: مسیر پوشه خروجی برای ذخیره تصاویر
    """

    # ابعاد تصویر
    height = 640
    width = 640

    # ایجاد پوشه خروجی اگر وجود نداشته باشد
    if not os.path.exists(output_folder):
        os.makedirs(output_folder)
        print(f"پوشه خروجی '{output_folder}' ایجاد شد.")

    # پیدا کردن تمام فایل‌های txt در پوشه
    txt_files = glob.glob(os.path.join(input_folder, "*.txt"))

    if not txt_files:
        print(f"هیچ فایل txt در پوشه '{input_folder}' پیدا نشد!")
        return

    print(f"تعداد {len(txt_files)} فایل txt پیدا شد.")

    # پردازش هر فایل
    for i, txt_file in enumerate(txt_files, 1):
        try:
            # خواندن مقادیر از فایل متنی
            with open(txt_file, 'r') as f:
                lines = f.readlines()

            # تبدیل به آرایه numpy
            pixels = []
            for line in lines:
                line = line.strip()
                if line:  # اگر خط خالی نباشد
                    # اگر خط شامل مقادیر جدا شده با فاصله باشد (RGB)
                    if ' ' in line:
                        rgb_values = [int(val) for val in line.split()]
                        # اگر RGB کامل باشد
                        if len(rgb_values) == 3:
                            pixels.append(rgb_values)
                        else:
                            # اگر فقط یک یا دو مقدار باشد، آنها را تکرار کن
                            while len(rgb_values) < 3:
                                rgb_values.append(rgb_values[-1])
                            pixels.append(rgb_values)
                    else:
                        # اگر مقدار تکی باشد، آن را برای RGB تکرار کن
                        val = int(line)
                        pixels.append([val, val, val])

            # تبدیل به آرایه numpy
            pixels = np.array(pixels, dtype=np.uint8)

            # بررسی تعداد پیکسل‌ها
            if len(pixels) != height * width:
                print(
                    f"خطا در فایل '{os.path.basename(txt_file)}': تعداد پیکسل‌ها {len(pixels)} است، باید {height * width} باشد!")
                continue

            # reshape به شکل تصویر رنگی (height, width, 3)
            image = pixels.reshape((height, width, 3))

            # تبدیل از RGB به BGR برای OpenCV
            image_bgr = cv2.cvtColor(image, cv2.COLOR_RGB2BGR)

            # نام فایل خروجی
            base_name = os.path.splitext(os.path.basename(txt_file))[0]
            output_path = os.path.join(output_folder, f"{base_name}_color.png")

            # ذخیره تصویر
            cv2.imwrite(output_path, image_bgr)

            print(f"({i}/{len(txt_files)}) '{os.path.basename(txt_file)}' -> '{base_name}_color.png' تبدیل شد.")

        except Exception as e:
            print(f"خطا در پردازش فایل '{os.path.basename(txt_file)}': {str(e)}")

    print("تبدیل تمام فایل‌ها کامل شد!")


# استفاده از تابع
if __name__ == "__main__":
    # مسیر پوشه حاوی فایل‌های txt
    input_folder = "6-output detected plate"  # نام پوشه ورودی را اینجا وارد کنید

    # مسیر پوشه خروجی
    output_folder = "6-results of detected plate"  # نام پوشه خروجی را اینجا وارد کنید

    # انتخاب روش تبدیل
    print("1. تبدیل به تصویر خاکستری (grayscale)")
    print("2. تبدیل به تصویر رنگی (color)")
    choice = input("انتخاب کنید (1 یا 2): ")

    if choice == "1":
        # اجرای تبدیل به خاکستری
        convert_txt_to_image(input_folder, output_folder)
    elif choice == "2":
        # اجرای تبدیل به رنگی
        convert_txt_to_color_image(input_folder, output_folder)
    else:
        print("انتخاب نامعتبر!")

    # اختیاری: نمایش یکی از تصاویر تولید شده
    output_files = glob.glob(os.path.join(output_folder, "*.png"))
    if output_files:
        sample_image = cv2.imread(output_files[0])
        if sample_image is not None:
            cv2.imshow('نمونه تصویر تولید شده', sample_image)
            cv2.waitKey(0)
            cv2.destroyAllWindows()