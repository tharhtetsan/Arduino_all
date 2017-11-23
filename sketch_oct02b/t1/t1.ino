void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);

pinMode(0,OUTPUT);
pinMode(1,OUTPUT);
pinMode(2,OUTPUT);
pinMode(9,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
boolean input=digitalRead(9);

if(input){
  digitalWrite(2,HIGH);
delay(100);
digitalWrite(2,LOW);
delay(100);
digitalWrite(1,HIGH);
delay(100);
digitalWrite(1,LOW);
delay(100);
digitalWrite(0,HIGH);
delay(100);
digitalWrite(0,LOW);
  
}


digitalWrite(13,HIGH);
digitalWrite(12,HIGH);
digitalWrite(11,HIGH);
digitalWrite(10,HIGH);

}
