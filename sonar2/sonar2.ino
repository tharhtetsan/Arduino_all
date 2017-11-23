// defines pins numbers
 int trigPin = 9;
int echoPin = 10;
// defines variables
long duration;
int distance;
int led1=13;
int led2=12;

void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
pinMode(led1, OUTPUT); // Sets the trigPin as an Output
  
pinMode(led2, OUTPUT); // Sets the trigPin as an Output
    
  Serial.begin(9600); // Starts the serial communication
}
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


      if(distance<20)
      {
        digitalWrite(led1,200);
        digitalWrite(led2,0);
        
        }

        if(distance>20)
        {
         digitalWrite(led2,200);
        digitalWrite(led1,0);
          }


      
}
