// C++ code
//
#include<Servo.h>
Servo Myservo;
Servo Myservo1;
Servo Myservo2;
Servo Myservo3;
Servo Myservo4;
int pos;

void setup()
{
  
  
Myservo.attach(8);
Myservo1.attach(9);
Myservo2.attach(10);
Myservo3.attach(11);
Myservo4.attach(12);
}

void loop() 
{
  
  for(pos=0;pos<=90;pos++){
Myservo.write(pos);
Myservo1.write(pos);
Myservo2.write(pos);
Myservo3.write(pos);
Myservo4.write(pos);
    delay(15); 
  }
  delay(1000);
  
  for(pos=90;pos>=0;pos--){
    Myservo.write(pos);
Myservo1.write(pos);
Myservo2.write(pos);
Myservo3.write(pos);
Myservo4.write(pos);
    delay(15);
  }
  delay(1000); 
}