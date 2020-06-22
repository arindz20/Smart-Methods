void setup()
{
  pinMode(7, OUTPUT);
}

void loop()
{

  digitalWrite(7,1);  // moving the motor with clockwise

  delay(3000); // Wait for 3 seconds
  
 
  digitalWrite(7,0);  // moving the motor with anticlockwise
  
  delay(3000); // Wait for 3 seconds
  
}