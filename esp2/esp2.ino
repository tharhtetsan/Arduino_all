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

void loop() {
  // put your main code here, to run repeatedly:


  String url1 = "/iot_getAction/1553206651376773";
 String Send_url="/iot_Send_Status/1553206651376773";
        
         
          Serial.print("connecting to ");
          Serial.println(host);
          
          // Use WiFiClient class to create TCP connections
          
          const int httpPort = 80;
          if (!client.connect(host, httpPort)) {
            Serial.println("connection failed");
            delay(3000);
            return;
          }


                     delay(2000);
                    NodeSerial.print(0xA0);
                      NodeSerial.print("\n");
                      String   str="";
                      int ServerValue=0;
                      float val=0.0;

                      int count=0;
                      while(NodeSerial.available()>0 && count<6)
                      {
      
                        float val=NodeSerial.parseFloat();
                        String strTemp="";
                        if(NodeSerial.read()!='\n')
                        {
                            val=NodeSerial.parseFloat(); 
                           int  tempValue=(int)val;
                            strTemp=String(tempValue);
                          
                         
                            
                         }
                           str=strTemp+";"+str;
                          count++; 
                      }

                      /*
                       * String cut in each value
                       */
                    Serial.println(">>>>>>"+str);
                   
                    String names=str;
                      char test[65];
                        names.toCharArray(test,65);
                        char *strings[10];
                        char *ptr = NULL;
                   
                        String gg;
                          
                          //Serial.print(array);
                          byte index = 0;
                          ptr = strtok(test, ":;");  // takes a list of delimiters
                          while(ptr != NULL)
                          {
                              strings[index] = ptr;
                              index++;
                              ptr = strtok(NULL, ":;");  // takes a list of delimiters
                          }
                          //Serial.println(index);
                      // print the tokens
                          String Sorted_arr[5];
                    String Value="";

                    String charIndex="";
                    int Arr_index=0;
                        for(int n = 0; n < index; n++)
                       { 
                        Serial.print(strings[n]);
                        String temp=strings[n];
                          Value=temp.substring(0,temp.length()-1);
                          charIndex=temp.substring(temp.length()-1,temp.length());
                         
                         
                          if(charIndex=="1")
                              Arr_index=0;
                            else if(charIndex=="2")
                              Arr_index=1;
                            else if(charIndex=="3")
                              Arr_index=2;
                              else if(charIndex=="4")
                              Arr_index=3;
                              else 
                               Arr_index=4;
                    
                            
                             Sorted_arr[Arr_index]=Value;
                              Serial.println(Value);
                       }                         
                        
                          Serial.println("<><><><><><><><><><><><><><>>");

                          /*
                           * make send url
                           * 
                           */
                          Serial.print("Sending Data : "+index);
                           String tempStr="";
                          for(int n = 0; n < 5; n++)
                         {
                          if(Sorted_arr[n]=="")
                          { 
                              tempStr=tempStr+"/0";
                          }
                          else
                          {
                            tempStr=tempStr+"/"+Sorted_arr[n];
                            }
                         }
                         Send_url=Send_url+tempStr;
                            tempStr="";
                          Serial.println(Send_url);


                             
                  

                          // This will send data to the server
                          client.print(String("GET ") + Send_url + " HTTP/1.1\r\n" +
                                       "Host: " + host + "\r\n" + 
                                       "Connection: close\r\n\r\n");
                          unsigned long timeoutNew = millis();
                         
                          while (client.available() == 0) {
                            if (millis() - timeoutNew > 1000) {
                              Serial.println(">>> Client Timeout !");
                              client.stop();
                              return;
                            }
                          }
                          
                          // Read all the lines of the reply from server and print them to Serial
                             String lineNew;
                          while(client.available()){
                             lineNew+= client.readStringUntil('\r');
                             Serial.print(lineNew);
                          }
//
//
//  
                          Serial.println();
                          Serial.println("closing connection");

                          delay(2000);



                            
        


}
