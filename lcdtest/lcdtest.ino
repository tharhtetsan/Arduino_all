#include<LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,5,6,7);
void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
lcd.setCursor(2,0);
lcd.print("Hello world");
lcd.setCursor(5,1);
lcd.write('L');
lcd.setCursor(6,1);
lcd.write(67);
lcd.setCursor(7,1);
lcd.write(0x44);

}
void loop() {
  // put your main code here, to run repeatedly:

}
