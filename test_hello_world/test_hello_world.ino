#include <Wire.h>
#include "rgb_lcd.h"

rgb_lcd lcd;

const int colorR = 112;
const int colorG = 128;
const int colorB = 144;

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);

  lcd.setRGB(colorR, colorG, colorB);
    
  // Print a message to the LCD.
  lcd.print("Hello World!");
}

void loop() {
  // put your main code here, to run repeatedly:

}
