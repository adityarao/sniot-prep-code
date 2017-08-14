/*
 *  servo.ino - @aditya_rao
 *  Servo testing module, if you have trouble with your Servos you can use this program
 *  This program is also to reset the servos back to ANGLE 0 before you screw in the arms
 */

#include <ESP8266WiFi.h>
#include <Servo.h>

Servo myservo;  // create servo object to control a servo

#define SERVOMOTOR D8

int angle = 0;

bool once = false; 

void setup()
{

  myservo.attach(SERVOMOTOR);

  myservo.write(angle);
}

 // Rotate the servo once 180 and rotate back 180.
void loop()
{
  int i; 

  if(!once) {
    for(i = 0; i <= 180; i++) {
      myservo.write(i);
      delay(10);
    }


    for(i = 180; i > 0; i--) {
      myservo.write(i);
      delay(10);
    }

    myservo.write(0);

  }

  once = true;

}