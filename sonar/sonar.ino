int t=2;
int r=3;
int led1=10;
int led2=11;
//int led3=12;
int distance;
int duration;
void setup() {
  // put your setup code here, to run once:
  pinMode(t,OUTPUT);
  pinMode(r,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  //pinMode(led3,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(t,HIGH);
  ///delayMicroseconds(5);
  digitalWrite(t,LOW);

  duration=pulseIn(r,HIGH);
  distance=duration*0.034/2;
  if(distance>50)
  {
    Serial.println(distance);
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
  }
  if(distance<50)
  {
    Serial.println(distance);
    digitalWrite(led2,HIGH);
    digitalWrite(led1,LOW);
  }
  
}
