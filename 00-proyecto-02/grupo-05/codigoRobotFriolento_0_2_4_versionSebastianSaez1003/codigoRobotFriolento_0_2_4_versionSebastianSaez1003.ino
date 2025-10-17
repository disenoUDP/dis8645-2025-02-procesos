#include "SensorTemp.h"
#include "SensorUltra.h"
#include "ActuadorServo.h"

SensorUltra sensorUltra;
SensorTemp sensorTemp;
ActuadorServo actuadorServo;

// En los setup pondremos todo lo necesario para que los sensores y actuadores funcionen
// desde los pins donde estaran conectados
// si es que es necesario el puerto serial
// entre otras cosas mas en el futuro
void setup() {
 sensorUltra.configurar();
 sensorTemp.configurar();
 actuadorServo.configurar();
}

// aqui es donde se usan los sensores y actuadores
void loop() {
  sensorUltra.leerDistancia();
  sensorUltra.reconocerDistancia();

  sensorTemp.reconocerTemp();
  sensorTemp.leerTemp();


  
}
