#include <Servo.h>
Servo myservo;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
pinMode(9,OUTPUT);
pinMode(8,OUTPUT);
pinMode(7,OUTPUT);
pinMode(6,OUTPUT);
pinMode(5,OUTPUT);

pinMode(3,OUTPUT);

myservo.attach(4);


randomSeed(analogRead(0));
}

void loop() {
  // put your main code here, to run repeatedly:

int randomNumber=random(5,14);
Serial.print(randomNumber);
Serial.print("\n");

digitalWrite(randomNumber,HIGH);
delay(100);
digitalWrite(randomNumber,LOW);
delay(100);

digitalWrite(3,HIGH);
myservo.write(10);
delay(500);
myservo.write(80);
delay(500);
myservo.write(50);
delay(500);

}
