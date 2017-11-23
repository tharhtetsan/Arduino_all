#include <SoftwareSerial.h> 
SoftwareSerial BT(0,1); 

int led1 =8;
int led2 =9;
int led3 =10;
int led4 =11;

int l1=2;
int l2=3;
int l3=4;
int l4=5;



void setup() {
  // put your setup code here, to run once:
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(led4,OUTPUT);

pinMode(l1,OUTPUT);
pinMode(l2,OUTPUT);
pinMode(l3,OUTPUT);
pinMode(l4,OUTPUT);
  
  BT.begin(9600);
  BT.println("Hello from Arduino");
  Serial.begin(9600);
}

char value;
void loop() {
  // put your main code here, to run repeatedly:

  if(BT.available()>0)
  {
    value=BT.read();

    Serial.println(value);

    if(value=='f')
    {
      digitalWrite(led2,HIGH);
      digitalWrite(led3,HIGH);
      
      digitalWrite(led1,LOW);
      digitalWrite(led4,LOW);
      Serial.println("Forward");
     }

    if(value=='b')
    {

      Serial.println("Back");
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      
      digitalWrite(led1,HIGH);
      digitalWrite(led4,HIGH);
     }

    if(value=='r')
    {

      Serial.println("Back");
      digitalWrite(led2,HIGH);
      digitalWrite(led3,LOW);
      
      digitalWrite(led1,LOW);
      digitalWrite(led4,LOW);
     }

    if(value=='l')
    {

      Serial.println("Back");
      digitalWrite(led2,LOW);
      digitalWrite(led3,HIGH);
      
      digitalWrite(led1,LOW);
      digitalWrite(led4,LOW);
     }

      if(value=='x')
    {

      Serial.println("Stip");
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      
      digitalWrite(led1,LOW);
      digitalWrite(led4,LOW);
     }


     if(value=='z')
    {

      Serial.println("Stip");
      digitalWrite(l1,LOW);
      digitalWrite(l2,LOW);
      
      digitalWrite(l3,LOW);
      digitalWrite(l4,LOW);
     }

     if(value=='1')
     {
      digitalWrite(l1,HIGH);
      }

    if(value=='2')
     {
      digitalWrite(l2,HIGH);
      }
      if(value=='3')
     {
      digitalWrite(l3,HIGH);
      }
      if(value=='4')
     {
      digitalWrite(l4,HIGH);
      }
      
    
    }


    
}
