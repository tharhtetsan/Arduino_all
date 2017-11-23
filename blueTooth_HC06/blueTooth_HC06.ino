#include <SoftwareSerial.h> 
#define led1 13
#define led2 12
#define led3 11
#define led4 10
SoftwareSerial BT(0,1); 
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);

  
  BT.begin(9600);
  BT.println("Hello from Arduino");
  Serial.begin(9600);
}

char value;
void loop() {

  if (BT.available())
  {
    value=(BT.read());
    Serial.print("  >>>>");
    Serial.println(value);

    if(value=='a')
    {
      digitalWrite(led1,HIGH);
     }
     if(value=='1')
     {
      digitalWrite(led1,LOW);
      }

   if(value=='b')
    {
      digitalWrite(led2,HIGH);
     }
     if(value=='2')
     {
      digitalWrite(led2,LOW);
      }

       if(value=='c')
    {
      digitalWrite(led3,HIGH);
     }
     if(value=='3')
     {
      digitalWrite(led3,LOW);
      }

       if(value=='d')
    {
      digitalWrite(led4,HIGH);
     }
     if(value=='4')
     {
      digitalWrite(led4,LOW);
      }


       if(value=='x')
    {
      digitalWrite(led1,HIGH);
      digitalWrite(led2,HIGH);
      digitalWrite(led3,HIGH);
      digitalWrite(led4,HIGH);
      
     }
     if(value=='z')
     {
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      digitalWrite(led4,LOW);

      
      }
    


      
    
  }
}
