# define TASK_100HZ 1
# define TASK_50HZ 2
# define TASK_10HZ 10
# define TASK_1HZ 100

unsigned long previousTime = 0;
unsigned long currentTime = 0;
unsigned long dt = 0;

unsigned long frameCounter = 0;

// main loop executive frame counter
/******************************************************************* * Main loop funtions ******************************************************************/
void setup() {
  Serial.begin(9600);
}
void loop () {
  currentTime = micros();
  dt = currentTime - previousTime;
  if (dt >= 10000) {//10 milli seconds(1/100=0.01)
    frameCounter++;
    // =================================================================
    // 100Hz task loop // ==============================================
    Serial.print("100Hz Task|");
    Serial.print("\n");
    
    if (frameCounter % TASK_50HZ == 0) {
      // 50 Hz tasks // ================================================= 
      // 50Hz task loop // ==============================================
      Serial.print("\t");
      Serial.print("50Hz Task|");
      Serial.print(micros()); Serial.print("\n");
    }
    if (frameCounter % TASK_10HZ == 0) {
      // ================================================================ 
      // 10Hz task loop 
      // ================================================================
      Serial.print("\t"); Serial.print("\t");
      Serial.print("10Hz Task|");
      Serial.print(micros()); Serial.print("\n");
    } if (frameCounter % TASK_1HZ == 0) { // 1 Hz tasks 
      // ================================================================
      // 1Hz task loop 
      // ================================================================
      Serial.print("\t");
      Serial.print("\t");
      Serial.print("1Hz Task | ");
      Serial.print(micros());
      Serial.print("\n");
    } 
    previousTime = currentTime;
  } 
  
  if (frameCounter >= 100) {
    frameCounter = 0;
  }
}


