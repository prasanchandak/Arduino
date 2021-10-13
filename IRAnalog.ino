// Code to use the IR Sensor in Digital Mode with NodeMCU
int Balarm = D0;   
int IRsensor = A1; 
void setup() {
  pinMode(IRsensor, INPUT); // IR sensor as input  
  pinMode(Balarm, OUTPUT);   // Buzzer alaram as output
  Serial.begin(9600);
  
}

void loop(){
  int state = analogRead(IRsensor); //Continuously check the state of IR sensor
  delay(500);                         //Check state of IR after every half second
  Serial.println(state); 
    if(state <60){              
      Serial.println("Motion detected!");  
      digitalWrite (Balarm, LOW);    //If intrusion detected ring the buzzer
      delay(2000);                    
      
    }
    else {
      digitalWrite (Balarm, HIGH);     //No intrusion Buzzer off
      Serial.println("Motion absent!");
      }
}
