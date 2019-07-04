void setup()
{
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int income=0;
  int a;
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  delay(10);
  if(Serial.available()>0)
  {
    income=Serial.read();
    income=income-'0';
    digitalWrite(5,LOW);
    delay(10);
    if(income==0)
    {
      digitalWrite(6,LOW);
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
    }
    if(income==1)
    {
      digitalWrite(6,HIGH);
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
    }
    if(income==2)
    {
      digitalWrite(6,LOW);
      digitalWrite(2,HIGH);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
    }
    if(income==3)
    {
      digitalWrite(6,HIGH);
      digitalWrite(2,HIGH);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
    }
    if(income==4)
    {
      digitalWrite(6,LOW);
      digitalWrite(2,LOW);
      digitalWrite(3,HIGH);
      digitalWrite(4,LOW);
    }
    if(income==5)
    {
      digitalWrite(6,HIGH);
      digitalWrite(2,LOW);
      digitalWrite(3,HIGH);
      digitalWrite(4,LOW);
    }
    if(income==6)
    {
      digitalWrite(6,LOW);
      digitalWrite(2,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(4,LOW);
    }
    if(income==7)
    {
      digitalWrite(6,HIGH);
      digitalWrite(2,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(4,LOW);
    }
    if(income==8)
    {
      digitalWrite(6,LOW);
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      digitalWrite(4,HIGH);
    }
    if(income==9)
    {
      digitalWrite(6,HIGH);
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      digitalWrite(4,HIGH);
    }

     delay(10);
     digitalWrite(5,HIGH);
     delay(10);
  }
}