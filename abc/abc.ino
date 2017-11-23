
#define input 13
void setup() {
  // put your setup code here, to run once:

}
void loop() {
  // put your main code here, to run repeatedly:
  int value=analogRead(input);
  if(value==1)
  {
    digitalWrite(11,HIGH);
    value--;
  }
  if(value==0)
  {
    digitalWrite(11,LOW);
  }
}
