byte rgb_Leds[] = {5, 6, 9};

int led_Delay;

byte potPin = A0;

void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i < 3; i++){
    pinMode(rgb_Leds[i], OUTPUT);
    digitalWrite(rgb_Leds[i], HIGH);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int x = 0; x < 3; x++){
    for (int m = 255; m > 0; m-=4){
      led_Delay = 5+analogRead(potPin)/32;
      analogWrite(rgb_Leds[x], m);
      delay(led_Delay);
    }
    for (int m = 0; m < 255; m+=4){
      led_Delay = 5+analogRead(potPin)/16;
      analogWrite(rgb_Leds[x], m);
      delay(led_Delay);
    }
  }
}
