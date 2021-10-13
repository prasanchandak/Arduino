// Code to use the IR Sensor in Digital Mode with NodeMCU
int Balarm = D1;   
int IRsensor = D0; 
void setup() {
  pinMode(IRsensor, INPUT); // IR sensor as input  
  pinMode(D1, OUTPUT);   // Buzzer alaram as output
  Serial.begin(9600);
  
}

void loop(){
  int state = digitalRead(IRsensor); //Continuously check the state of IR sensor
  delay(500);                         //Check state of IR after every half second
  Serial.println(state); 
    if(state==HIGH){              
      Serial.println("Motion not detected!");  
      digitalWrite (D1, LOW);    //If intrusion detected ring the buzzer
      delay(2000);                    
      
    }
    else {
      digitalWrite (D1, HIGH);     //No intrusion Buzzer off
      Serial.println("Motion detected!");
      }
}
