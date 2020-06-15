

#include <Servo.h>

int deg = 0;

Servo servo_9;
Servo servo_8;

void setup()
{
  servo_9.attach(9);
  servo_8.attach(8);

}

void loop()
{
  // sweep the servo from 0 to 175 degree in steps of 1 degrees
  // then from 175 to 15 degrees 
  for (deg = 0; deg <= 175; deg += 1) {

    servo_9.write(deg);
    servo_8.write(deg);
   
  }
   delay(1000); // Wait for 1 second
  
  for (deg = 175; deg >= 15; deg -= 1) {
    servo_9.write(deg);
    servo_8.write(deg);
   
  }
   delay(1000); // Wait for 1 second
}