
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13,OUTPUT);
}
int value;
void loop() {
  // put your main code here, to run repeatedly:
  
    value=analogRead(A0);
    Serial.print("voltage: ");
    Serial.println(value);

    if(value>100)
    {
      digitalWrite(13,LOW);
    }
    if(value<100)
    {
      digitalWrite(13,HIGH);
    }
  
}
