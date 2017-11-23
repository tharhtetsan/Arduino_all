#include <SoftwareSerial.h>

SoftwareSerial mySerial(10, 11); // RX, TX

void setup() {
  // Open serial communications and wait for port to open:
      Serial.begin(115200);
      while (!Serial) 
      {
        ; // wait for serial port to connect. Needed for native USB port only
      }

  mySerial.begin(115200);
  mySerial.println("HI!");

}
  

void loop() {
  // put your main code here, to run repeatedly:
  void loop() { // run over and over
  if (mySerial.available()) {
    Serial.write("mySerial >>>>>"+mySerial.read());
  }
  if (Serial.available()) {
    mySerial.write("Serial >>>>>"+Serial.read());
  }
}


}
