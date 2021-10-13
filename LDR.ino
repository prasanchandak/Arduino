// Code to use the LDR with NodeMCU
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>




// You should get Auth Token in the Blynk App.

char auth[] = "sM2jtTWNqCKAnkRagGmPJ701ZUMTTd3w";

// Your WiFi credentials.
// Set password to "" for open networks.

char ssid[] = "nikhil";
char pass[] = "oneplusone";

WidgetLCD lcd(V1);

#define TRIGGERPIN D1
#define ECHOPIN  D2

void setup()
{
 // Debug console
 Serial.begin(9600);

pinMode(TRIGGERPIN, OUTPUT);
  pinMode(ECHOPIN, INPUT);
  Blynk.begin(auth, ssid, pass);
  

 lcd.clear(); //Use it to clear the LCD Widget
 lcd.print(0, 0, "Distance in cm"); 
}

void loop()
{

 long duration, distance;
 digitalWrite(TRIGGERPIN, LOW);  
 delayMicroseconds(2); 
 pinMode(D3,OUTPUT);
  
 digitalWrite(TRIGGERPIN, HIGH);
 delayMicroseconds(10); 
  
 digitalWrite(TRIGGERPIN, LOW);
 duration = pulseIn(ECHOPIN, HIGH);
 distance = (duration/2) / 29.1;
 


 lcd.clear();
 lcd.print(0, 0, "Distance in cm"); // use: (position X: 0-15, position Y: 0-1, "Message you want to print")
  Blynk.virtualWrite(V0,distance);
 lcd.print(7, 1, distance);
 Blynk.virtualWrite(V2,distance);
 Serial.print("Distance in CM: - ");
 Serial.println(distance);
 if(distance <31)
 {
  digitalWrite(D3,HIGH);
  }
  else
  {
    digitalWrite(D3,LOW);}
 Blynk.run();

 delay(1000);

}
