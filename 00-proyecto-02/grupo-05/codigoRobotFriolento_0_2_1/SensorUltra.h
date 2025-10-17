#ifndef SENSOR_ULTRA_H
#define SENSOR_ULTRA_H

#include <Arduino.h>

class SensorUltra {



public:
  int trigPin = 3;
  int echoPin = 2;
  int distancia = 0;
  int duracion = 1000;

  bool persona = false;

  SensorUltra();
  void configurar();
  void reconocerDistancia();
  void leerDistancia();
};

#endif