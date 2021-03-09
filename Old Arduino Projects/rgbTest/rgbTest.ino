//init pins
int red = 9;
int green = 10;
int blue = 11;
void setup() {
  pinMode(red, OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);

}

void loop() {
  analogWrite(red, 200);
  analogWrite(green, 200);
  analogWrite(blue, 200);
}
