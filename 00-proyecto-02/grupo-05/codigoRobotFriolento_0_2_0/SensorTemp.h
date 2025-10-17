#ifndef SENSOR_TEMP_H
#define SENSOR_TEMP_H

#include <Arduino.h>

//incluir biblioteca hecha por Dhruba Saha para el funcionamiento del sensor 
#include <DHT11.h>

class SensorTemp {


public: 
// Según el código de ejemplo 
// https://github.com/dhrubasaha08/DHT11/blob/main/examples/ReadTemperature/ReadTemperature.ino#L18
// En la linea #14 y #15, se explica la creacion de una clase para la conección del sensor
// A base de eso con Seba interpretamos esta traduccion
// para que los archivos queden en un mismo lenguaje 
  int digitalPin = 2;
  //
  //

  SensorTemp();
  void configurar();
  void reconocerTemp();
  void leerTemp();
};
#endif