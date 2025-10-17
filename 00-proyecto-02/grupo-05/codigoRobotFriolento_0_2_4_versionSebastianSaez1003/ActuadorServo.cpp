// biblioteca para funcionamiento del servo
#include "ActuadorServo.h"
#include "SensorTemp.h"

ActuadorServo::ActuadorServo() {
}

void ActuadorServo::configurar() {
  // configurar en que pin conectar el servo
  actBrazo.attach(9);
}

void ActuadorServo::posicionBrazo() {
  
}

void ActuadorServo::moverbrazo() {
  // si es que el robot NO tiene frio
  // y se detecta una entidad
  if(temperature < 15){
  actBrazo.write(saludoIzq);
  delay(1000);
  actBrazo.write(saludoDer);
  delay(1000);
  actBrazo.write(saludoNeu);
  }
}