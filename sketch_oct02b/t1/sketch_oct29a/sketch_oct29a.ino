const unsigned int LED=A0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(LED,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

Serial.println(analogRead(LED)/10);
delay(100);

}
