const int LED=13;

void setup() {
Serial.begin(9600);
pinMode(LED,OUTPUT);
}

void loop() {
  int sensorReading=analogRead(A0);
  Serial.println(sensorReading);
  if(sensorReading>800)
  {
    digitalWrite(LED,HIGH);
    
    }else
    {
      digitalWrite(LED,LOW);
      }delay(1000);
}
