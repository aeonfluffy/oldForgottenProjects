int potPin = 0;
int ledPin = 11;
int val = 0;
void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  val = analogRead(potPin);
  analogWrite(ledPin,val/4);
}
