int trigPin = 11;
int echoPin = 12;
int ledPin = 4;
void setup() {
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
  digitalWrite(trigPin, LOW); // clean the trigPin
  Serial.begin(9600); 
}
void loop() {
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); // triger for 10 micro seconds
  digitalWrite(trigPin, LOW);
  long duration = pulseIn(echoPin, HIGH); // Read returns the sound wave travel time in microseconds
  int distance = duration * 0.034 / 2;   // Calculating the distance
  Serial.print("Distance: ");
  Serial.println(distance);
  if (distance < 20){
    digitalWrite(ledPin, HIGH);    
  }
  else{
    digitalWrite(ledPin, LOW);
  }
}