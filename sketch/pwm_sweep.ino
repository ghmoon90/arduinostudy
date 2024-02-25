
int pinD11 = 11;                             

void setup()
{
pinMode(pinD11, OUTPUT);     
}


void loop()
{

  
  for(int i=10;i<=255;i=i+1)
  {

    analogWrite(pinD11,i);

    delay (5);

  }

  
  for(int i=255;i>=20;i=i-1)
  {

    analogWrite(pinD11,i);

    delay (5);

  }
}
