#ifndef __SMART_H_
#define __SMART_H_
#include<pic.h>
__CONFIG(0X3F31);
#include"Lcd4.h"
#include"serial.h"
#define setkey RB0
#define incrementkey RB1
#define decrementkey RB2
#define cursorkey RB3
#define enterkey RB4
#define motor1 RC0
#define motor2 RC1
unsigned int b[15];
unsigned int m=0,close=0;
unsigned int rec[15],val=0;
unsigned int s[]={1234,2345,3456,4567,5678,6789,7890,8901,9012,1111};
void mobile_keypad();
void otp_keypad();
void mobile_init();
void msg_send();
void Received();
int x1,x2,x3,x4,x5,x6,d=0;
#endif