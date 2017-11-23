void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}
char value;
void loop() {
  // put your main code here, to run repeatedly:

   if(Serial.available()>0)
   {
    
    value=Serial.read();
    Serial.println(value);
//    if(value=='1')
//      digitalWrite(13,HIGH);
//    else if(value=='4')
//      digitalWrite(13,LOW);
//
//    if(value=='2')
//      digitalWrite(12,HIGH);
//    else if(value=='4')
//      digitalWrite(12,LOW);
switch(value)
{
  case 'a':  digitalWrite(13,HIGH);break;
  case 'b': digitalWrite(13,LOW);break;
  case 'c': digitalWrite(12,HIGH);break;
  case 'd': digitalWrite(12,LOW);break;

}
    }


}
