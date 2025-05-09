// IR sensor and LED

int IR_pin=7;
int LED_pin=6;
int s;

void setup() {
  // put your setup code here, to run once:
  pinMode(IR_pin,INPUT);
  pinMode(LED_pin,OUTPUT);

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  s=digitalRead(IR_pin);
  Serial.println(s);
  
  if(s==1)
  {
    digitalWrite(LED_pin,LOW);
   }
   else
   {
    digitalWrite(LED_pin,HIGH);
   }
}

