
// program for builtin led blinking at adjustable intervals rranging from 1 to 10 
int l=LED_BUILTIN;
void setup() {
  // put your setup code here, to run once:
  pinMode(l,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
  for(int i=1;i<10;i++)
  {
    
    digitalWrite(l,HIGH);
    delay(50);
    digitalWrite(l,LOW);
    delay(1000*(i+1)-50);
    
  }

}
