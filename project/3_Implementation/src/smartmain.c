#include"smart.h"
void main()
{
TRISB=0xFF;
TRISC=0x80;
TRISD=0x00;
PORTB=0xff;
PORTC=0xcf;
GIE=1;
PEIE=1;
motor1=1;motor2=1;
Lcd4_Init();
Lcd4_Display(0x80," AUTOMATIC DOOR ");
Lcd4_Display(0xc0," OPEN/CLOSE STM ");
Delay(65000);Delay(65000);Delay(65000);
20
Lcd4_Command(0x01);
Serial_Init(9600);
Receive(1);
Lcd4_Display(0x80," SELECT INPUT ");
Lcd4_Display(0xC0," 2ND KEY OR APP ");
while(1)
{
Received();
if(setkey == 0)
{
otp_keypad();
}
if(incrementkey==0)
{
while(incrementkey==0);
m++;
msg_send();
x1=s[m]/1000;
x5=s[m]%1000;
x2=x5/100;
x6=x5%100;
x3=x6/10;
x4=x6%10;
// Lcd4_Decimal1(0xc0,x1);Lcd4_Decimal1(0xc2,x2);
// Lcd4_Decimal1(0xc4,x3);Lcd4_Decimal1(0xc6,x4);
}
if(decrementkey==0 && d==1)
21
{
// Lcd4_Decimal1(0x80,b[0]);Lcd4_Decimal1(0x82,b[1]);
// Lcd4_Decimal1(0x84,b[2]);Lcd4_Decimal1(0x86,b[3]);
if(b[0]==x1 && b[1]==x2 && b[2]==x3 && b[3]==x4)
{
Lcd4_Display(0x80,"P.WORD OK ");
Lcd4_Display(0xC0,"DOOR OPENING ...");
motor1=0;motor2=1;
Delay(65000);Delay(65000);Delay(65000);
motor1=1;motor2=1;
close=1;
}
else
{
Lcd4_Display(0x80,"P.WORD NOT OK ");
motor1=1;motor2=1;
Delay(65000);Delay(65000);Delay(65000);
}
d=0;
Lcd4_Command(0x01);
m++;
}
if(cursorkey==0 && close==1)
{
Lcd4_Display(0xC0,"DOOR CLOSING....");
motor1=1;motor2=0;
22
Delay(65000);Delay(65000);Delay(65000);
motor1=1;motor2=1;
Lcd4_Command(0x01);
close=0;
}
}
}