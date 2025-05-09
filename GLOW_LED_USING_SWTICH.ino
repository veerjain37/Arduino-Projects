// GLOWING LED USING SWTICH AND USE OF 'digitalREAD'
int button_pin=6;
int led_pin=13;
void setup()
{
  pinMode(led_pin,OUTPUT);
  pinMode(button_pin,INPUT);
}

void loop()
{
  bool s=digitalRead(button_pin);
  if(s==1)
  {
    digitalWrite(led_pin,HIGH);
    delay(100);
  }
  else
  {digitalWrite(led_pin,LOW);
  }
 
}