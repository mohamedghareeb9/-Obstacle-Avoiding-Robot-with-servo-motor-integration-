🤖 Obstacle-Avoiding Robot with Servo-Enhanced Ultrasonic Scanning
An autonomous, Arduino-based robot designed to intelligently navigate its environment by detecting and avoiding obstacles using a servo-mounted ultrasonic sensor. The integration of a servo motor enables dynamic scanning, allowing the robot to assess a wider area before making navigation decisions.

🔧 Project Overview
This project demonstrates how embedded systems and robotics can be combined to create a self-navigating vehicle. Written in C++ using the Arduino IDE, the robot uses distance feedback from an ultrasonic sensor that rotates via a servo motor to determine the optimal path in real-time.

🎯 Key Features
Wide-Angle Obstacle Detection
A servo-mounted ultrasonic sensor scans multiple directions (left, center, right) for a broader field of vision.

Autonomous Path Adjustment
Real-time decision-making logic enables the robot to avoid obstacles by turning toward the clearest path.

Dual DC Motor Drive
Enables smooth, differential steering for forward, reverse, and turning motions.

Portable Power System
Compact battery pack allows for wireless, untethered operation.

Modular & Expandable Design
Easily adaptable for more sensors, Bluetooth control, or additional automation logic.

🧰 Hardware Components
Component	Quantity
Arduino UNO (or clone)	1
Ultrasonic Sensor (HC-SR04)	1
Servo Motor (e.g., SG90)	1
Motor Driver Module (L298N or L293D)	1
DC Motors with wheels	2
Robot Chassis	1
Battery Pack (6–9V)	1
Jumper Wires	As needed

💻 Installation & Usage
Clone the Repository

bash
Copy
Edit
git clone https://github.com/mohamedghareeb9/Obstacle-Avoiding--Robot-with-servo-motor-integration
.git
Open in Arduino IDE

Launch obstacle_avoiding_robot.ino

Select your board and port from the Tools menu

Upload the Code

Click the Upload button to flash the code onto your Arduino

Power the Robot

Use a battery pack or USB power supply

Watch It Navigate

Place the robot in an obstacle-rich environment and observe its behavior

📁 Folder Structure
bash
Copy
Edit
obstacle-avoiding-servo-robot/
├── obstacle_avoiding_robot.ino
├── README.md
└── /media (optional for images/video)
📜 License
This project is licensed under the Apache License.
Feel free to use, modify, and distribute with attribution.

🙋‍♂️ Author & Contributions
Developed by Mohamed Gharib, combining foundational robotics with intelligent scanning mechanics.
Contributions, forks, and suggestions are welcome!
