#define enable1 3
#define enable2 9

#define o1 4
#define o2 5
#define p1 6
#define p2 7

void setup() {
  // put your setup code here, to run once:
pinMode(o1,OUTPUT);
pinMode(o2,OUTPUT);
pinMode(p1,OUTPUT);
pinMode(p2,OUTPUT);

pinMode(enable1,OUTPUT);
pinMode(enable2,OUTPUT);

Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:


      if(Serial.available()>0)
      {
      int value=Serial.read();
      int pos=Serial.read();
      Serial.print(value);

          
                if(value==1)
                {
                
                     
                  
                  Serial.print("Enable 1 :");
                   Serial.print((char)value);
                   Serial.print((char)pos);
                   
                  if(pos=='l')
                  {
                  digitalWrite(o1,HIGH);
                  digitalWrite(o2,LOW);
                  Serial.println("Left");
                  }
                  else if(pos=='r')
                  {
                  digitalWrite(o1,LOW);
                  digitalWrite(o2,HIGH);
                  Serial.println("Right");
                  }
                  

                       analogWrite(enable1,255);
                      
                     
                }
               else 
                if(value=='2')
                {
                
                     
                    Serial.print("Enable 2 :");
                    if(pos=='l')
                    {
                    digitalWrite(p1,HIGH);
                    digitalWrite(p2,LOW);
                    Serial.println("Left");
                    }
                    else if(pos=='r')
                    {
                    digitalWrite(p1,LOW);
                    digitalWrite(p2,HIGH);
                    Serial.println("Right");
                    }

                 for(int i=0;i<255;i++)
                    {
                      Serial.println(i);
                     analogWrite(enable2,i);
                    
                     } 
     
                }
                
           

      }
}
      
      
   
       

