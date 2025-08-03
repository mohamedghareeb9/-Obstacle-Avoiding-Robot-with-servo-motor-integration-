Smart Arduino Robot Car – Dual-Mode Navigation
This project presents a DIY four-wheeled robot car built using an Arduino UNO. It supports two operational modes: a Bluetooth-controlled mode and an Autonomous obstacle avoidance mode, making it a versatile platform for robotics and embedded systems experimentation.

Overview
The robot is designed to operate in two selectable modes:

Bluetooth Mode: The robot is wirelessly controlled via the HC-05 Bluetooth module using a PC or smartphone. Commands are transmitted to the Arduino to manually steer the robot in real-time.

Autonomous Mode: The onboard ultrasonic sensor, mounted on a servo motor, continuously scans the environment. The robot analyzes distance data and autonomously avoids obstacles by adjusting its path accordingly.

This project demonstrates the integration of sensors, actuators, and control logic within a microcontroller-based system.

Key Features
Dual-mode operation (Bluetooth and Autonomous)

Servo-driven ultrasonic scanning for extended field of detection

Real-time obstacle detection and decision making

Manual wireless control via Bluetooth terminal

Independent motor control using dual motor drivers

Breadboard-based prototype for rapid testing and modifications

Hardware Components
Component	Description
Arduino UNO	Microcontroller board
HC-SR04 Ultrasonic Sensor	Distance measurement
SG90 Servo Motor	Rotates sensor for scanning
L298N Motor Driver Modules	Dual H-bridge motor controllers
HC-05 Bluetooth Module	Wireless communication module
4× DC Motors + Wheels	Robot locomotion
Custom Chassis + Breadboard	Structural base and wiring platform
Battery Pack (6–9V)	Power supply
H-Bridge

System Architecture
Sensor Layer: The ultrasonic sensor mounted on a servo motor provides distance data in multiple directions.

Control Layer: The Arduino processes inputs from the sensors or Bluetooth commands and selects the appropriate behavior.

Actuator Layer: Dual L298N modules drive the motors to enable directional control and speed regulation.

Implementation Details
Written in C++ using the Arduino IDE

Modular code structure to support both modes

Uses Serial communication for Bluetooth input

Includes debouncing and timing logic to stabilize sensor readings

Mode selection implemented using a physical switch with conditional logic

Challenges Encountered
Problem	Resolution
Inconsistent motor behavior	Introduced a separate power source and soldered key connections
HC-05 not pairing with PC	Verified TX/RX wiring and matched the baud rate (9600 bps)
Servo and ultrasonic interference	Added timing delays and smoothing logic to improve stability

Getting Started
Clone the repository

bash
Copy
Edit
git clone https://github.com/mohamedghareeb9/bluetooth-autonomous-robot-car.git
Open the .ino file in the Arduino IDE.

Connect your Arduino UNO, select the correct board and COM port.

Upload the code to your device.

Power the robot using a battery pack.

Use the hardware switch to toggle between Bluetooth and Autonomous modes.

License
This project is licensed under the Apache License 2.0.
You are free to use, modify, and distribute the code, provided that you retain the original license and attribution.

Author
Mohamed Ghareeb
GitHub: @mohamedghareeb9

