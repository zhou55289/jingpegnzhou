#include <Morse.h>
Morse morse(13);

int incomingByte = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int a;
  if(Serial.available()>0)
  {
    incomingByte = Serial.read();
    a= incomingByte-96;
    switch(a)
    {
      case 1:morse.dot();morse.dash();break;//a
      case 2:morse.dash();morse.dot();morse.dot();morse.dot();break;//b
      case 3:morse.dash();morse.dot();morse.dash();morse.dot();break;//c
      case 4:morse.dash();morse.dot();morse.dot();break;//d
      case 5:morse.dot();break;//e
      case 6:morse.dot();morse.dot();morse.dash();morse.dot();break;//f
      case 7:morse.dash();morse.dash();morse.dot();break;//g
      case 8:morse.dot();morse.dot();morse.dot();morse.dot();break;//h
      case 9:morse.dot();morse.dot();break;//i
      case 10:morse.dot();morse.dash();morse.dash();morse.dash();break;//j
      case 11:morse.dash();morse.dot();morse.dash();break;//k
      case 12:morse.dot();morse.dash();morse.dot();morse.dot();break;//l
      case 13:morse.dash();morse.dash();break;//m
      case 14:morse.dash();morse.dot();break;//n
      case 15:morse.dash();morse.dash();morse.dash();break;//o
      case 16:morse.dot();morse.dash();morse.dash();morse.dot();break;//p
      case 17:morse.dash();morse.dash();morse.dot();morse.dash();break;//q
      case 18:morse.dot();morse.dash();morse.dot();break;//r
      case 19:morse.dot();morse.dot();morse.dot();break;//s
      case 20:morse.dash();break;//t
      case 21:morse.dot();morse.dot();morse.dash();break;//u
      case 22:morse.dot();morse.dot();morse.dot();morse.dash();break;//v
      case 23:morse.dot();morse.dash();morse.dash();break;//w
      case 24:morse.dash();morse.dot();morse.dot();morse.dash();break;//x
      case 25:morse.dash();morse.dot();morse.dash();morse.dash();break;//y
      case 26:morse.dash();morse.dash();morse.dot();morse.dot();;break;//z
      case -64:morse.c_space();break;//enter
      case -86:morse.w_space();break;//space
     }
    Serial.print("I received: ");
    Serial.println(incomingByte,DEC);
    }
  }
