#define LEDRot D0
#define LEDGelb D1
#define LEDGruen D2

int button=D7;
int status=1;

void setup() 
{ 
     pinMode(LEDRot, OUTPUT);  
     pinMode(LEDGelb, OUTPUT);   
     pinMode(LEDGruen, OUTPUT);     
} 


void loop() 
{   
    status = digitalRead(button);
    if (status==LOW)
    {
      digitalWrite(LEDRot, LOW);
      digitalWrite(LEDGelb, LOW); 
      digitalWrite(LEDGruen, LOW); 

      while (status==LOW)
      {
        digitalWrite(LEDGelb, HIGH); 
        delay(500);
        digitalWrite(LEDGelb, LOW);
        delay(500);
        status = digitalRead(button);
      }
      
    }
    else
    {
      digitalWrite(LEDRot, HIGH);
      delay(7000);
      digitalWrite(LEDGelb, HIGH); 
      delay(1000);
      digitalWrite(LEDRot, LOW);
      digitalWrite(LEDGelb, LOW); 
      digitalWrite(LEDGruen, HIGH); 
      delay(10000);
      digitalWrite(LEDGelb, HIGH); 
      digitalWrite(LEDGruen, LOW); 
      delay(1500);
      digitalWrite(LEDGelb, LOW); 
      digitalWrite(LEDGruen, LOW); 
    }          
}

