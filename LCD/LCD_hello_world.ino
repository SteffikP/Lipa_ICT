/*
 https://www.arduino.cc/en/Reference/LiquidCrystal 
 Library originally added 18 Apr 2008 by David A. Mellis
 library modified 5 Jul 2009 by Limor Fried (http://www.ladyada.net)
 example added 9 Jul 2009 by Tom Igoe modified 22 Nov 2010
 by Tom Igoe modified 7 Nov 2016 by Arturo Guadalupi
 This example code is in the public domain.
 http://www.arduino.cc/en/Tutorial/LiquidCrystalHelloWorld
 The circuit: 
*/


#include <LiquidCrystal.h>  //Načtení knihovny
LiquidCrystal lcd(8,A4,2,3,4,7); // Definice kam je fyzicky displej připojen; PIN(rs, enable, d4, d5, d6, d7)
void setup()
{
 lcd.begin(16, 2); //Definice velikosti displeje
 lcd.print("Hello, world!"); //Zobrazený text
}
void loop()
{
}
