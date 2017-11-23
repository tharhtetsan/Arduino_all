#define input1 A0
#define input2 A1
#define input3 A2

void setup() {
  // put your setup code here, to run once:
pinMode(input1,OUTPUT);
pinMode(input2,INPUT);
pinMode(input3,INPUT);

Serial.begin(9600);

}

int value=0;
boolean isOn=false;
boolean isOn1=false;
void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(input1,HIGH);
boolean isOn=digitalRead(input2);
boolean isOn1=digitalRead(input3);


if(Serial.available()>0)
{
  int command1=0;
  int command2=0;
  int command3=0;
  
   command1=Serial.read();
   command2=Serial.read();
   command3=Serial.read();
  Serial.print((char)command1);
  Serial.print("   ");
  Serial.print((char)command2);
  Serial.print("   ");
  Serial.print((char)command3);
  Serial.println("   ");

  char w=((char)command1);
  Serial.println(w);
  
  delay(1000);
  }
    if(isOn)
    {
      value++;
    }
    if(isOn1)
    {
      value--;
    }
    isOn=false;
    isOn1=false;
if(value>=999||value<0)
value=0;

delay(200);
Serial.println(value);
}
