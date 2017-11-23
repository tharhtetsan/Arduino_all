
const unsigned int LED1=3;
const unsigned int LED2=4;
const unsigned int LED3=5;
const unsigned int LED4=6;

const unsigned int BAUID_RATE=9600;
void setup() {
  // put your setup code here, to run once:
pinMode(OUTPUT,LED1);
pinMode(OUTPUT,LED2);
pinMode(OUTPUT,LED3);
pinMode(OUTPUT,LED4);

Serial.begin(BAUID_RATE);

}

void loop() {
  
  // put your main code here, to run repeatedly:
if(Serial.available()>0)
{
  int commands=Serial.read();
  if(commands=='1')
  {
    digitalWrite(LED1,LOW);
    Serial.println("LED on 1");
   }
   else if(commands=='A')
   {
    digitalWrite(LED2,HIGH);
    Serial.println("LED   1 OFF");
    } else if(commands=='2')
   {
    digitalWrite(LED3,LOW);
    Serial.println("LED on 2");
    } else if(commands=='B')
   {
    digitalWrite(LED4,HIGH);
    Serial.println("LED OFF 2");
    }else if(commands=='3')
   {
    digitalWrite(LED3,LOW);
    Serial.println("LED on 3");
    } else if(commands=='C')
   {
    digitalWrite(LED4,HIGH);
    Serial.println("LED OFF 3");
    }else if(commands=='4')
   {
    digitalWrite(LED3,LOW);
    Serial.println("LED OFF 3");
    } else if(commands=='D')
   {
    digitalWrite(LED4,HIGH);
    Serial.println("LED OFF 4");
    }
    else if(commands=='9')
   {
   digitalWrite(LED2,LOW);
digitalWrite(LED2,LOW);
digitalWrite(LED3,LOW);
digitalWrite(LED4,LOW);

    Serial.println("LED on ALL");
    } else if(commands=='I')
   {
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,HIGH);
    digitalWrite(LED4,HIGH);

    Serial.println("LED oALL OFF");
    }
    else
    {
      Serial.print("Unknow command:");
      Serial.println(commands);
      }
  
  }

}
