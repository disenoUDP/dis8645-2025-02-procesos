#ifndef SENSOR_ULTRA_H
#define SENSOR_ULTRA_H

#include "Arduino.h"

  int trigPin = 3;
  int echoPin = 2;

  void configurarSensorUltra();
  void reconocimientoDistancia();
  void leerDistancia();


// Ocurre un error, definiendo los parametros aqui
// Voy a seguir lo que sale en este link:
// https://forum.arduino.cc/t/multiple-variable-definition-error-when-compiling-with-h-and-cpp-file-tabs/492098/3
// Para ver si lo logro solucionar
  int distancia = 0;
  int duracion = 1000;

  bool persona;

#endif