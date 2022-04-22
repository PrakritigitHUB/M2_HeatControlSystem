## Introduction
* The Heat Control System is basically used to control the temperature of a car seat. 
* A Heated seats are a standard feature on many vehicles thesedays in cold areas. 
* They provide the driver and passengers with a pleasantly warm seat at all times, even in winter.
* Heated seats are used increasingly in conjunction with climate controlled ventilation, which removes any condensing moisture from the seat.
* When a user or driver gets seated on a car, the button sensor gets activated. After that, the user gets access to turn on the heater. 
* The temperature sensor keeps monitoring the temperature and sends the analog value to the microcontroller.
* The microcontroller processes the analog input of the temperature sensor and outputs a temperature value through serial communication.
* All the activities of the control system are done on a microcontroller called Atmega328.
* The desired temperature is usually set in several levels.
* This can be activated by control of knob which will be allotted for it or by actuating the buttons manually , depending on the configuration installed. 


 ## Objectives

* A flexible approach system.
* The implementation of this project leads for adjusting passenger seat temperatures according to their adjustments.
* Driver or Passenger has the access to modify the temperature in the vehicle.
* As per the passengers requirement, Heater will generate the heat accordingly when they tune the knob of control.
* It is best for those countries where the room temperature will be below -5 degree Celsius .


## Folder Structure

|FOLDER|DESCRIPTION|
|:-----|:----------|
|1_Requirements|Documents detailing requirements|
|2_Architecture|Structural and Behavioural UML|
|3_Implementation|All the code is written here|
|4_TestPlanAndOutput|Documents with test plans and outputs|
|5_Report|Generated Report|
|6_ImagesandVideos|All the images and program execution video|








# DESIGN

## STRUCTURAL IMAGE
* ![Case Diagram]https://github.com/PrakritigitHUB/M1_LibraryManagementSystem/blob/main/2_Design/case%20diag%202.png
* ![Class Diagram]https://github.com/PrakritigitHUB/M1_LibraryManagementSystem/blob/main/2_Design/class%20diagram.png


## BEHAVIORAL IMAGE
* ![State Diagram]https://github.com/PrakritigitHUB/M1_LibraryManagementSystem/blob/main/2_Design/State%20diagram.png
* ![Sequence Daigram]https://github.com/PrakritigitHUB/M1_LibraryManagementSystem/blob/main/2_Design/Sequence%20diagram.jpg



# CODE IMPLEMENTATION
* The code for Library Management System is written using C language, so that it is easy to be understood by the users,i.e. it becomes user-friendly.
* This code consists of functions,pointers,etc. and also the file handling concept is used here.
* The entire code is then written in the format of mutiple .c files and .h files.
* The code is run and implemented and then it is converted to makefile so that it would run on any machine irrespective of the OS.
* Unit Testing and code quality is also checked.
* Code analysis and documentation is done.



# Test Plan and Output

## Screenshots

### Add New books
![img](https://github.com/PrakritigitHUB/M1_LibraryManagementSystem/blob/main/6_Images/addbook.png)

### View books
![img](https://github.com/PrakritigitHUB/M1_LibraryManagementSystem/blob/main/6_Images/viewbooks.png)

### Issue books
![img](https://github.com/PrakritigitHUB/M1_LibraryManagementSystem/blob/main/6_Images/issuebook.png)

### Search books
![img](https://github.com/PrakritigitHUB/M1_LibraryManagementSystem/blob/main/6_Images/searchbook.png)

### Delete books
![img](https://github.com/PrakritigitHUB/M1_LibraryManagementSystem/blob/main/6_Images/deletebook.png)

### Unit testing
![img](https://github.com/PrakritigitHUB/M1_LibraryManagementSystem/blob/main/6_Images/unittest.png)
