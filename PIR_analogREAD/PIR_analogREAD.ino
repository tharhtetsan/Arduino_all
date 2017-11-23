int ledPin = 13;
int inputPin = 2; 
int pirState = LOW; 
int val = 0; 

void setup() {
pinMode(ledPin, OUTPUT); 
pinMode(inputPin, INPUT); 

Serial.begin(9600);
}

void loop(){
          val = digitalRead(inputPin); 
          Serial.println(val);
}

