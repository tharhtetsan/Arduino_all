#include<SoftwareSerial.h>
#include <Boards.h>
#include <Firmata.h>
#include <dht.h>

dht DHT;

#define m1_pin  A0; //m1 pin for moisture
#define m2_pin=A1;  //m2 pin for moisture
#define h1_pin=6;     //h1 pin for humidity
#define h2_pin=7;      //h2 pin for humidity




int m1_value ;
int m2_value;

int h1_temp;
int h1_humidity;
int h2_temp;
int h2_humidity;



int r1_pin=4;
int r2_pin=5;
int r3_pin=6;
int r4_pin=7;

String r1_status;
String r2_status;
String r3_status;
String r4_status;



SoftwareSerial ArduinoSerial(3,2) ;//RX,TX
void setup() {
  Serial.begin(115200);
  ArduinoSerial.begin(4800);
 pinMode(r1_pin,OUTPUT);
 pinMode(r2_pin,OUTPUT);
 pinMode(r3_pin,OUTPUT);
 pinMode(r4_pin,OUTPUT);



 digitalWrite(r1_pin,HIGH);
 digitalWrite(r2_pin,HIGH);
 digitalWrite(r3_pin,HIGH);
 digitalWrite(r4_pin,HIGH);

 

}

String   str="-";
  int ServerValue=0;
  float val=0.0;
void loop() {


    while(ArduinoSerial.available()>0)
    {
       float val=ArduinoSerial.parseFloat();
        ServerValue=(int)val;
      str=(String)ServerValue;
      if(str.length() != 4)
      {
        if(str.length()==3)
          str="0"+str;
          if(str.length()==2)
          str="00"+str;
            if(str.length()==1)
          str="000"+str;
          if(str.length()==0)
          str="0000"+str;
            
        }    
        r1_status=str.substring(0,1);
        r2_status=str.substring(1,2);
        r3_status=str.substring(2,3);
        r4_status=str.substring(3,4);
        
     }
    Serial.println("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
Serial.println("act= "+r1_status);
Serial.println("act= "+r2_status);
Serial.println("act= "+r3_status);
Serial.println("act= "+r4_status);
Serial.println(ServerValue);


if(r1_status=="1")
{
   digitalWrite(r1_pin,LOW);
   }
  else{
    digitalWrite(r1_pin,HIGH);
    }

    
if(r2_status=="1")
{
  Serial.println("haha");
  digitalWrite(r2_pin,LOW);
  }
  else{
    digitalWrite(r2_pin,HIGH);
    }


if(r3_status=="1")
{
  Serial.println("haha");
  digitalWrite(r3_pin,LOW);
  }
  else{
    digitalWrite(r3_pin,HIGH);
    }


if(r4_status=="1")
{
  Serial.println("haha");
  digitalWrite(r4_pin,LOW);
  }
  else{
    digitalWrite(r4_pin,HIGH);
    }









  
  
      delay(500);
}
