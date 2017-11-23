#define input 13
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

int count=0;
void loop() {

  int value=digitalRead(13);
 

  if(value==1)
    {
      count++;
     }
      Serial.println(count);

    if(count==5)
    {
      analogWrite(11,205);
     delay(1000);
    count=0;
      }
      if(count==0)
      {
        digitalWrite(11,LOW);
        
        }

      
  delay(100);
}
