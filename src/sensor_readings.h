#ifndef SENSOR_READINGS_H
    #define SENSOR_READINGS_H

    #include <Adafruit_Sensor.h>
    #include <Adafruit_BME280.h>

    #define SEALEVELPRESSURE_HPA (1013.25)

    void refresh_readings(Adafruit_BME280* bme);  // Declare in the header so that the compiler knows about it before it is called in loop()
#endif

#include "settings.h"