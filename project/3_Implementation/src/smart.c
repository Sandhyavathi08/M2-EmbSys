#include"smartmain.h"

void interrupt receiver()
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