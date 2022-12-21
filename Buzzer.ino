int buzzerPin = 5;
void setup() {
  pinMode(buzzerPin, OUTPUT);

}

void loop() {
  digitalWrite(buzzerPin, HIGH);
  delay(200);
  digitalWrite(buzzerPin, LOW);
  delay(200);

}
