#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
int SCL_pin = D0;
int SDA_pin = D2;
void setup()
{
    Wire.begin(SCL_pin, SDA_pin);
    lcd.begin(16, 2);
    lcd.init();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("SISTEM TERTANAM");
    lcd.setCursor(0, 1);
    lcd.print("INFORMATIKA");
}

void loop()
{
}