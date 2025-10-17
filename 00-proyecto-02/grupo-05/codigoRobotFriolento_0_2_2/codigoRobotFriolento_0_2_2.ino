#include "SensorTemp.h"
#include "SensorUltra.h"
//#include "ActuadorServo.h"
#include "ActuadorPantalla.h"

// Crear una instancia de la clase SensorUltra
SensorUltra sensorUltra;

void setup() {
 sensorUltra.configurar();
}

void loop() {
  sensorUltra.leerDistancia();
  sensorUltra.reconocerDistancia();
}

// Crear una instancia de la clase SensorTemp
SensorTemp SensorTemp;

void setup() {
  sensorTemp.configurar();
}

void loop() {
  sensorTemp.reconocerTemp();
  sensorTemp.leerTemp();
}


// Crear una instancia de la clase ActuadorPantalla
ActuadorPantalla ActuadorPantalla;

void setup() {
  actuadorPantalla.configurar();
}

void loop() {
  actuadorPantalla.mostrarPantalla();
}