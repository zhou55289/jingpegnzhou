//f前进
//b后退 l左转 r右转 s停止


void setup()
{
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int income=0;
  if(Serial.available()>0)
  {
    income=Serial.read();
  }
  switch(income)
  {
    case'f':forword();break;
    case'b':backword();break;
    case'r':right();break;
    case'l':left();break;
    case's':stop();break;
  } 
}

void forword()
{
  digitalWrite(3,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(11,LOW);
}

void backword()
{
  digitalWrite(5,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(9,LOW);
}

void left()
{
  digitalWrite(3,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(9,LOW);
}

void right()
{
  digitalWrite(5,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(11,LOW);
}
void stop()
{
  digitalWrite(5,LOW);
  digitalWrite(3,LOW);
  digitalWrite(9,LOW);
  digitalWrite(11,LOW);
}
  