#include <Boards.h>
#include <Firmata.h>

#include <dht.h>
dht DHT;

#define DHT11_PIN 7
#define LED1 12
void setup(){
  Serial.begin(9600);
  pinMode(LED1,OUTPUT);
}

void loop()
{
  int chk = DHT.read11(DHT11_PIN);
  Serial.print("Temperature = ");
  Serial.println(DHT.temperature);
  Serial.print("Humidity = ");
  Serial.println(DHT.humidity);
  
  int value1=DHT.temperature;
  Serial.println(value1);
  
  if(value1>30)
  {
       digitalWrite(LED1, LOW);
   
  }
  else
  {
   digitalWrite(LED1, HIGH);
  }
  delay(1000);
}

