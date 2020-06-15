void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  // moving the first motor with anticlockwise
  digitalWrite(2,1);
  digitalWrite(3,0);
  //moving the Second motor with anticlockwise
  digitalWrite(7,1);
  digitalWrite(6,0);
  
  delay(3000); // Wait for 3 seconds
  
  // moving the first motor with clockwise
  digitalWrite(3,1);
  digitalWrite(2,0);
  // moving the second motor with clockwise
  digitalWrite(6,1);
  digitalWrite(7,0);
  
  delay(3000); // Wait for 3 seconds
  
}