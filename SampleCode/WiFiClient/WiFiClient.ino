/*
 *  This sketch sends data via HTTP GET requests to data.sparkfun.com service.
 *
 *  You need to get streamId and privateKey at data.sparkfun.com and paste them
 *  below. Or just customize this script to talk to other HTTP servers.
 *
 */

#include <ESP8266WiFi.h>

const char* ssid     = "u4445u";//WIfi name
const char* password = "tharhtethhk";//wifi password

const char* host = "goldenhussargroup.herokuapp.com";
int status;

void setup() {
  Serial.begin(115200);
  
  pinMode(2, OUTPUT);
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
  delay(5000);
  ++value;

  Serial.print("connecting to ");
  Serial.println(host);
  
  // Use WiFiClient class to create TCP connections
  WiFiClient client;
  const int httpPort = 80;
  if (!client.connect(host, httpPort)) {
    Serial.println("connection failed");
    return;
  }
  
  // We now create a URI for the request
  String url = "/lot/1581131301914791";//serial key form fb messager
  
  Serial.print("Requesting URL: ");
  Serial.println(url);
  
  // This will send the request to the server
  client.print(String("GET ") + url + " HTTP/1.1\r\n" +
               "Host: " + host + "\r\n" + 
               "Connection: close\r\n\r\n");
  unsigned long timeout = millis();
  while (client.available() == 0) {
    if (millis() - timeout > 5000) {
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
if(line.indexOf("\"1\"") > 0)
{
     digitalWrite(2,1);
    Serial.print("yes");
}
else
{
     digitalWrite(2,0);
    Serial.print("no");
 }


  
  Serial.println();
  Serial.println("closing connection");
}

