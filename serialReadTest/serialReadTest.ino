char input;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0)
{
 input=Serial.read();
 if(input=='a'){
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW); 
 }
 else if(input=='b'){
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
 }
 else{
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
 }
  }
}
