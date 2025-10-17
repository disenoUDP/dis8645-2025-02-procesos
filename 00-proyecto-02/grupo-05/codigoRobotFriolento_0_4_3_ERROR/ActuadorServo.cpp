// biblioteca para funcionamiento del servo
#include "ActuadorServo.h"
#include "SensorTemp.h"

ActuadorServo::ActuadorServo() {
}

void ActuadorServo::configurar() {
  // configurar en que pin conectar el servo
  actBrazo.attach(9);
}

// escribir el movimiento que queremos realizar
void ActuadorServo::moverBrazo() {

    if (servoTemp) {
    // se realizara todo lo presente en
    // la instacia de moverBrazo
    actuadorServo.moverBrazo();
  }
    // se repetira esto 3 veces
    for (cuantosSaludos = 0; cuantosSaludos < 3; cuantosSaludos++){
    // primero hacia la derecha
    actBrazo.write(saludoDer);
    delay(1000);
    // despues a la izquierda
    actBrazo.write(saludoIzq);
    delay(1000);
  }
  // vuelve a posicion inicial
  actBrazo.write(saludoNeu);
}