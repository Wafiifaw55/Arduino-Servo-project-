
#include <Servo.h>

Servo Myservo;
Servo Myservo1;
Servo Myservo2;
Servo Myservo3;
Servo Myservo4;

const int kPinPot = A0;
const int kPinPot1 = A1;
const int kPinPot2 = A2;
const int kPinPot3 = A3;
const int kPinPot4 = A4;

const int kPinServo = 8;
const int kPinServo1 = 9;
const int kPinServo2 = 10;
const int kPinServo3 = 11;
const int kPinServo4 = 12;


 void setup()
 {
  Myservo.attach(kPinServo);
  Myservo1.attach(kPinServo1);
  Myservo2.attach(kPinServo2);
  Myservo3.attach(kPinServo3);
  Myservo4.attach(kPinServo4);
 }

 void loop()
 {
  
 {int valA = analogRead(kPinPot);
 valA = map(valA, 0, 1023, 0, 180);
 Myservo.write(valA);}

{int valB = analogRead(kPinPot1);
 valB = map(valB, 0, 1023, 0, 180);
 Myservo1.write(valB);}

{int valC = analogRead(kPinPot2);
 valC = map(valC, 0, 1023, 0, 180);
 Myservo2.write(valC);}

{int valD = analogRead(kPinPot3);
 valD = map(valD, 0, 1023, 0, 180);
 Myservo3.write(valD);}

{int valD = analogRead(kPinPot4);
 valD = map(valD, 0, 1023, 0, 180);
 Myservo4.write(valD);}

 delay(15);
 }
