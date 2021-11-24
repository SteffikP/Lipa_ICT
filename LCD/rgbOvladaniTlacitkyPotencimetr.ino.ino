#include <LiquidCrystal.h>

LiquidCrystal lcd(8,A4,2,3,4,7);
int SWR = A1;
int SWG = A2;
int SWB = A3;

int LEDR = 5;
int LEDG = 6;
int LEDB = 9;

int POT = A0;

byte value;
void setup()
{
  pinMode(SWR,INPUT);
  pinMode(SWG,INPUT);
  pinMode(SWB,INPUT);
  pinMode(LEDR, OUTPUT);
  pinMode(LEDG, OUTPUT);
  pinMode(LEDB, OUTPUT);
  analogWrite(LEDR, 128);
  analogWrite(LEDG, 128);
  analogWrite(LEDB, 128);
  lcd.begin(16,2);
  lcd.print("REGULACE BAREV");
  lcd.setCursor(0,1);
  lcd.print("R128 G128 B128");
}

void loop()
{
  value = analogRead(POT)/4;
  if(digitalRead(SWR))
  {
    analogWrite(LEDR, 255-value);
    lcd.setCursor(1,1);
    lcd.print("   ");
    lcd.setCursor(1,1);
    lcd.print(value);
  }
  if(digitalRead(SWG))
  {
    analogWrite(LEDG, 255-value);
    lcd.setCursor(6,1);
    lcd.print("   ");
    lcd.setCursor(6,1);
    lcd.print(value);
  }
  if(digitalRead(SWB))
  {
    analogWrite(LEDB, 255-value);
    lcd.setCursor(11,1);
    lcd.print("   ");
    lcd.setCursor(11,1);
    lcd.print(value);
  }
  delay(500);
}
