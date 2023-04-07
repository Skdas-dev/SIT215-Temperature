// This #include statement was automatically added by the Particle IDE.
#include "DHT.h"

// This #include statement was automatically added by the Particle IDE.

#define DHTPIN D2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);
float temp;

void setup() {
dht.begin();
}

void loop() {
temp = dht.readTemperature();

Particle.publish("temp", String (temp), PRIVATE);
delay(1000);
}
//2087966