int pinD11 = 11;
int pinA0 = A0;

void setup()
{
  // PWM output 
  pinMode(pinD11, OUTPUT);
  // serial baud rate 9600
  Serial.begin(9600);
}


void loop()
{
  static int cmd_mem = 0;
  int cmd = analogRead(pinA0); // read resistor  
  
  
  Serial.println(cmd); // display command
  
  // saturation
  if( cmd <= 0 )
  {
    cmd = 0 ; 
  }
  else if (cmd >= 250)
  {
    cmd = 250;
  } 

  int del_cmd = cmd - cmd_mem;

  Serial.println(cmd); // display command
  

  // cmd rate limit +-5/step,   
  if(del_cmd >= 2) 
  {
    cmd = cmd_mem + 2;
  }
  else if (del_cmd <= -2)
  {
    cmd = cmd_mem - 2;
  } 
  cmd_mem = cmd ; // refresh command memory to cmd

  Serial.println(cmd); // display command
  

  analogWrite(pinD11, cmd); // PWM 

  delay (20); // pwm delay for 5 ms

  
}
