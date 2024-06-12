# 9-Hole Peg Test Digitalization Project

## Overview
This project aims to enhance the traditional 9-Hole Peg Test by integrating digital components to make the test more interactive and effective for patient rehabilitation. The test uses a piezo sensor to detect touch inputs, control LED lights, and collect data to monitor patient progress. By digitalizing the test, we can provide a more engaging experience for patients and more precise data for healthcare providers.

## Video Demonstration
[![Watch the video](https://img.icons8.com/clouds/100/000000/video.png)](https://drive.google.com/file/d/1Fo5fdeww7PVEz_LcmSy1AHHzR1ENq6Q_/view?usp=sharing)

## Project Features
- **Interactive LED Guidance:** LED lights guide patients on where to place the pegs, making the test more engaging and easier to follow.
- **Piezo Sensor Touch Detection:** Sensors detect when a peg is placed, ensuring accurate data collection.
- **Real-Time Data Collection:** Data from the sensors are collected in real-time, allowing for immediate feedback and progress tracking.
- **Customizable Game Modes:** The test can be turned into a game with various combinations and challenges to motivate patients and make the rehabilitation process enjoyable.

## Components
- **Arduino Board:** To control the sensors and LEDs.
- **Piezo Sensors:** To detect the placement of pegs.
- **LEDs:** To guide the patient on where to place the pegs.
- **Breadboard and Wires:** For setting up the circuit.



## How to Use

1. **Set Up the Circuit:** Connect the piezo sensors and LEDs to the Arduino board as per the circuit diagram.
2. **Upload the Code:** Use the Arduino IDE to upload the provided code to the Arduino board.
3. **Start the Test:** Guide the patient to place the pegs in the indicated holes. The LEDs will light up to guide the placement.
4. **Monitor the Data:** Use the serial monitor in the Arduino IDE to observe the sensor readings and patient progress.
5. **Play the Game:** The `playGame` function randomly turns on LEDs, creating an interactive game for the patient.

## Future Improvements

- **Data Logging:** Implement a system to log the data for long-term tracking of patient progress.
- **Mobile App Integration:** Develop a mobile app to display the data in a user-friendly manner.
- **Advanced Game Modes:** Add more complex game modes to further engage patients and make the rehabilitation process more enjoyable.