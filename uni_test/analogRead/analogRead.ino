
int btn=8;
int ledpin=9;
void setup() {
  // put your setup code here, to run once:
pinMode(btn,INPUT);
pinMode(ledpin,OUTPUT);

Serial.begin(9600);
}

void loop() {



int value=digitalWrite(btn);
Serial.println(value);



}
