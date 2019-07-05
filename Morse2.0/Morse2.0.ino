void setup()
{
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}

int incomingByte = 0;
int pin=13;
int delaytime=250;
void loop()
{
  int a;
  if(Serial.available()>0)
  {
    incomingByte = Serial.read();
    a= incomingByte-96;
    switch(a)
    {
      case 1:dot();dash();break;//a
      case 2:dash();dot();dot();dot();break;//b
      case 3:dash();dot();dash();dot();break;//c
      case 4:dash();dot();dot();break;//d
      case 5:dot();break;//e
      case 6:dot();dot();dash();dot();break;//f
      case 7:dash();dash();dot();break;//g
      case 8:dot();dot();dot();dot();break;//h
      case 9:dot();dot();break;//i
      case 10:dot();dash();dash();dash();break;//j
      case 11:dash();dot();dash();break;//k
      case 12:dot();dash();dot();dot();break;//l
      case 13:dash();dash();break;//m
      case 14:dash();dot();break;//n
      case 15:dash();dash();dash();break;//o
      case 16:dot();dash();dash();dot();break;//p
      case 17:dash();dash();dot();dash();break;//q
      case 18:dot();dash();dot();break;//r
      case 19:dot();dot();dot();break;//s
      case 20:dash();break;//t
      case 21:dot();dot();dash();break;//u
      case 22:dot();dot();dot();dash();break;//v
      case 23:dot();dash();dash();break;//w
      case 24:dash();dot();dot();dash();break;//x
      case 25:dash();dot();dash();dash();break;//y
      case 26:dash();dash();dot();dot();;break;//z
      case -64:c_space();break;//enter
      case -86:w_space();break;//space
     }
    Serial.print("I received: ");
    Serial.println(incomingByte,DEC);
    }
  }

  void dot()
{
  digitalWrite(pin,HIGH);
  delay(delaytime);
  digitalWrite(pin,LOW);
  delay(delaytime);
}

void dash()
{
  digitalWrite(pin,HIGH);
  delay(delaytime*4);
  digitalWrite(pin,LOW);
  delay(delaytime);
}

void c_space()
{
  digitalWrite(pin,LOW);
  delay(delaytime*3);
}

void w_space()
{
  digitalWrite(pin,LOW);
  delay(delaytime*7);
}
