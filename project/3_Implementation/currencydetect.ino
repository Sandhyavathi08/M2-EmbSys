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
void interrupt receiver()
19
{
if(RCIF==1)
{
rec[val]=RCREG;
if(rec[0] == '*')
{
val++;
}
RCIF=0;
}
}
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
void otp_keypad()
{
Lcd4_Command(0x01);
Lcd4_Display(0x80,"ENT PASSWORD NO");
unsigned int val=0;
unsigned int i=0;
unsigned int a;
while(enterkey)
{
if(incrementkey==0)
{
while(incrementkey==0);
val++;
if(val>9)
{
val=0;
}
a=val%10;
b[i]=a;
Lcd4_Decimal1(0xc0+i,a);
}
23
if(decrementkey==0)
{
while(decrementkey==0);
val--;
if(val>3)
{
val=0;
}
a=val%10;
b[i]=a;
Lcd4_Decimal1(0xc0+i,a);
}
if(cursorkey==0)
{
while(cursorkey==0);
i++;
if(i>3)
{
i=0;
}
Lcd4_Command(0xc0+i);
}
}
Lcd4_Command(0x01);
Delay(1500);
for(i=0;i<=3;i++)
{
24
EEPROM_WRITE(i,b[i]);
Delay(500);
Lcd4_Decimal1(0x80+i,b[i]);
}
for(i=0;i<=3;i++)
{
b[i] =EEPROM_READ(i);
Lcd4_Decimal1(0xc0+i,b[i]);
Delay(500);
}
// d=1;
Lcd4_Command(0x01);
}
void Received()
{
if(val>2)
{
Receive(0);
if(rec[1]=='D')
{
if(rec[2]=='O')
{
Lcd4_Display(0xC0,"DOOR OPENING ...");
motor1=0;motor2=1;
Delay(65000);Delay(65000);Delay(65000);
motor1=1;motor2=1;
25
close=1;
Lcd4_Command(0x01);
}
}
if(rec[1]=='D')
{
if(rec[2]=='C')
{
Lcd4_Display(0xC0,"DOOR CLOSING....");
motor1=1;motor2=0;
Delay(65000);Delay(65000);Delay(65000);
motor1=1;motor2=1;
Lcd4_Command(0x01);
}
}
val=0;
Receive(1);
}
}
void mobile_init()
{
Lcd4_Display(0xc0,"INITZ.......... ");
Serial_Conout("AT");
Serial_Out(0x0d);
Serial_Out(0x0a);
Delay(65000);Delay(65000);
26
Serial_Conout("AT+CMGF=1"); //integer type value indicating in the text mode
Serial_Out(0x0d);
Serial_Out(0x0a);
Delay(65000);Delay(65000);
Serial_Conout("AT+CNMI=2,2,0,0,0"); //read message
Serial_Out(0x0d);
Serial_Out(0x0a);
Delay(65000);Delay(65000);
Lcd4_Command(0x01);
}
void msg_send()
{
d=1;
mobile_init();
unsigned int i=0;
Serial_Conout("AT+CMGS="); // send message
Serial_Out('"');
Lcd4_Command(0x01);
Lcd4_Display(0x80,"8300817450 ");
Lcd4_Display(0xc0,"MSG SENDING..... ");
Serial_Conout("8300817450");
Serial_Out('"');
27
Serial_Out(0x0d);
Serial_Out(0x0a);
Delay(65000);Delay(65000);
Serial_Conout("OTP PASSWORD \n\r");
Serial_Decimal4(s[m]);
Delay(65000); Delay(65000);
Serial_Out(0x1a); // CONTROL+Z
Delay(65000);Delay(65000);
Lcd4_Command(0x01);
}