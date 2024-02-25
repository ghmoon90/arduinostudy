
int pinD11 = 11;                             

void setup()
{
  pinMode(pinD11, OUTPUT);  // pwm output on digital pin 11, duty resoultion 1/255, pulse duration 1/500 s
}


void loop()
{

  // upcount
  for(int i=10;i<=255;i=i+1)
  {

    analogWrite(pinD11,i);

    delay (5);

  }

  // down count
  for(int i=255;i>=20;i=i-1)
  {

    analogWrite(pinD11,i);

    delay (5);

  }
}
