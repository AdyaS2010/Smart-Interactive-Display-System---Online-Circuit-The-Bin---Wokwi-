# Smart Interactive Display System

## Project Description

The **Smart Interactive Display System** is an advanced setup designed to interact with users through various sensors and actuators. This system detects user presence, measures distance, tracks motion, and provides visual feedback, making it a versatile and engaging display solution.

## Components Utilized & Their Respective Uses

1. **Motion Sensor (PIR Sensor)**
   - **Purpose**: Detects motion in the vicinity.
   - **Use**: Activates the system when a user is detected, waking it up from sleep mode.

2. **Encoder**
   - **Purpose**: Detects rotational position.
   - **Use**: Acts as a control dial for selecting different modes or options on the LED matrix display.

3. **Range Finder (HC-SR04 Ultrasonic Sensor)**
   - **Purpose**: Measures distance.
   - **Use**: Adjusts the display based on the user's distance, showing different levels of detail.

4. **Accelerometer (MPU6050)**
   - **Purpose**: Detects movement and orientation.
   - **Use**: Adjusts the display or controls if the system is moved or tilted.

5. **Neopixel LED**
   - **Purpose**: Provides colorful visual feedback.
   - **Use**: Changes colors based on the system's state or user inputs.

6. **Servo Motor**
   - **Purpose**: Moves to specific positions.
   - **Use**: Moves parts of the system, such as adjusting the angle of the LED matrix or moving a pointer.

7. **LED Matrix (MAX7219)**
   - **Purpose**: Displays information or graphics.
   - **Use**: Serves as the main display, showing information, options, or graphics to the user.

8. **Relay Module**
   - **Purpose**: Controls power to other devices.
   - **Use**: Switches on/off external devices or parts of the system based on user inputs or system state.

## How It Works

- **Motion Detection**: The motion sensor activates the system when a user approaches.
- **Distance Measurement**: The range finder measures the user's distance and adjusts the LED matrix display accordingly.
- **User Interaction**: The encoder allows the user to select options on the LED matrix, with the Neopixel LED providing visual feedback.
- **Movement Response**: The accelerometer detects if the system is moved and adjusts the display or controls.
- **Visual Display**: The LED matrix displays information or graphics, while the servo motor moves parts of the system for better interaction.
- **Power Control**: The relay module controls power to external devices or parts of the system.
