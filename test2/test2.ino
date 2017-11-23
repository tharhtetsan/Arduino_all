void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
int value=analogRead(A0);
///int newValue=value/5;
analogWrite(11,value);
}
