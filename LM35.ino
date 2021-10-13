// Code to use LM35 temperature sensor with NodeMCU
          // Led in NodeMCU at pin GPIO16 (D0).
#define LED1 D5
#define LED2 D6
#define LED3 D7


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
 
  
=======
void setup() {
pinMode(D5, OUTPUT); 

pinMode(D6, OUTPUT);

pinMode(D7, OUTPUT);// LED pin as output.

}
void loop() {
digitalWrite(D5, HIGH);
digitalWrite(D6,LOW);
digitalWrite(D7,LOW);
delay(300); // turn the LED off.(Note that LOW is the voltage level but actually 
digitalWrite(D5, LOW);
digitalWrite(D6,HIGH);
digitalWrite(D7,LOW);
delay(300);
digitalWrite(D5,LOW);
digitalWrite(D6,LOW);
digitalWrite(D7,HIGH);
delay(300);


}
