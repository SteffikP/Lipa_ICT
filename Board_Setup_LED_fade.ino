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
  for (int x = 255; x >= 0; x--) {          // for (initialization; condition; increment)
    analogWrite(LEDB, x);                   // set intenzity 255 - 0
    delay(10);
  }
// fade B
  for (int x = 0; x <= 255; x++) {         
    analogWrite(LEDB, x);                  // set intenzity 0 - 255 
    delay(10);
  }

// brighten up G
  for (int x = 255; x >= 0; x--) {      
    analogWrite(LEDG, x);                   // set intenzity 255 - 0
    delay(10);
  }
// fade G
  for (int x = 0; x <= 255; x++) {         // for (initialization; condition; increment)
    analogWrite(LEDG, x);                  // set intenzity 0 - 255 
    delay(10);
  }

// brighten up R
  for (int x = 255; x >= 0; x--) {      
    analogWrite(LEDR, x);                   // set intenzity 255 - 0
    delay(10);
 }
// fade R
  for (int x = 0; x <= 255; x++) {         // for (initialization; condition; increment)
    analogWrite(LEDR, x);                  // set intenzity 0 - 255 
    delay(10);
  }


}
