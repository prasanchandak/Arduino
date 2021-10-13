// Code to use LM35 temperature sensor with NodeMCU
          // Led in NodeMCU at pin GPIO16 (D0).
#define LED1 D5
#define LED2 D6
#define LED3 D7

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
