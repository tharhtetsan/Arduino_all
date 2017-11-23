#include
Servo servo_test;
int angle=0;
int potentio=A0;
void setup() {
 servo_test.attach(9);
}

void loop() {
 angle=analogRead(potentio);
 angle=map(angle,0,1023,0,17,9);
 servo_test.write(angle);
 delay(5);
}
