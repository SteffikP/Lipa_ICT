#include <LedControlBDOM.h>
LedControl lc = LedControl(11,13,12,0);

unsigned int UZV_ECHO = 10; // input pin ECHO
unsigned int UZV_TRIG = A5; // output pin TRIG
unsigned int buf;
void setup()
{
lc.shutdown(0,0);
lc.setIntensity(0,15);
pinMode(UZV_ECHO, INPUT);
pinMode(UZV_TRIG, OUTPUT);
}
void loop()
{
unsigned int timeUs = uzvMeasure()/58; // cm = us/58
if(timeUs > buf)
writePlus();
else
writeMinus();
buf = timeUs;
delay(1000);
}

// funkce pro mereni vzdalenosti
unsigned int uzvMeasure()
{
digitalWrite(UZV_TRIG, HIGH); // trigovaci puls o delce 12 us
delayMicroseconds(12);
digitalWrite(UZV_TRIG, LOW);
// cekani na delku pulsu
return pulseIn(UZV_ECHO, HIGH);
}

void writePlus()
{
for(byte a=0; a<8; a++)
{
if(a > 2 && a < 5)
lc.setRow(0,a,0xFF);
else
lc.setRow(0,a,0x18);
}
}

void writeMinus()
{
lc.clearDisplay(0);
for(byte a=0; a<8; a++)
if(a > 2 && a < 5)
lc.setRow(0,a,0xFF);
}
