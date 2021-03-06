# AUTOMATIC-ROBOT-CAR

## INTRODUCTION

In our world today, ROBOTICS is a very interesting research area, which is fast growing as it is the
simplest way for modifying modern day technology. Robotics plays a major role in technology
advancement, which is why I decided to work on the robotics field and design something intelligent
to make human life simpler.

A robot is one which can move without any external interference in an environment
which is unstructured and unknown to the robot.

The aim of this project is to use  micro-controller with the DC motor with the view of making the robot follow certain commands.It should contain two  motors for the movement of the robotic car. Consider clockwise as forward and anticlockwise as backward. This project is designed using Embedded C programming language and it should be  compiled in WinAVR with the GCC compiler.The simulation is done in Simulide.

This project involves the design and implementation of an  robot car. The main objective of this project is to move a car in all direction without the  need for human direction or any other  interaction. 

This implementation was done using a DC motor which rotate automatically. The commands are sent to the ATmega328 microcontroller  which serves as the main control
of the robot car, as it controls the car movement. The implemented robot car was rotate successfully .

### COMMANDS: 

* FORWARD
* BACKWARD
* LEFT
* RIGHT
* STOP

The car will be moving automatically according to these directions.

## OBJECTIVE

 The main objective of this project is to move a car in all direction without the  need for human direction or any other  interaction.



## SOFTWARE REQUIREMENTS
* SIMULIDE
* WINAVR

## COMPONENETS USED IN PROJECT
* DC motor
      
 DC motor is connected to microcontroller and it will rotate forward, backward,left and right directions autmatically.
          
* ATmega328 microcontroller
      
The commands are sent to the ATmega328 microcontroller  which serves as the main control of the robot car, as it controls the car movement. The implemented robot car was rotate successfully .

#### DC motor 
A direct current (DC) motor is a type of electric machine that converts electrical energy into mechanical energy. DC motors take electrical power through direct current, and convert this energy into mechanical rotation.

A DC motor is one of the first electric motors designed to convert direct current electrical energy to mechanical energy. It is one of the greatest devices that humans invented and since then, it has amazingly revolutionized our lives. This rotary electrical machine occupied different types, all of them contain almost the same components that cooperate based on either the mechanism of electronic or the mechanism of electromechanical that is responsible for changing the direction of current in the motor.

A DC motor is made up of a stator, an armature or a rotor, and a commutator with brushes. These are main components and are included in all the DC motors. If we want to explain very briefly how this type of engine works, we must say that the polarity opposition between the two magnetic fields of the motor causes it to turn. These motors may be the simplest motors available in terms of construction and performance, but they have a wide range of uses, including those used in home appliances such as electric razors and those used in a variety of industries.

#### ATmega328

The ATmega328 is a single-chip microcontroller created by Atmel in the megaAVR family (later Microchip Technology acquired Atmel in 2016). It has a modified Harvard architecture 8-bit RISC processor core.Tmega328 is an Advanced Virtual RISC (AVR) microcontroller. It supports 8-bit data processing. ATmega-328 has 32KB internal flash memory. ATmega328 has 1KB Electrically Erasable Programmable Read-Only Memory (EEPROM).



## 4'WS and 1 H:

#### Who
This Automatic robot car   is  an application is used by all the people especially childrean .

####  What:
This project  is navigated and maneuvered by a computer without a need for human control or intervention under a range of driving situations and conditions.

####  When:
This Automatic robot car  is very useful when there are large no of people used robot car .

#### Where:
The robot car  is nowadays essential for all the  places .

####  How:
This project is implemented for to be  moving  in forward, backward, left and right directions automatically.

## SWOT ANALYSIS: 

### Strengths:
a) Fully automated process 

b) Time saving

c) Cost reduction

d) Easy to deploy and re-congigure

e) Rapid development


### Weakness:
a) Expensive

b) Safety and security concerns

c) Prone to Hacking

d) Fewer job opportunities for others

e) Non-functional sensors

### Opportunities:

a) Roadmap for future projects

b) Gain share

c) Process improvement

d) Emission control


### Threats:

a) Public transportation

b) Unstable process

c) Privacy concerns

d) Eliminate existing jobs


## HIGH LEVEL REQUIREMENTS:

|RID       |DESCRIPTION	       |STATUS |
|----------|-------------------|-------|
|HLR1      |EMBEDDED C LANGUAGE   	   |IMPLEMENTED|
|HLR2      |OS WINDOWS         |IMPLEMENTED|
|HLR3      |OS LINUX	       |IMPLEMENTED|
|HLR4      |WINAVR     |IMPLEMENTED|
|HLR5      |SIMULIDE	       |IMPLEMENTED|
|HLR6      |HARDDISK	       |IMPLEMENTED|
|HLR7      |RAM 4GB            |IMPLEMENTED|

## LOW LEVEL REQUIREMENTS:

|RID         |DESCRIPTION	    |STATUS|
|------------|------------------|-------|
|LLR1      	 |FORWARD             |IMPLEMENTED|
|LLR2	     |BACKWARD            |IMPLEMENTED|
|LLR3	     |LEFT        |IMPLEMENTED|
|LLR4	     |RIGHT             |IMPLEMENTED|
|LLR5	     |STOP             |IMPLEMENTED|

## BLOCK DIAGRAM
![Block_Diagram](https://user-images.githubusercontent.com/101463471/164884804-5aec100f-d935-4e2f-b34c-e1b211f3d932.PNG)

## FLOW CHART

![Flowchart](https://user-images.githubusercontent.com/101463471/164884870-e2d9572b-0985-473e-b661-6b92dc3bc2d8.PNG)

## CIRCUIT DIAGRAM
![Circuit_Diagram](https://user-images.githubusercontent.com/101463471/164885047-24070d33-be8e-4de9-b5c7-ca5d80f598d8.PNG)

## TESTCASES
###  HIGH LEVEL TEST PLAN:

|TEST ID      |DESCRIPTION	       |INPUT |  EXPECTED OUTPUT|
|----------|-------------------|-------|-----|
|HL01      |FORWARD  	   |PORTB = 0x01;| EXECUTED |
|          |                |PORTD =0x01;|  |
|HL02      |BACKWARD         |PORTB = 0x80;|EXECUTED |
|	|             |PORTD = 0x80;|   |
|HL03      |LEFT	       |PORTB = 0x00;|EXECUTED |
|          |                 |PORTD = 0x01;|      |
|HL04      |RIGHT	       |PORTB = 0x01;|EXECUTED |
|          |		        |PORTD = 0x00;|     |
|HL05      |STOP	       |PORTB = 0x00;|EXECUTED |
|          |		       |PORTD = 0x00;|     |


### LOW LEVEL TEST PLAN:

|TEST ID       |DESCRIPTION	    |INPUT| EXPECTED OUTPUT|
|------------|------------------|-------|------------|
|LL01      |FORWARD  	   |PORTB = 0x01;|  Both the motors to be rotate  in  Clockwise direction |
 |     |                     |PORTD =0x01;|    |
|LL02      |BACKWARD         |PORTB = 0x80;| Both the motors to be rotate in  Anti-Clockwise direction|
|       |		             |PORTD = 0x80;|   |
|LL03      |LEFT	       |PORTB = 0x00;|Rotate left motor|
|     |		              |PORTD = 0x01;|   |
|LL04      |RIGHT	       |PORTB = 0x01;|Rotate right motor|
|      |		               |PORTD = 0x00;|   |
|LL05      |STOP	       |PORTB = 0x00;|Both the motors to be stoped|
|		|                |PORTD = 0x00;|  |

## OUTPUT IMAGES
#### Forward 
![Forward](https://user-images.githubusercontent.com/101463471/164885022-6355ffd1-0ba8-44cb-a1a8-a5c93deea2c9.PNG)

#### Backward
![Backward](https://user-images.githubusercontent.com/101463471/164885209-b637094e-c305-4426-8830-cdfc34584cea.PNG)

#### Left
![Left](https://user-images.githubusercontent.com/101463471/164885027-1886fcc8-97a6-40df-8f92-8dd47e122ef6.PNG)

#### Right
![Right](https://user-images.githubusercontent.com/101463471/164885036-dcea19db-de62-48ec-ad27-a7a95ac41f21.PNG)

#### Stop
![Stop](https://user-images.githubusercontent.com/101463471/164885235-087f16fe-00d1-410e-9f73-79ed7d0bf0b1.PNG)

# M2_AUTOMATIC-ROBOT-CAR
|  FOLDER  | DESCRIPTION|
|----------|-----------|
|0_Abstract|Contains explanation of project|
|1_Requirements|Contains 4'WS & 1H , SWOT analysis and details of high level and low level requirements|
|2_Design|Contains Block diagram,Circuit diagarm and Flow chart|
|3_Implementation|Contains Source code and  Simulation|
|4_Testcases|Contains testplan and procedures|
|5_Report|Contains overall details of project|
|6_Output   |Contains output images, .hex file and .simu file|



