#include <Arduino.h>
#include <sensor_readings.h>
#include <settings.h>

Adafruit_BME280 bme; // I2C

void setup() {
 pinMode(LED_BUILTIN,OUTPUT);
  Serial.begin(9600);
  bool status;

  // (you can also pass in a Wire library object like &Wire2)
  status = bme.begin(0x76);
  if (!status) {
    Serial.println("Could not find a valid BME280 sensor, check wiring!");
    while (1);
  } 
  // put your setup code here, to run once:
}

void loop() {
 refresh_readings(&bme);
  delay(2000);
  // put your main code here, to run repeatedly:
}
