unsigned int UZV_ECHO = 10; // input pin ECHO
unsigned int UZV_TRIG = A5; // output pin TRIG
void setup()
{
Serial.begin(9600);
pinMode(UZV_ECHO, INPUT);
pinMode(UZV_TRIG, OUTPUT);
}
void loop()
{
unsigned int range = uzvMeasure();
Serial.print(range);
Serial.println(" cm");
delay(1000);
}
// funkce pro mereni vzdalenosti
unsigned int uzvMeasure()
{
digitalWrite(UZV_TRIG, HIGH); // trigovaci puls o delce 12 us
delayMicroseconds(12);
digitalWrite(UZV_TRIG, LOW);
// cekani na delku pulsu
return pulseIn(UZV_ECHO, HIGH)/58; // cm = us/58
}
