#include <WiFi.h>
#include <WiFiClient.h>
#include <WiFiServer.h>
#include <WiFiUdp.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.print("hello");Serial.print("\t");Serial.print("world");Serial.print("\n");
digitalWrite(13,HIGH);
delay(100);
digitalWrite(13,LOW);
delay(100);
}
