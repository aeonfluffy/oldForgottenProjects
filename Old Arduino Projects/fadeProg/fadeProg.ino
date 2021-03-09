int led_01 = 6;
int led_02 = 9;
int fadeAmnt = 5;
int brightness = 0;

void setup() {
  // put your setup code here, to run once:
    pinMode(led_01, OUTPUT);
    pinMode(led_02, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    analogWrite(led_01, brightness);
    brightness = brightness + fadeAmnt;
    if(brightness <= 0 || brightness >= 255)
    {
      fadeAmnt = -fadeAmnt;
    }
    delay(30);
}
