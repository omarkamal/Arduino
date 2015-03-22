int i;
int times;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);

}

void blinkNumberPin(int times, int pinNo) {

  if (Serial.available() > 0) {
    if (Serial.read() == 'a') {

      for (i = 0; i < times; i++) {
        digitalWrite(pinNo, HIGH);
        delay(100);
        digitalWrite(pinNo, LOW);
        delay(100);
      }
    }
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  blinkNumberPin(20,13);

}
