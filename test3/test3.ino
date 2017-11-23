int count=0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:x

  while(count<=255)
  {
    count++;
    analogWrite(10,count);
    Serial.print("1\t");
    Serial.println(count);
    }
  while(count!=0)
  {
    count--;
    analogWrite(10,count);
    
    Serial.print("2\t");
    Serial.println(count);
    }

  digitalWrite(13,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(11,LOW);
 // digitalWrite(10,LOW);
  digitalWrite(9,LOW);
  digitalWrite(8,LOW);
  digitalWrite(7,LOW);
  digitalWrite(6,LOW);
  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  digitalWrite(2,LOW);
  digitalWrite(1,LOW);
  delay(100);

  digitalWrite(13,LOW);
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(9,LOW);
  digitalWrite(8,LOW);
  digitalWrite(7,LOW);
  digitalWrite(6,LOW);
  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  digitalWrite(2,LOW);
  digitalWrite(1,LOW);
  delay(100);

  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(8,LOW);
  digitalWrite(7,LOW);
  digitalWrite(6,LOW);
  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  digitalWrite(2,LOW);
  digitalWrite(1,LOW);
  delay(100);

  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(7,LOW);
  digitalWrite(6,LOW);
  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  digitalWrite(2,LOW);
  digitalWrite(1,LOW);
  delay(100);

  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(6,LOW);
  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  digitalWrite(2,LOW);
  digitalWrite(1,LOW);
  delay(100);

  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
  digitalWrite(9,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  digitalWrite(2,LOW);
  digitalWrite(1,LOW);
  delay(100);

  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
  digitalWrite(9,LOW);
  digitalWrite(8,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  digitalWrite(2,LOW);
  digitalWrite(1,LOW);
  delay(100);

  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
  digitalWrite(9,LOW);
  digitalWrite(8,LOW);
  digitalWrite(7,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  digitalWrite(2,LOW);
  digitalWrite(1,LOW);
  delay(100);

  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
  digitalWrite(9,LOW);
  digitalWrite(8,LOW);
  digitalWrite(7,LOW);
  digitalWrite(6,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(2,LOW);
  digitalWrite(1,LOW);
  delay(100);

  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
  digitalWrite(9,LOW);
  digitalWrite(8,LOW);
  digitalWrite(7,LOW);
  digitalWrite(6,LOW);
  digitalWrite(5,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(1,LOW);
  delay(100);

  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
  digitalWrite(9,LOW);
  digitalWrite(8,LOW);
  digitalWrite(7,LOW);
  digitalWrite(6,LOW);
  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  digitalWrite(2,HIGH);
  digitalWrite(1,HIGH);
  delay(100);

  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
  digitalWrite(9,LOW);
  digitalWrite(8,LOW);
  digitalWrite(7,LOW);
  digitalWrite(6,LOW);
  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  digitalWrite(2,HIGH);
  digitalWrite(1,HIGH);
  delay(100);


    
}
