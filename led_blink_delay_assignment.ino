#include "delay_ms.h"//Including the Header file 
//Arduino Pin Declaration
const int LM35_PIN = A0;    // Analog Input pin for LM35 temperature sensor
const int LED_PIN = 13;     // Arduino Digital Output pin 13 for  LED


int temperature = 0;        // Assume Initial temperature value is 0

void setup() {
  pinMode(LED_PIN, OUTPUT);   // Pin Type like LED pin as output
  Serial.begin(9600);         // Initialize serial communication for debugging 9600 baurd rate 
}

void loop() {
  
  int sensorValue = analogRead(LM35_PIN);//// Read temperature value  from LM35 sensor as input 
  temperature = map(sensorValue, 0, 1023, 0, 500);  // Map sensor value to temperature range (0°C to 50°C)

  // Check temperature and control LED blinking
  if (temperature < 30) {
   digitalWrite(LED_PIN,HIGH);//Turn on the led light for every 250 delay milliseconds 
   delay_ms(250);   //
  }
  else if(temperature>=30) {
    digitalWrite(LED_PIN,HIGH);//Turn on the led light for every 250 delay milliseconds 
    delay_ms(500);   //  assigning delay interval 500 to calculate the delay 
  }
  return 0;
}