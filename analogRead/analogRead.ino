#define led 10
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {

  int value=analogRead(A0);
  Serial.println(value);
  int newValue=value/5;
  analogWrite(led,newValue);
}
