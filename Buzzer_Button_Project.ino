int buzzerPin = 5;
int buttonPin = 4;
void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);

}

void loop() {
  int state = digitalRead(buttonPin);
  if (state == 0){
    digitalWrite(buzzerPin, HIGH);
  }
  else{
    digitalWrite(buzzerPin, LOW);
  }
 
}
