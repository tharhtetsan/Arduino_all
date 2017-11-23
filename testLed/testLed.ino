const int pin        = 2;
void setup() {
pinMode(pin, OUTPUT);
}

void loop() {
  
digitalWrite(pin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(pin, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);       

}
