int sensor_pin_1 = A0;
int sensor_pin_2 = A1;// Soil Sensor input at Analog PIN A0
int output_value_1 ;
int output_value_2 ;


void setup() {
  Serial.begin(9600);
  Serial.println("Reading From the Sensor ...");
  delay(2000);
  }
  
void loop() {
  output_value_1= analogRead(sensor_pin_1);
  output_value_1= map(output_value_1,550,10,0,100);
  Serial.print("Mositure 1: ");
  Serial.print(output_value_1);
  Serial.print("%");


  output_value_2= analogRead(sensor_pin_2);
  output_value_2= map(output_value_2,550,10,0,100);
  Serial.print("   Mositure 2: ");
  Serial.print(output_value_2);
  Serial.println("%");

  delay(500);
  }
