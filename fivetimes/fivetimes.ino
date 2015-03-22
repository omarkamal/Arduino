int i;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);

}

void blinkFive() {

  if (Serial.available() > 0) {
    if (Serial.read() == 'a') {

      for (i = 0; i < 5; i++) {
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
      }
    }
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  blinkFive();

}
