//Pololu DRV8835 Dual Motor Driver Shield for Arduino
//https://www.pololu.com/product/2511 

#define MAsp 9              //rychlost A - PWM, 0 = off, 255 MAX.
#define MAdr 7              //směr A LOW/HIGH
#define MBsp 10             //rychlost B - PWM, 0 = off, 255 MAX.
#define MBdr 8              //směr B LOW/HIGH
int incomingByte = 0; // for incoming serial data


// the setup function runs once when you press reset or power the board
void setup() {
  
  pinMode(MAsp,OUTPUT);      //rychlost A - PWM
  pinMode(MAdr,OUTPUT);      //směr A
  pinMode(MBsp,OUTPUT);      //rychlost B - PWM
  pinMode(MBdr,OUTPUT);      //směr B
  
  Serial.begin(115200); // opens serial port, sets data rate to 115200 bps
  Serial.println("Motor M1 a M2");
  Serial.println("0 - STOP; 1 - M1 Vpravo; 2 - M1 Vlevo; 3 - M2 Vpravo; 4 - M2 Vlevo; 5 - M1 + M2 - vpřed");
  Serial.println("5 - M1 + M2 - vpřed; 6 - M1 + M2 - vzad");
  Serial.println(" ");


  // off
 digitalWrite(MAsp, LOW);
 digitalWrite(MAdr, LOW);
 digitalWrite(MBsp, LOW);
 digitalWrite(MBdr, LOW);

 

}

// the loop function runs over and over again forever
void loop() {

if (Serial.available() > 0) {
 char text = Serial.read();
 if (text == '0') {
  digitalWrite(MAsp, LOW);
  digitalWrite(MBsp, LOW);
  Serial.println("M1 a M2 STOP");
  delay(100);
 }
 if (text == '1') {
  digitalWrite(MAdr, LOW);
  analogWrite(MAsp,100);
  Serial.println("M1 Vpravo");

 }
 if (text == '2') {
  digitalWrite(MAdr, HIGH);
  analogWrite(MAsp,100);
  Serial.println("M1 Vlevo");
 }
 if (text == '3') {
  digitalWrite(MBdr, LOW);
  analogWrite(MBsp,100);
  Serial.println("M2 Vpravo");
 }
 if (text == '4') {
  digitalWrite(MBdr, HIGH);
  analogWrite(MBsp,100);
  Serial.println("M2 Vlevo");
 }
if (text == '5') {
  digitalWrite(MAdr, LOW);
  digitalWrite(MBdr, LOW);
  analogWrite(MBsp,100);
  Serial.println("Oba vpřed");
 }

if (text == '6') {
  digitalWrite(MAdr, HIGH);
  digitalWrite(MBdr, HIGH);
  analogWrite(MBsp,100);
  Serial.println("Oba vzad");
 }

}
 
}
