#include<SoftwareSerial.h>
#include <Boards.h>
#include <Firmata.h>
#include <dht.h>

dht DHT;
dht DHT1;

int m1_pin=A0; //m1 pin for moisture
int m2_pin=A1;  //m2 pin for moisture
int h1_pin=8;     //h1 pin for humidity
int h2_pin=9;      //h2 pin for humidity

 int m1_value;
       int m2_value;
              
       int h1_temp;
       int h1_humidity;
       int h2_temp;
       int h2_humidity;
       int mAverage;




SoftwareSerial ArduinoSerial(3,2) ;//RX,TX
void setup() {
  Serial.begin(115200);
  ArduinoSerial.begin(4800);
 
       m1_value =0;
        m2_value=0;
              
        h1_temp=0;
        h1_humidity=0;
        h2_temp=0;
        h2_humidity=0;
           mAverage=0;

}

String   str="-";
  int ServerValue=0;
  float val=0.0;
  
void loop() {
  
         //moisture 1
                m1_value= analogRead(m1_pin);
                


              //moisture 1
                m2_value= analogRead(m2_pin);
                

                  mAverage=(m1_value+m2_value)/2;
                 delay(1000);
                 int chk = DHT.read11(h1_pin);
                h1_temp=DHT.temperature;
                h1_humidity=DHT.humidity;

                 delay(1000);
                 int chk1 = DHT1.read11(h2_pin);
                h2_temp=DHT1.temperature;
                h2_humidity=DHT1.humidity;

            Serial.println("<><><<>><><><><><><<><><><<<><>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<");
             
              Serial.print(mAverage);
              Serial.print("\t");
              Serial.print(h1_temp);
              Serial.print("\t");
              Serial.print(h1_humidity);
              Serial.print("\t");
              Serial.print(h2_temp);
              Serial.print("\t");
              Serial.println(h2_humidity);

             String  NodeStr1=String(h1_temp)+"1";
               String NodeStr2=String(h2_temp)+"2";
              String  NodeStr3=String(mAverage)+"3";
              String  NodeStr4=String(h1_humidity)+"4";
                String NodeStr5=String(h2_humidity)+"5";
              
                ArduinoSerial.println(NodeStr1);
                ArduinoSerial.println(NodeStr2);
                ArduinoSerial.println(NodeStr3);
                ArduinoSerial.println(NodeStr4);
                ArduinoSerial.println(NodeStr5);
                

}
