#include <Arduino.h>
#include <dht.h>
#include "Display.h"

dht DHT;

#define DHT11_PIN 12
int humidity = 0;
int temperature = 0;

void setup(){
  Serial.begin(9600);
}

void loop(){
  humidity = DHT.humidity;
  temperature = DHT.temperature;

  int chk = DHT.read11(DHT11_PIN);
  Serial.print("Temperature = ");
  Serial.println(DHT.temperature);
  Serial.print("Humidity = ");
  Serial.println(DHT.humidity);
  Display.show(humidity);
  delay(1000);
}