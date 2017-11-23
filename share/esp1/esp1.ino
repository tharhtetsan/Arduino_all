/*
 *  This sketch sends data via HTTP GET requests to data.sparkfun.com service.
 *
 *  You need to get streamId and privateKey at data.sparkfun.com and paste them
 *  below. Or just customize this script to talk to other HTTP servers.
 *
 */

#include <ESP8266WiFi.h>
#include <ESP8266WiFi.h>
#include <SoftwareSerial.h>

SoftwareSerial NodeSerial(D2,D3);//RX,TX

const char* ssid     = "u4445u";
const char* password = "tharhtethhk";
 String url1 = "/iot_getAction/1553206651376773";
 String Send_url="/iot_Send_Status/1553206651376773";
const char* host = "greeniot.herokuapp.com";
int status;
WiFiClient client;

int r1_pin=3;
int r2_pin=4;
int r3_pin=5;
int r4_pin=6;

String r1_status;
String r2_status;
String r3_status;
String r4_status;






void setup() {
  
  pinMode(D2,INPUT);
  pinMode(D3,OUTPUT);

  
  Serial.begin(115200);
  NodeSerial.begin(4800);


  
  status=0;
  delay(10);
  digitalWrite(2,0);
  // We start by connecting to a WiFi network

  Serial.println();
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);
  
  WiFi.begin(ssid, password);


  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi connected");  
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
}

int value = 0;

void loop() {
 String url1 = "/iot_getAction/1553206651376773";
 String Send_url="/iot_Send_Status/1553206651376773";
          delay(2000);
          ++value;
        
          Serial.print("connecting to ");
          Serial.println(host);
          
          // Use WiFiClient class to create TCP connections
          
          const int httpPort = 80;
          if (!client.connect(host, httpPort)) {
            Serial.println("connection failed");
            delay(3000);
            return;
          }
          
                                  // We now create a URI for the request
                                 
                                  Serial.print("Requesting URL: ");
                                  Serial.println(url1);
                                  
                                  // This will send the request to the server
                                  client.print(String("GET ") + url1 + " HTTP/1.1\r\n" +
                                               "Host: " + host + "\r\n" + 
                                               "Connection: close\r\n\r\n");
                                  unsigned long timeout = millis();
                                  while (client.available() == 0) {
                                    if (millis() - timeout > 2000) {
                                      Serial.println(">>> Client Timeout !");
                                      client.stop();
                                      return;
                                    }
                                  }
                                  
                                  // Read all the lines of the reply from server and print them to Serial
                                     String line;
                                  while(client.available()){
                                     line+= client.readStringUntil('\r');
                                    
                                      
                                    Serial.print(line);
                                  }
                                  
                                r1_status=line.substring(240,241);
                                r2_status=line.substring(242,243);
                                r3_status=line.substring(244,245);
                                r4_status=line.substring(246,247);
                               
                                Serial.println(r1_status);
                                Serial.println(r2_status);
                                Serial.println(r3_status);
                                Serial.println(r4_status);
                            
                                NodeSerial.print(r1_status);
                                NodeSerial.print(r2_status);
                                NodeSerial.print(r3_status);
                                NodeSerial.print(r4_status);
                                
                               Serial.println("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<Data Sendig>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<");
}                              
