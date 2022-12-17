void setup() {
  pinMode(2, OUTPUT);
}

void loop() {
  digitalWrite(2, HIGH); // LED On
  delay(500);             // delay (1000 = 1s)
  digitalWrite(2, LOW);  // LED Off
  delay(500);             // delay

}
