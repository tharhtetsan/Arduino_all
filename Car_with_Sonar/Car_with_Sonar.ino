#include <Servo.h> 
 
int servoPin = 7;
int echoPin=3;
int trigPin=2; 
Servo servo;  
 
int angle = 0;   // servo position in degrees 
 
void setup() 
{ 
 
  servo.attach(servoPin); 
    pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  Serial.begin(9600); // Starts the serial communication

} 
 
 int duration;
 int distance;
void loop()
{ 
  // scan from 0 to 180 degrees
 
  // now scan back from 180 to 0 degrees
  for(angle = 70; angle > -30; angle--)    
  {                                
    servo.write(angle);           
    delay(50);       
  }
   for(angle = -30; angle < 70; angle++)  
  {                                  
    servo.write(angle);               
    delay(50);                   
  }
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


    
} 
