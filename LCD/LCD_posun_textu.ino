/*
 https://www.arduino.cc/en/Reference/LiquidCrystal 
 Library originally added 18 Apr 2008 by David A. Mellis
 library modified 5 Jul 2009 by Limor Fried (http://www.ladyada.net)
 example added 9 Jul 2009 by Tom Igoe modified 22 Nov 2010
 by Tom Igoe modified 7 Nov 2016 by Arturo Guadalupi
 This example code is in the public domain.
*/


#include <LiquidCrystal.h>
LiquidCrystal lcd(8,A4,2,3,4,7);
char text[40] = {"UKAZKA dlouheho textu"};
void setup()
{
 lcd.begin(16,2);
 lcd.print(text);
}
void loop()
{
 delay(400);
 lcd.scrollDisplayLeft();
}
