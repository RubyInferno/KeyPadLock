# KeyPadLock

In this project the team members shall implement a Keypad-Controlled Lock system, originally developed by John Boxall. The project describes a system that allows the user to enter a six-digit code into the system and the system returns true if the code entered by user matches the secret sixdigit code stored at the back-end of the system.[1]

Moiz Khan,Jingneng Li, Likun Zhang, we are using this one account to share everything of our project. When we have thought of project we just log in this account and update some comment.

* **we start project a bit late, so the update around 29th July** 

This specific project is a KeyPadLock-prototype 01. Prototype 01 just installed motor and keypad. It just has basic option suchas enter 4 digits to unlock and when it unlocked the green led will light up and when enter wrong password the red led will light up. 

![image](https://github.com/RubyInferno/KeyPadLock/blob/master/Images/prototyper.jpg)

The picture below is Prototype 02. The Prototype 02 is installed with motor, 4x4 KeyPad and monitor by using Arduino mega. This prototype 02 is trying to make monitor display password and when password is correct the motor will unlock and green led light up. Also when enter wrong password red led gonna light up. Right now we want to extend more option for this prototype 02 such as adds sound buzzer to make some sound after push keypad button or after open the lock paly some midi music.
![image](https://github.com/RubyInferno/KeyPadLock/blob/master/Images/Prototype02.jpg)

The following picture shows KeyPadLock Prototype 03. The prototype 03 can doing both lock and unlock ways. Also prototype 03 has sound feature. It can has sound while push every button in the 4x4 keypad. After unlock and lcok there will have some midi music come out frome buzzer. The monitor also will show some words such as welcome, open lock or lock got armed. For now, prototype 03 has all features that we planed before. We problebly gonna make as more as we can. It depends on how many time we left. If no time to make, the prototype 03 gonna be our final goal. By the way we will make its outside more "beautiful" than prototype 03 for sure.
![image](https://github.com/RubyInferno/KeyPadLock/blob/master/Images/prototype03.jpg)

Finally we finished our final version of ou KeyPadLock!! The following picture is showing our final version and design of appearence.(i know its not that beautiful...) The hardware as same as prototype 03. We don't have enough time to give it more features because some of our parts still in delivery(sad..). So we just give it beautiful skin and let it looks more similiar to a real KeyPadLook. Default state is locked when enter correct password the arrow gonna rotated 90 to right. If password is wrong, red led will light up. Also we can input same unlock password to lock it again. At the end, We didn't test how many times we can input wrong password. After lock and unlock, it will play 2 different tones.(hope someone can guess these 2 songs. BTW there is no award...)

![image](https://github.com/RubyInferno/KeyPadLock/blob/master/Images/final-version.jpg)

# Repository Contents

* **/Code** code for our project (.ino, .cpp)
* **/img** contains images from project and parts
* **/build** 
* **/examples**  images that we thought about our future projects
* **/hardware** (.ftz, .brd, .sch, .stl)
* **/libraries** some code's libraries
* **/README.md** full information about this project

# Requirements and Materials

Library
* keypad with monitor and motor  
https://github.com/RubyInferno/KeyPadLock/blob/master/libraries/keypad.zip

* buzzer  
https://github.com/RubyInferno/KeyPadLock/blob/master/libraries/The_Buzzer__RickRolled_.zip  

* Arduino with 4x4 keypad and motor(no monitor)  
https://github.com/RubyInferno/KeyPadLock/blob/master/libraries/Arduino-Keypad-Software.zip
* some libraries already include in Arduino IDE

Bill of Materials:
* 1 x 4x4 keypad
* 1 x green LED
* 1 x red LED
* 1 x buzzer
* 1 x motor
* 1 x monitor
* 1 x breadboard
* 1 x Arduino Mega

# Build Instructions

* Schematic of project build
![image](https://github.com/RubyInferno/KeyPadLock/blob/master/Images/circuit.jpg)




# Firmware Installation
* Read above instrcuion's picture and follow these steps  
* Conect breadboard to Arduino mega
* Conect motor to breadboard
* Conect 4x4 Keypad to Arduino mega pin 45-50
* Conect monitor to breadboard and use many cables conect monitor from breadboard to Arduino pin 1-8
* Conect buzzer to breadboard
* Conect red and green led to the breadboard
* optional if you want, you can conect motor to a real lock

# Usage
* Plug the Arduino into the computer
* Upload our project code to arduino
(you can find code from here https://github.com/RubyInferno/KeyPadLock/blob/master/Code/Project.zip)
* After upload code to arduino, you can use battrty box to power the arduino
* Here the project should be start
* Try anything you want (hope everyone enjoy those tones XD )

# Team


* Moiz Khan -- writing and code part
* Jingneng Li -- Code and hardware 
* Likun Zhang -- Repository 

# Credits
  
  
Prototype keypad toturial
* https://www.youtube.com/watch?v=HE-PFaakFEE
* How to Make a Keypad Lock With an Arduino - JLaservideo   
  
we get arduino kepad library from.
* http://www.jlaservideo.com/project-downloads/
* DIY PROJECTS AND INVENTIONS BY JAKE LASER

first instruction reference from
* [1] http://nostarch.s3.amazonaws.com/arduino_project33.pdf

keypad-prototype's code copyright reserved from http://www.jlaservideo.com

part of KeyPadLock-with-monitor from
* http://www.instructables.com/id/Arduino-password-lock/

The Buzzer code
* http://www.instructables.com/id/How-to-use-a-Buzzer-Arduino-Tutorial/
