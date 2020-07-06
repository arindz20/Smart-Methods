

#include <Servo.h>

int pos = 0;
int size=1;// we can put the input of the size sensor into this varible 
int deg=0;

Servo servo_9;
Servo servo_10;
Servo servo_11;

void setup()
{
  servo_9.attach(9);
  servo_10.attach(10);
  servo_11.attach(11);

}

void loop()
{
  while(1){
  if (size==1)
  { deg=40;
    servo_9.write(deg);
    servo_10.write(deg);
    servo_11.write(deg);
      
    delay(1000); 
  }
    if (size==2)
  { deg=90;
    servo_9.write(deg);
    servo_10.write(deg);
    servo_11.write(deg);
      
    delay(1000); 
  }
    if (size==3)
  { deg=150;
    servo_9.write(deg);
    servo_10.write(deg);
    servo_11.write(deg);
      
    delay(1000); 
  }
    
    size=size+1;
      if (size>3){size=1;}
  }
  
}