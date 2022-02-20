# TITLE : SMART LOCK

## TABLE OF CONTENT

    1.1 INTRODUCTION
    1.2 GOALS AND OBJECTIVES
    1.3 EXISTING SYSTEM
    1.4 PROPOSED SYSTEM
    
## BLOCK DIAGRAM 

    2.1 BLOCK DIAGRAM
    2.2 DESCRIPTION
    
 ## HARDWARE REQUIREMENTS
 
    3.1 MICROCONTROLLER(PIC 16F877)
    3.2 BLUETOOTH HC-05
    3.3 GSM MODULE
    3.4 RELAY
    3.5 DC MOTOR
    3.6 POWER SUPPLY
    3.7 LCD SCREEN
    3.8 KEY PAD
    
## LIST OF FIGURES

    4.1 MICROCONTROLLER(PIC 16F877)
    4.2 BLUETOOTH HC-05
    4.3 GSM MODULE
    4.4 RELAY
    4.5 DC MOTOR
    4.6 POWER SUPPLY
    4.7 LCD SCREEN
    4.8 KEY PAD
    
## ABSTRACT
This report discusses the design and implementations of a door unlock
compact system using the Bluetooth and GSM modules. These security systems
enable to unlock the door using two different modes i.e. Bluetooth and Global
System for Mobile (GSM) modules. We can open the door using bluetooth
application from phone of the registered family members or personnel and also
by using 4 digit message that can be used by a person who are in contact to the
registered family members/ personnel. If any person wants to open the door
other than registered family members, they can press “EMERGENCY
BUTTON” and get the One Time Password(OTP) that is generated to the
registered members. We have got satisfactory experimental results and
promising analysis in the mentioned two modules.

## INTRODUCTION
Today it is essential to provide security systems employing various sensors
and alarm system in residential communities. Security is one of the biggest
challenges everywhere since thefts are increasing day by day owing to the
unsafe and insecure security systems in homes, commercial complexes and
industries. Several conventional technologies are available to keep home
properties safe from intruders, but most common smart home security systems
work on wireless GSM communication.
A home security system with the GSM technology achieves control of door
lock by short message service (SMS). PIC is the microcontroller which
controls the whole driver unit. Keypad, GSM module, LED display, relays are
connected. GSM system allows the person with unregistered personnel open
the door after entering the OTP which is sent to the any one of the registered
users. The Keypad module is used for entering the 4-digit password by the
unregistered personnel.

## GOALS AND OBJECTIVES
In today’s age of digital technology and intelligent systems, automation has
become one of the fastest developing application - based technologies in the
world. In this Mini-Project our goal is to understand the basic concepts and
implementing the concepts involving in the GSM and BLUETOOTH based
locking systems.

## EXISTING SYSTEM :
The existing systems include biometric systems, facial recognition(by
users) system etc. But the issue with such systems include the misuse and
procurement of the key features by thiefs such. Our aim is to provide some
added security to the users.

## PROPOSED SYSTEM
The aim of the project is to open the door using BLUETOOTH application
of the registered users. If any other person wants to open the door in case of an
emergency, they need to press the “ENERGENCY BUTTON” on the keypad,
which prompts the GSM to send an OTP to the any one of the registered users
and when they get that OTP, the door can be opened.

## BLOCK DIAGRAM 

![image](https://user-images.githubusercontent.com/99087988/154847505-0b90e7ee-1c55-4941-90dc-49cd1c53b3cd.png)


# HARDWARE REQUIREMENTS

##  MICROCONTROLLERS
Microcontroller is a general purpose device, which integrates a number of
the components of a microprocessor system on to single chip. It has inbuilt
CPU, memory and peripherals to make it as a mini computer. A
microcontroller combines on to the same microchip: The CPU core,
Memory(both ROM and RAM), some parallel digital i/o. Microcontrollers are
smaller in size, consumes less power, inexpensive.

## INTRODUCTION TO PIC :
The microcontroller that has been used for this project is from PIC series.
PIC microcontroller is the first RISC based microcontroller fabricated in
CMOS (complimentary metal oxide semiconductor) that uses separate bus for
instruction and data allowing simultaneous access of program and data
memory.

## PIC 16F877 
PIC 16F877 is one of the most advanced microcontroller from Microchip.
This controller is widely used for experimental and modern applications
because of its low price, wide range of applications, high quality, and ease of
availability. It is ideal for applications such as machine control applications,
measurement devices, study purpose, and so on. The PIC 16F877 features all
the components which modern microcontrollers normally have. Refer to figure
One of the main advantages is that it can be write-erase as many times as
possible because it uses flash memory technology.

PIC16f877a finds its applications in a huge number of devices. It is used in
remote sensors, security and safety devices, home automation and many
industrial instruments. An EEPROM is also featured in it which makes it
possible to store some of the information permanently like transmitter codes
and receiver frequencies and some other related data. The cost of this
controller is low and its handling is also easy. It is flexible and can be used in
areas where microcontrollers have never been used before as in
microprocessor applications and timer functions etc.

## BLUETOOTH-HC-05
HC-05 module is an easy to use Bluetooth SPP (Serial Port Protocol)
module, designed for transparent wireless serial connection setup. It is used for
many applications like wireless headset, game controllers, wireless mouse,
wireless keyboard and many more consumer applications. It has range up to
<100m which depends upon transmitter and receiver, atmosphere, geographic
& urban conditions.
HC-05 is a Bluetooth module which is designed for wireless comunication.
This module can be used in a master or slave configuration. It has 6 pins
namely: Key/EN, Data mode, Command mode, VCC, GND, TXD, RXD,
State. Refer to figure 3.2. To communicate smartphone with HC-05 Bluetooth
module, smartphone requires Bluetooth terminal application for transmitting
and receiving data.

## SIM 800(GSM MODULE) 
GSM is a mobile communication modem; it is stands for global system for
mobile communication (GSM). The idea of GSM was developed at Bell
Laboratories in 1970. It is widely used mobile communication system in the
world. GSM is an open and digital cellular technology used for transmitting
mobile voice and data services operates at the 850MHz, 900MHz, 1800MHz
and 1900MHz frequency bands.SIM800 is a quad-band GSM/GPRS module
that works on frequencies 850MHz GSM, 900MHz EGSM, 1800MHz DCS,
and 1900MHz PCS. It can be used to transmit voice, SMS and data
information with low power.

##  RELAY 
A relay is an electrically operated switch. It consists of a set of input
terminals for a single or multiple control signals, and a set of operating contact
terminals. The switch may have any number of contacts in multiple contact
forms, such as make contacts, break contacts, or combinations thereof. Low
power devices such as microprocessors can drive relays to control electrical
loads beyond their direct drive capability. Since relays are switches, the
terminology applied to switches is also applied to relays; a relay switches one
or more poles, each of whose contacts can be thrown by energizing the coil.
Normally open (NO) contacts connect the circuit when the relay is activated;
the circuit is disconnected when the relay is inactive. Normally closed (NC)
contacts disconnect the circuit when the relay is activated; the circuit is
connected when the relay is inactive. All of the contact forms involve
combinations of NO and NC connections.

## DC MOTOR 
A dc motor with forward and reverse motion is used for the opening and
closing operation of the lock respectively. The motor is supplied with a voltage
of 12 volts.

## POWER SUPPLY 
A power supply of 12 volts 5 ampere is given which is used to supply
voltage to the PIC microcontroller, the GSM module and the keypad.
All of the power supplies we sell are 12V DC. They take any input from 100V
up to 220V AC, which is what comes out of your wall socket, and output 12V
DC. This is what most digital devices such as LCD screens, DVD players,
Hard Drives, Audio Gear, and most other digital devices use.

## LCD SCREEN
LCD (Liquid Crystal Display) is a type of flat panel display which uses
liquid crystals in its primary form of operation. LEDs have a large and varying
set of use cases for consumers and businesses, as they can be commonly found
in smartphones, televisions, computer monitors and instrument panels. Refer to
figure 3.7. Here, the LCD screen is used to display the code entered and also
shows if the door is unlocked or otherwise.

## KEYPAD 
A keypad is used to enter the digits of the code in case of emergency
situations mentioned above wherein the person gets the OTP from the
registered members. Refer to figure 3.8. This concludes the introduction to the
key components used in the completion of the project.

## ADVANTAGES 
•By using this project wireless controls can be within the hands of
the user. It’s secure.. Simple and easy to access
•It’s pick proof. We can add all our family members phone numbers.
## DISADVANTAGES :
•Bluetooth is used in this home automation system, which have a rage
10 to 20 meters so the control cannot be achieved from outside this
range.
•Application is connected after disconnect of the Bluetooth.
•When the new users want to connect the first download
application software then the code and configuration must bedone

## APPLICATIONS 
•The proposed system as a wide range of applications, some of them
are as follows:
•Home security.Used in garage doors gates.
•Faster operation and efficient and Easy for differently abled person
and elderly people to access.Can be used in offices
•Can be used to secure industrial plants against intruders and can
be installed at any place where remote access isrequired.

##  CONCLUSION
In today’s technologically advanced world, autonomous systems are
gaining rapid popularity so the advancement in latest technology is
continuously and rapidly made on different latest automatic door lock security
systems. The need for an advanced door lock security systems using new
technologies is increases day by day as security become a very important or
serious issue for everybody. Due to the recent trends in various methods of
security for home, buildings, companies‟ vehicles etc, there is no need to
worry about this security any longer, as automatic security systems are here to
deal with it.The door lock system using GSM module was implemented
successfully. The design can be used for security based systems and
procedures. It is a safe and secure system. The system can be used in
residential and commercial development. The following improvements can be
suggested for further improvements of system:-
1) Face recognition
2) Designing based on the individual need
3) Integrating with thumb impression
4) Integrating with CCTV network

## FUTURE SCOPE
As we have discussed, the first thing is to combining all the related
systems to make an overall system which could work with high efficiency and
might perform several task such as Prevention of entry of unauthorized person
in the house, letting the owner know about any mis-happenings going on in the
house in the absence of the owner. We could use the GSM Module to let the
owner stay connected with the house and to control the system from any
location outside the house. Forthcoming system should also be capable enough
to recognize the owner and must be connected to the various government
department for the emergency case.

## REFERENCES
[1] C. A. Jose, R. Malekian, “Smart home automation security: A literature
review”, Smart Computing Review, Vol. 5, No. 4, Pp. 269-285,2015.
[2] S. B. Priya, R. Geethamani, “Design and implementation of home
automation using power electronic switches”, International Journal of
Advanced Information and Communication Technology, Vol. 2, Issue 12, Pp.
1127-1129, 2016.
[3] D. Javale, M. Mohsin, S. Nandanwar, M. Shingate, “Home automation and
security system using android adk”, International Journal of Electronics
Communication and Computer Technology, Vol. 3, Issue 2, Pp. 382-385,
2013.
[4] S. Palaniappan, N. Hariharan, T. N. Kesh, S. Vidhyalakshmi, Angel, S.
Deborah, “Home automation system- A study”, International Journal of
Computer Applications, Vol.116, No. 11, Pp. 11-18,2015.



