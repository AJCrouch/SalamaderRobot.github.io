/*
     Servo Motor Control using the Arduino Servo Library
           by Dejan, https://howtomechatronics.com
*/

#include <Servo.h>

Servo myservo1;  // create servo object to control a servo
Servo myservo2;  // create servo object to control a servo
Servo myservo3;  // create servo object to control a servo
Servo myservo4;  // create servo object to control a servo

void setup() {
  myservo1.attach(9,600,2300);  // (pin, min, max)
  myservo2.attach(10,600,2300);  // (pin, min, max)
  myservo3.attach(11,600,2300);  // (pin, min, max)
  myservo4.attach(12,600,2300);  // (pin, min, max)
}

void loop() {
//green body
  myservo1.write(60);  // tell servo to go to a particular angle
  myservo2.write(90);
  myservo3.write(180);
  myservo4.write(0);
  delay(500);
  
  myservo1.write(120);
  myservo2.write(150);  // tell servo to go to a particular angle
  
  myservo3.write(0);  
  myservo4.write(18 m0);              
  delay(500); 

//yellow body
  //myservo2.write(150);  // tell servo to go to a particular angle
  //delay(1000);
  
  //myservo2.write(90);              
  //delay(1000); 

//middle
  //myservo3.write(150);  // tell servo to go to a particular angle
  //delay(1000);
  
  //myservo3.write(90);              
  //delay(1000); 
                    
}
