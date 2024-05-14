#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

int redLED = D2;
int yellowLED = D1;
int greenLED = D0;

void setup()
{
  // put setup code here, to run once:
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
  digitalWrite(redLED, HIGH);
  delay(1000);
  digitalWrite(redLED, LOW);
  digitalWrite(yellowLED, HIGH);
  delay(1000);
  digitalWrite(yellowLED, LOW);
  digitalWrite(greenLED, HIGH);
  delay(1000);
  digitalWrite(greenLED, LOW);
}

// put function definitions here:
int myFunction(int x, int y)
{
  return x + y;
}