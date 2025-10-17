#include "SensorTemp.h"
#include "SensorUltra.h"
//#include "ActuadorServo.h"
#include "ActuadorPantalla.h"

// Crear una instancia de la clase SensorUltra
SensorUltra sensorUltra;
// Crear una instancia de la clase SensorTemp
SensorTemp sensorTemp;
// Crear una instancia de la clase ActuadorServo
//ActuadorServo actuadorServo;
// Crear una instancia de la clase ActuadorPantalla
ActuadorPantalla actuadorPantalla;

void setup() {
  sensorUltra.configurar();
  sensorTemp.configurar();
  actuadorPantalla.configurar();
}

void loop() {
  sensorUltra.leerDistancia();
  sensorUltra.reconocerDistancia();
  sensorTemp.reconocerTemp();
  sensorTemp.leerTemp();
  actuadorPantalla.mostrarPantalla();
}
