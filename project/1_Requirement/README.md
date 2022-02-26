# TITLE : SMART LOCK

## ABSTRACT
This report discusses the design and implementations of a door unlock compact system using the Bluetooth and GSM modules. These security systems enable to unlock the door using two different modes i.e. Bluetooth and Global System for Mobile (GSM) modules. We can open the door using bluetooth application from phone of the registered family members or personnel and also by using 4 digit message that can be used by a person who are in contact to the registered family members/ personnel. If any person wants to open the door other than registered family members, they can press “EMERGENCY BUTTON” and get the One Time Password(OTP) that is generated to the registered members. We have got satisfactory experimental results and promising analysis in the mentioned two modules.

## INTRODUCTION
Today it is essential to provide security systems employing various sensors and alarm system in residential communities. Security is one of the biggest challenges everywhere since thefts are increasing day by day owing to the unsafe and insecure security systems in homes, commercial complexes and industries. Several conventional technologies are available to keep home properties safe from intruders, but most common smart home security systems work on wireless GSM communication. A home security system with the GSM technology achieves control of door lock by short message service (SMS). PIC is the microcontroller which controls the whole driver unit. Keypad, GSM module, LED display, relays are connected. GSM system allows the person with unregistered personnel open the door after entering the OTP which is sent to the any one of the registered users. The Keypad module is used for entering the 4-digit password by the unregistered personnel.

# REQUIREMENTS
## HIGH LEVEL REQUIREMENTS
## HLR_ID  High level description
    HLR01   It shall have a DC Motor
    HLR02   It shall have a Bluetooth(HC_05) 
    HLR03   It shall have a keypad
    HLR04   It shall have a LCD Screen
      
   
## LOW LEVEL REQUIREMENTS
## LLR_ID        Low level description
    HLR01_LLR01   DC Motor for opening and closing the lock
    HLR02_LLR02   Bluetooth(HC_05) for transmitting and receiving the data
    HLR02_LLR03   Keypad is used to enter the digits
    HLR04_LLR04   LCD displays the code entered and shows if the door is unlocke
   

## ADVANTAGES
1. By using this project wireless controls can be within the hands of the user. 
2. It’s secure.. Simple and easy to access
3. It’s pick proof. We can add all our family members phone numbers.

## DISADVANTAGES :
•  Bluetooth is used in this home automation system, which have a rage 10 to 20 meters so the control cannot be achieved from outside this range. 
•  Application is connected after disconnect of the Bluetooth. 
•  When the new users want to connect the first download application software then the code and configuration must bedone

## APPLICATIONS
•  The proposed system as a wide range of applications, some of them are as follows: 
•  Home security.Used in garage doors gates. 
•  Faster operation and efficient and Easy for differently abled person and elderly people to access.Can be used in offices 
•  Can be used to secure industrial plants against intruders and can be installed at any place where remote access isrequired.
