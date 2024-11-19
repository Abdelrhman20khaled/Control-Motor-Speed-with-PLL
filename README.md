# Motor Speed Control using PLL (NE565) and ATmega32

This repository contains the code and simulation files for controlling the speed of a DC motor using a Phase-Locked Loop (PLL) implemented with the **NE565 IC** and an **ATmega32 microcontroller**. The project utilizes an oscilloscope for monitoring system performance and motor speed feedback.

## Project Overview

The objective of this project is to design and implement a closed-loop control system using the NE565 PLL IC for precise speed regulation of a DC motor. The ATmega32 microcontroller is used for managing the control logic and interfacing with the PLL.

### Features:
- **PLL Chip**: NE565 for speed synchronization and stability.
- **Microcontroller**: ATmega32 for control and feedback processing.
- **Motor**: DC motor for testing and implementation.
- **Monitoring**: Oscilloscope to observe speed and signal behavior.

## Project Goals
1. **Implement a PLL-based speed control system** using NE565 and ATmega32.
2. **Write and test control code** for the ATmega32 to interface with the motor and PLL circuit.
3. **Simulate and validate the system** using both hardware and software tools.

## Hardware and Tools
- **PLL Chip**: NE565
- **Microcontroller**: ATmega32
- **Motor**: DC motor
- **Oscilloscope**: Used for real-time monitoring
- **Development Environment**: AVR IDE or equivalent
- **Simulation Tool**: Proteus or similar software

## Schematic
The schematic for this project includes all necessary components for controlling the speed of a DC motor using a Phase-Locked Loop (PLL) with the **NE565 IC**, **ATmega32 microcontroller**, and an oscilloscope for monitoring system performance. The design integrates the motor control circuitry, feedback loop, and microcontroller connections.

<img src="Images/Schematic.jpg" width="500"/>
<img src="Images/Schematic.jpg" width="500"/>
<img src="Images/Schematic.jpg" width="500"/>

## How it Works
1. The **NE565 PLL** locks the motor's speed to a reference frequency by adjusting its control voltage based on feedback.
2. The **ATmega32 microcontroller** provides additional control logic, enabling dynamic adjustments to the reference frequency or motor behavior.
3. The **oscilloscope** is used to monitor the feedback signal and motor performance.
