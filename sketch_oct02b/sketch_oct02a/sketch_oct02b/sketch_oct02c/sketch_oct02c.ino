void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13,OUTPUT);
}

void loop() {

  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  // put your main code here, to run repeatedly:
  delay(1000);
}
