#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3f, 16, 2);

void setup(){
  lcd.begin();

  lcd.backlight();
  lcd.print("dhanush");
  
}