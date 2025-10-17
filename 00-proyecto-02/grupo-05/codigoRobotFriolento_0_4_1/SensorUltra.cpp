// incluir .h
#include "SensorUltra.h"

SensorUltra::SensorUltra() {
}

void SensorUltra::configurar() {
  // Conectar las patitas.
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void SensorUltra::reconocerDistancia() {
  // Configuración reconocimiento distancia
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Medir duración del eco.
  duracion = pulseIn(echoPin, HIGH);

  // Calcular distancia en cm.
  distancia = duracion / 58;

  // Determinar si hay una persona (ejemplo: a menos de 30 cm)
  persona = (distancia < 30);
}

void SensorUltra::leerDistancia() {
  // Imprimir en el monitor serial la distancia detectada en cm.
 // if (persona) {
    Serial.println("la persona esta a: ");
    Serial.print(distancia);
    Serial.println(" cm");
  //} else {
    Serial.println("No hay persona.");
  //}
}