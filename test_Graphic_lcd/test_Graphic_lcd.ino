#include <Adafruit_GFX.h>    // Core graphics library
#include <Adafruit_TFTLCD.h>

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
void setup() {


tft.reset();

 uint16_t identifier = tft.readID();
 
 // if (identifier == 0x0101)
  //  identifier = 0x9341;
 
  identifier = 0x9481;
 
tft.begin(identifier);
tft.fillScreen(CYAN);

delay(1000);
 
}

long i;
void loop() {
  // put your main code here, to run repeatedly:


for(int a=0;a<10;a++)
{
  tft.setCursor(a*30,100);
  tft.setTextSize(3);
  tft.setTextColor(RED);

  tft.print(a);
  delay(100);
  
  }

  tft.setCursor(60,200);
  tft.setTextSize(3);
  tft.setTextColor(RED);

  tft.print("tharhtetsan");
 tft.fillScreen(BLACK);

    tft.setCursor(60,200);
  tft.setTextSize(3);
  tft.setTextColor(GREEN);
    tft.print("tharhtetsan1");
  
}
