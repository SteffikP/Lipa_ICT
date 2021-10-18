// základní nastaveni RGB LED diody

const byte LEDB=9;
const byte LEDG=6;
const byte LEDR=5;


void setup() {
  // put your setup code here, to run once:
pinMode(LEDB, OUTPUT);
pinMode(LEDR, OUTPUT);
pinMode(LEDG, OUTPUT);


// --- LED OFF
digitalWrite(LEDB, HIGH);
digitalWrite(LEDR, HIGH);
digitalWrite(LEDG, HIGH);
// --- LED OFF

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(LEDG, LOW);    // LED G ON
delay(300);
digitalWrite(LEDG, HIGH);
delay(300);
digitalWrite(LEDB, LOW);    // LED B ON
delay(300);
digitalWrite(LEDB, HIGH);
delay(300);
digitalWrite(LEDR, LOW);    // LED R ON
delay(300);
digitalWrite(LEDR, HIGH);
delay(300);

}
