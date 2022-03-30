#include <LedControlBDOM.h>
LedControl lc = LedControl(11,13,12,0);

const int buttonPin = A1;     // the number of the pushbutton pin
const int ledPin =  6;    
int buttonState = 0; 


void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  lc.shutdown(0,0);
  lc.setIntensity(0,15);
}

void loop() {
  
  buttonState = digitalRead(buttonPin);

if (buttonState == HIGH) {
    digitalWrite(ledPin, LOW);
    lc.setRow(0,0,B00000000);
    lc.setRow(0,1,B01111100);
    lc.setRow(0,2,B00000000);
    lc.setRow(0,3,B01111100);
    lc.setRow(0,4,B00000000);
    lc.setRow(0,5,B01111100);
    lc.setRow(0,6,B00000000);
    lc.setRow(0,7,B01111100);
  } else {
    // turn LED off:
    digitalWrite(ledPin, HIGH);
    lc.setRow(0,0,B01111100);
    lc.setRow(0,1,B00000000);
    lc.setRow(0,2,B01111100);
    lc.setRow(0,3,B00000000);
    lc.setRow(0,4,B01111100);
    lc.setRow(0,5,B00000000);
    lc.setRow(0,6,B01111100);
    lc.setRow(0,7,B00000000);
  }

}
