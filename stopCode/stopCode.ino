//char str[10];
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //9600 is the standard baud rate
  pinMode(A0,INPUT);
  pinMode(12,OUTPUT);    //port to output stuff

}

void loop() {
  // put your main code here, to run repeatedly:
  
  //str = Serial.read();
  if(Serial.available() > 0) {
    if(Serial.read() == 's'){ 
       if(Serial.read() == 't')
         if(Serial.read() == 'o')
           if(Serial.read() == 'p')
             digitalWrite(13,HIGH);
             delay(100);
             digitalWrite(13,LOW); 
    }
  }
  
}
