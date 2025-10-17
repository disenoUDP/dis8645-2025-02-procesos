// incluir .h
#include "SensorTemp.h"

SensorTemp::SensorTemp() {
}

void SensorTemp::configurar() {
  //abrir la comunicación serial
  Serial.begin(9600);
}