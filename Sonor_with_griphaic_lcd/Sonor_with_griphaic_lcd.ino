#include <Adafruit_GFX.h>    // Core graphics library
#include <Adafruit_TFTLCD.h>
#include <NewPing.h>

#define TRIGGER_PIN  31  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_PIN     39  // Arduino pin tied to echo pin on the ultrasonic sensor.
#define MAX_DISTANCE 200 // Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.

#define LCD_CS A3 // Chip Select goes to Analog 3
#define LCD_CD A2 // Command/Data goes to Analog 2
#define LCD_WR A1 // LCD Write goes to Analog 1
#define LCD_RD A0 // LCD Read goes to Analog 0

#define LCD_RESET A4 // Can alternately just connect to Arduino's reset pin



// Assign human-readable names to some common 16-bit color values:
#define BLACK   0x0000
#define BLUE    0x001F
#define RED     0xF800
#define GREEN   0x07E0
#define CYAN    0x07FF
#define MAGENTA 0xF81F
#define YELLOW  0xFFE0
#define WHITE   0xFFFF

Adafruit_TFTLCD tft(LCD_CS, LCD_CD, LCD_WR, LCD_RD, LCD_RESET);
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); // NewPing setup of pins and maximum distance.

void setup() {

Serial.begin(9600);
tft.reset();

 uint16_t identifier = tft.readID();
 
 // if (identifier == 0x0101)
  //  identifier = 0x9341;
 
  identifier = 0x9481;
 
tft.begin(identifier);
tft.fillScreen(CYAN);

delay(1000);
pinMode(53,OUTPUT);
digitalWrite(53,HIGH);
}

long i;
 int value;
void loop() {
  // put your main code here, to run repeatedly:


//for(int a=0;a<10;a++)
//{
//  tft.setCursor(a*30,100);
//  tft.setTextSize(3);
//  tft.setTextColor(RED);
//
//  tft.print(a);
//  delay(800);
//  }


 value=sonar.ping_cm();
  tft.setCursor(50,150);
  tft.setTextSize(4);
  tft.setTextColor(BLACK);
  Serial.println(value);
  tft.print(value);
  delay(200);
  tft.setCursor(50,150);
  tft.setTextSize(4);
  tft.setTextColor(CYAN);
  tft.print(value);
}
