# 📡 Smart Scan Radar

An Arduino-based real-time radar system that uses an HC-SR04 ultrasonic sensor mounted on an SG90 servo motor to scan objects across a 0°–180° field of view. The measured angle and distance data are transmitted through serial communication and visualized using Processing.

## 🚀 Features

- 0°–180° scanning
- Real-time distance measurement
- Servo-controlled ultrasonic scanning
- Object detection based on distance
- Real-time radar visualization
- Live angle and distance display
- Serial communication between Arduino and Processing
- Full-screen radar interface

## 🛠️ Hardware

- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- SG90 Servo Motor
- Breadboard
- Jumper Wires
- USB Cable
- Laptop

## 💻 Software

- Arduino IDE
- Processing 4
- Arduino C/C++
- Processing

## 🔌 Circuit Connections

| Component | Arduino Pin |
|---|---|
| SG90 Signal | D12 |
| HC-SR04 TRIG | D10 |
| HC-SR04 ECHO | D11 |
| VCC | 5V |
| GND | GND |

## ⚙️ Working Principle

The SG90 servo rotates the HC-SR04 ultrasonic sensor from 0° to 180°.

At each angle, the HC-SR04 sends an ultrasonic pulse and measures the time taken for the echo to return.

The Arduino calculates the distance and sends the data through serial communication in the format:

`Angle,Distance`

Example:

`90,45.32`

The Processing application receives this data and converts it into a real-time radar visualization.

## 🔄 System Flow

Arduino Uno  
↓  
SG90 Servo Motor  
↓  
HC-SR04 Ultrasonic Sensor  
↓  
Distance Measurement  
↓  
Serial Communication  
↓  
Processing  
↓  
Real-Time Radar Display

## 📸 Project Demonstration

### Complete Radar Setup

![Radar Setup](images/radar_setup.jpg)

### Hardware Connections

![Hardware Connections](images/hardware_connections.jpg)

### Sensor and Servo Assembly

![Sensor and Servo Assembly](images/sensor_servo_assembly.jpg)

## 🎥 Demo

[▶️ View the Radar Demonstration](demo/radar_demo_github.mp4)

## 🎯 Applications

- Object detection
- Security monitoring
- Zone monitoring
- Robotics
- Smart surveillance
- Basic autonomous navigation

## 🔮 Future Improvements

- Object tracking
- Buzzer-based alerts
- OLED/LCD integration
- ESP32 wireless monitoring
- Camera-based object classification
- Web or mobile dashboard

## 👨‍💻 Project Information

**Project:** Smart Scan Radar  
**Type:** ECE Mini Project  
**Domain:** Embedded Systems | Sensors | Robotics | Real-Time Visualization
