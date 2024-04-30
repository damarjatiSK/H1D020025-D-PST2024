#include <Arduino.h>
#include <Servo.h>

Servo myservo;

void setup()
{
  myservo.attach(D4);
}

void loop()
{
  // Putar servomotor ke posisi 90 derajat
  myservo.write(0);

  for (int pos = 0; pos <= 180; pos += 180)
  {
    myservo.write(pos);
    delay(500);
  }

  for (int pos = 180; pos >= 0; pos -= 180)
  {
    myservo.write(pos);
    delay(0);
  }
}
