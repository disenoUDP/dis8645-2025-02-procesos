#include "SensorTemp.h"
#include "SensorUltra.h"
#include "ActuadorServo.h"
#include "ActuadorPantalla.h"

// Crear una instancia de la clase SensorUltra
SensorUltra sensorUltra;
// Crear una instancia de la clase SensorTemp
SensorTemp sensorTemp;
// Crear una instancia de la clase ActuadorServo
ActuadorServo actuadorServo;
// Crear una instancia de la clase ActuadorPantalla
ActuadorPantalla actuadorPantalla;

void setup() {
  sensorUltra.configurar();
  sensorTemp.configurar();
  actuadorPantalla.configurar();
  actuadorServo.configurar();
}

void loop() {
  sensorUltra.leerDistancia();
  sensorUltra.reconocerDistancia();
  sensorTemp.leerTemp();
  actuadorPantalla.mostrarPantalla();

// cuando el dato dentro del sensor de tmeperatura
// llamado temperatura es mayor a 15
  if (sensorTemp.temperatura > 15) {
    // se realizara todo lo presente en
    // la instacia de moverBrazo
    actuadorServo.moverBrazo();
  }
}
