// Code to use LM35 temperature sensor with NodeMCU

int Ldr_pin  = A0;
int led_pin  = D0;
int senser_value = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(Ldr_pin,INPUT);
  pinMode(led_pin,OUTPUT);
  Serial.begin(9600);
}


void loop() {
  // put your main code here, to run repeatedly:
  senser_value = analogRead(Ldr_pin);
  Serial.println(senser_value);
  if(senser_value <100)
  {
     digitalWrite(led_pin,HIGH);
     Serial.println("Led is On");
    }
   else
   {
     digitalWrite(led_pin,LOW);
     Serial.println("Led is Off");
   }

    
  delay(1000);
 
  
}
