
void setup() {
  // put your setup code here, to run once:
  int radius;
  float Area;
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Area(4);
Serial.print("Hello");Serial.print("\n");Serial.print("Audrino");
delay(1000);
digitalWrite(13,HIGH);
delay(1000);
digitalWrite(13,LOW);
}
void Area(int radi){
 float Area=3.142*radi*radi;
 Serial.print(Area);
  }


