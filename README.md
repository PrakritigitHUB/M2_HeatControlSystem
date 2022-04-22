# M2_HeatControlSystem

* The Heat Control System is basically used to control the temperature of a car seat. 
* The temperature sensor keeps monitoring the temperature and sends the analog value to the microcontroller.
* The microcontroller processes the analog input of the temperature sensor and outputs a temperature value through serial communication.
* All the activities of the control system are done on a microcontroller called Atmega328.


## Folder Structure

|FOLDER|DESCRIPTION|
|:-----|:----------|
|1_Requirements|Documents detailing requirements|
|2_Architecture|Structural and Behavioural UML|
|3_Implementation|All the code is written here|
|4_TestPlanAndOutput|Documents with test plans and outputs|
|5_Report|Generated Report|
|6_ImagesandVideos|All the images and program execution video|
 

### Simulation

* The functionality of the heat control system is coded in embedded c and the working is demonstrated using simuation in a software called SimulIDE.
* Images shows the status of the simulation when the system is OFF and the status of the system when it is ON. 

### Functionality 

* When the two switches are closed, the first LED glows indicating the actuation of the system and the heater.
* Next the analog input from the temperature sensor is received and digitized.
* The digitized temperature input is visualized using Pulse Width Modulation.
* The corresponding temperature values based on the digitized temperature input is transmitted by the UART protocol. Here the data is displayed on the serial monitor.


### CI and Code analysis
[![Codacy Badge](https://app.codacy.com/project/badge/Grade/de2c45a066ad4d87a9160dec012fced7)](https://www.codacy.com/gh/PrakritiAloo/M2_HeatControlSystem/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=PrakritiAloo/M2_HeatControlSystem&amp;utm_campaign=Badge_Grade)
[![Compile-Linux](https://github.com/hemanthasapu/embedded_systems_project_256889/actions/workflows/Compile.yml/badge.svg)](https://github.com/hemanthasapu/embedded_systems_project_256889/actions/workflows/Compile.yml)
[![Cppcheck](https://github.com/hemanthasapu/embedded_systems_project_256889/actions/workflows/CodeQuality.yml/badge.svg)
