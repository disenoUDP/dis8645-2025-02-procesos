// #include "SensorTemp.h"
#include "SensorUltra.h"

// crear una instancia de la clase SensorUltra
SensorUltra sensorUltra;

void setup() {
 sensorUltra.configurar();

}

void loop() {
  // put your main code here, to run repeatedly:
  sensorUltra.leerDistancia();
  sensorUltra.reconocerDistancia();

}
