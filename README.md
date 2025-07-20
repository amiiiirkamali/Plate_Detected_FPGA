# 🚗 Iranian License Plate Detection System on FPGA

## 📋 Project Overview

This project implements a complete **Iranian License Plate Detection System** using **FPGA hardware acceleration**. The system processes vehicle images through a sophisticated pipeline of image processing algorithms, all implemented in hardware for maximum performance and real-time processing capabilities.

## ✨ Features

- 🎯 **Real-time Processing**: Hardware-accelerated image processing on FPGA
- 🚙 **Iranian Vehicle Focus**: Specifically designed for Iranian license plate formats
- 🔄 **Multi-stage Pipeline**: Complete image processing workflow
- 📊 **640x640 Resolution**: Optimized for balanced performance and accuracy
- 🛠️ **Modular Design**: Each processing stage is independently implementable
- 💾 **Text-based I/O**: Easy integration with various systems

## 🏗️ System Architecture

The system follows a **6-stage pipeline architecture**:

```
Original Image → Clahe Filter → Gaussian Blur → Edge Detection 
                                                      ↓
Plate Detection ← Morphological Operations ← Adaptive Threshold
```

## 📁 Project Structure

```
Plate_Detected_FPGA/
├── 📁 data & output of each project/
│   ├── 0-data/                    # Original input data
│   ├── 1-output clahe/            # Clahe filter results
│   ├── 2-output gaussian blur/    # Gaussian blur results
│   ├── 3-output edge detection/   # Edge detection results
│   ├── 4-output adaptive threshold/ # Adaptive thresholding results
│   ├── 5-output morphological/    # Morphological operations results
│   └── 6-output detected plate/   # Final plate detection results
├── 📁 results of dataset/
│   ├── 0-main data/              # Processed main dataset
│   ├── 1-results of clahe/       # Clahe processing results
│   ├── 2-results of gaussian blur/ # Gaussian blur processing results
│   ├── 3-results of edge detection/ # Edge detection processing results
│   ├── 4-results of adaptive threshold/ # Adaptive threshold results
│   ├── 5-results of morphological/ # Morphological processing results
│   └── 6-results of detected plate/ # Final detection results
├── 📁 src/
│   ├── 1-clahe/                  # CLAHE filter FPGA implementation
│   ├── 2-gaussian-blur/          # Gaussian blur FPGA implementation
│   ├── 3-edge-detection/         # Edge detection FPGA implementation
│   ├── 4-adaptive-thresholding/  # Adaptive thresholding FPGA implementation
│   ├── 5-morphological/          # Morphological operations FPGA implementation
│   └── 6-plate-detection/        # Final plate detection FPGA implementation
└── roi_mask.txt                  # Region of Interest mask file
```

## 🔧 Processing Pipeline

### Stage 1: CLAHE Filter (Contrast Limited Adaptive Histogram Equalization)
- **Purpose**: Enhance local contrast and improve image visibility
- **Input**: Original RGB image (640×640)
- **Output**: Enhanced contrast image
- **FPGA Implementation**: Hardware-accelerated histogram equalization

### Stage 2: Gaussian Blur
- **Purpose**: Noise reduction and image smoothing
- **Input**: CLAHE filtered image
- **Output**: Smoothed image
- **FPGA Implementation**: Optimized convolution kernels

### Stage 3: Edge Detection
- **Purpose**: Identify edges and boundaries in the image
- **Input**: Gaussian blurred image
- **Output**: Edge-detected binary image
- **FPGA Implementation**: Hardware-based gradient calculation

### Stage 4: Adaptive Thresholding
- **Purpose**: Convert to binary image with adaptive threshold values
- **Input**: Edge-detected image
- **Output**: Binary thresholded image
- **FPGA Implementation**: Local threshold computation

### Stage 5: Morphological Operations
- **Purpose**: Clean up binary image and enhance plate regions
- **Input**: Thresholded binary image
- **Output**: Morphologically processed image
- **FPGA Implementation**: Erosion and dilation operations

### Stage 6: Contour Detection & Shape Filtering
- **Purpose**: Detect and filter plate-like rectangular regions
- **Input**: Morphologically processed image
- **Output**: Detected plate regions
- **FPGA Implementation**: Hardware contour analysis

## 🛠️ Tools & Technologies

- **Hardware**: FPGA (Field-Programmable Gate Array)
- **Development Environment**: Xilinx ISE
- **HDL**: Verilog/VHDL
- **Image Processing**: OpenCV (for preprocessing)
- **Programming Language**: Python (for data preparation and visualization)
- **Image Format**: 640×640 RGB images converted to text format

## 🚀 Getting Started

### Prerequisites
- Xilinx ISE Design Suite
- Python 3.x with OpenCV
- FPGA development board
- Dataset of Iranian vehicle images

### Data Preparation

1. **Image Collection**: Gather Iranian vehicle images for your dataset

2. **Image Preprocessing**: Use the provided Python script to convert images:
   ```python
   # Resize images to 640x640 and convert to text format
   batch_convert(INPUT_FOLDER, OUTPUT_FOLDER, width=640, height=640)
   ```

3. **Text Format**: Each pixel is stored as "R G B" values in text files

### FPGA Implementation

1. **Load Project**: Open each stage's project in Xilinx ISE
2. **Synthesis**: Synthesize the Verilog/VHDL code
3. **Implementation**: Place and route the design
4. **Programming**: Program the FPGA with generated bitstream

### Running the Pipeline

1. Feed input text file to Stage 1 (CLAHE)
2. Pipeline each stage's output to the next stage's input
3. Final output contains detected plate regions

### Visualization

Convert final text output back to image format:
```python
# Convert text output to viewable image
pixels = np.array([int(p.strip()) for p in pixels], dtype=np.uint8)
image = pixels.reshape((height, width))
cv2.imwrite('detected_plates.png', image)
```

## 📊 Performance Characteristics

- **Resolution**: 640×640 pixels
- **Processing**: Real-time capable on FPGA
- **Accuracy**: Optimized for Iranian license plate formats
- **Throughput**: Hardware-limited, significantly faster than software implementation

## 🎯 Applications

- **Traffic Monitoring**: Automated vehicle tracking
- **Parking Systems**: Automated parking management
- **Security Systems**: Vehicle access control
- **Law Enforcement**: Speed monitoring and violation detection

## 🤝 Contributing

Feel free to contribute to this project by:
- Improving algorithm efficiency
- Adding new filtering stages
- Optimizing FPGA resource utilization
- Enhancing detection accuracy

## 📝 License

This project is developed for educational and research purposes.

## 📧 Contact

For questions or collaboration opportunities, please reach out!

---

⭐ **Star this repository if you found it helpful!** ⭐

*Built with ❤️ for the Iranian tech community*

Written by:Amirreza kamali
