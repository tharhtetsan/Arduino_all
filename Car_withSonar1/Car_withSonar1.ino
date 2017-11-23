// defines pins numbers
const int trigPin = 2;
const int echoPin = 3;



int led1 =8;
int led2 =9;
int led3 =10;
int led4 =11;


// defines variables
long duration;
int distance;
void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  Serial.begin(9600); // Starts the serial communication
}

char value;
void loop() {
      // Clears the trigPin
      digitalWrite(trigPin, LOW);
      delayMicroseconds(2);

      
      // Sets the trigPin on HIGH state for 10 micro seconds
      digitalWrite(trigPin, HIGH);
      delayMicroseconds(10);
      digitalWrite(trigPin, LOW);
      
      
      // Reads the echoPin, returns the sound wave travel time in microseconds
      duration = pulseIn(echoPin, HIGH);

      
      // Calculating the distance
      distance= duration*0.034/2;
      // Prints the distance on the Serial Monitor
      Serial.print("Distance: ");
      Serial.println(distance);



      if(distance>100)
       {
        value='f';
        }
      if(distance<50)
      {
         
          value='r';
       }
       if(distance<10)
      {
         
          value='b';
       }
       

  Serial.print("The value is ");
  Serial.println(value);
        
    if(value=='f')
    {
      digitalWrite(led2,HIGH);
      digitalWrite(led3,HIGH);
      
      digitalWrite(led1,LOW);
      digitalWrite(led4,LOW);
     
     }
      if(value=='r')
    {


      digitalWrite(led2,HIGH);
      digitalWrite(led3,LOW);
      
      digitalWrite(led1,LOW);
      digitalWrite(led4,LOW);
     }

    if(value=='b')
    {

          Serial.println("Back");
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      
      digitalWrite(led1,HIGH);
      digitalWrite(led4,HIGH);
     }
    

      
}
