// servo motor basic program with 0 to 180 degree and 180 to zero

#include<Servo.h> 
Servo s1;
void setup() {
  // put your setup code here, to run once:
  s1.attach(9);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<180;i++)
  {
    s1.write(i);
    delay(50);
  }
  for(int i=180;i>=0;i--)
  { s1.write(i);
   delay(50);
  }
}
