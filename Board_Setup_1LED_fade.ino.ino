// základní nastaveni RGB LED diody

const byte LEDB=9;
const byte LEDG=6;
const byte LEDR=5;


void setup() {
  // put your setup code here, to run once:
pinMode(LEDB, OUTPUT);      // set PIN LEDB as output
pinMode(LEDG, OUTPUT);      // set PIN LEDG as output
pinMode(LEDR, OUTPUT);      // set PIN LEDR as output

digitalWrite(LEDB, HIGH);     // LED BLUE OFF
digitalWrite(LEDR, HIGH);     // LED RED OFF
digitalWrite(LEDG, HIGH);     // LED GREN OFF


}

void loop() {
 // brighten up B
  for (int x = 255; x >= 0; x=x-3) {        // for (initialization; condition; increment); x=x-3 -> císlo určuje ryhlost pohasínání
    analogWrite(LEDB, x);                   // set intenzity 255 - 0
    delay(10);
  }
// fade B
  for (int x = 0; x <= 255; x=x+3) {       // x=x+3 -> císlo určuje ryhlost pohasínání        
    analogWrite(LEDB, x);                  // set intenzity 0 - 255 
    delay(10);
  }
}
