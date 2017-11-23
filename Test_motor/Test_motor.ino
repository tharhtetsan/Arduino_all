#define enable1 3
#define enable2 9

#define o1 4
#define o2 5
//#define p1 6
//#define p2 7

void setup() {
  // put your setup code here, to run once:
pinMode(o1,OUTPUT);
pinMode(o2,OUTPUT);
pinMode(3,OUTPUT);

pinMode(p1,OUTPUT);
pinMode(p2,OUTPUT);

pinMode(enable1,OUTPUT);
pinMode(enable2,OUTPUT);

Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:


               Serial.println("start");

               if(Serial.ava>0)
               {
                
                 digitalWrite(o1,HIGH);
                  digitalWrite(o2,LOW);
                  Serial.println("Right");
                       analogWrite(enable1,255);
               }
  
}
      
      
   
       


