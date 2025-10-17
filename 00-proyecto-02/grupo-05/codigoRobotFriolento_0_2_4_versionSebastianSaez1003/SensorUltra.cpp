// incluir .h
#include "SensorUltra.h"

SensorUltra::SensorUltra() {
}

void SensorUltra::configurar() {
  // conectar las patitas
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void SensorUltra::reconocerDistancia() {
  // configuracion reconocimiento distancia
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
}

void SensorUltra::leerDistancia() {
  //va a leer e imprimir en el monitor serial la distancia detectada
  distancia = duracion / 58;
  if (distancia < 30) {
    persona = false;
  } else {
    Serial.print("la persona esta a: ");
  }
}