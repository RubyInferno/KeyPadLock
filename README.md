# KeyPadLock

In this project the team members shall implement a Keypad-Controlled Lock system, originally developed by John Boxall. The project describes a system that allows the user to enter a six-digit code into the system and the system returns true if the code entered by user matches the secret sixdigit code stored at the back-end of the system.[1]

Moiz Khan,Jingneng Li, Likun Zhang, we are using this one account to share everything of our project. When we have thought of project we just log in this account and update some comment.

* **we start project a bit late, so the update around 29th July** 

This specific project is a KeyPadLock-prototype 01. Prototype 01 just installed motor and keypad. It just has basic option suchas enter 4 digits to unlock and when it unlocked the green led will light up and when enter wrong password the red led will light up. 

![image](https://github.com/RubyInferno/KeyPadLock/blob/master/Images/prototyper.jpg)

The picture below is Prototype 02. The Prototype 02 is installed with motor, 4x4 KeyPad and monitor by using Arduino mega. This prototype 02 is trying to make monitor display password and when password is correct the motor will unlock and green led light up. Also when enter wrong password red led gonna light up. Right now we want to extend more option for this prototype 02 such as adds sound buzzer to make some sound after push keypad button or after open the lock paly some midi music.
![image](https://github.com/RubyInferno/KeyPadLock/blob/master/Images/Prototype02.jpg)


# Repository Contents

* **/src** (.ino, .cpp)
* **/Code** code for our project
* **/hardware** (.ftz, .brd, .sch, .stl)
* **/build** 
* **/libraries** some code's libraries
* **/examples**  images that we thought about our future projects
* **/img** contains images from project and parts
* **/README.md** full information about this project

# Requirements and Materials

* important libraries that alredeady uploaded to library folder

Bill of Materials:
* 1 x 4x4 keypad
* 1 x green LED
* 1 x red LED
* 1 x buzzer
* 1 x motor
* 1 x monitor
* 1 x breadboard
* 1 x Arduino Mega

Team
=====

* Moiz Khan -- writing and code part
* Jingneng Li -- Code and hardware 
* Likun Zhang -- Repository 

Credits
=======  
  
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
