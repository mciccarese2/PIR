int OUT_pin = 2;
int buzzer_pin = 11;

void setup() {
  pinMode(OUT_pin, INPUT); //Pin 2 as INPUT
  pinMode(buzzer_pin, OUTPUT); //PIN 11 as OUTPUT
}

void loop() {
  if (digitalRead(OUT_pin) == HIGH)
  {
    digitalWrite(buzzer_pin, HIGH); // turn the Buzzer ON
    delay(100); // wait for 100 milli second
    digitalWrite(buzzer_pin, LOW); // turn the Buzzer OFF
    delay(100); // wait for 100 milli second
  }
}
