/*
 * Created by ArduinoGetStarted.com
 *
 * This example code is in the public domain
 *
 * Tutorial page: https://arduinogetstarted.com/tutorials/arduino-rgb-led
 */

const int PIN_RED   = 5;
const int PIN_GREEN = 6;
const int PIN_BLUE  = 9;

void setup() {
  pinMode(PIN_RED,   OUTPUT);
  pinMode(PIN_GREEN, OUTPUT);
  pinMode(PIN_BLUE,  OUTPUT);
}

void setColor(char R, char G, char B) {
  analogWrite(PIN_RED,   (int) R);
  analogWrite(PIN_GREEN, (int) G);
  analogWrite(PIN_BLUE,  (int) B);
}

void loop() {

  static char ValR=0;
  static char ValG=0;
  static char ValB=0;

  ValR = ( ValR+10 )%256;
  if (ValR == 250)
  {ValG = ValR % 256;}

  if (ValG == 250)
  {ValB = ValG % 256;}

  setColor(ValR, ValG, ValB);
  delay(100);

}