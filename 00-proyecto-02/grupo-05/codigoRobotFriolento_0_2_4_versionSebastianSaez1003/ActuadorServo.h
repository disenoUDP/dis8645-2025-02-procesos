//Contructores para no causar problemas en el codigo
#ifndef ACTUADOR_SERVO_H
#define ACTUADOR_SERVO_H

#include <Arduino.h>

#include <Servo.h>

//crear la clase SensorTemp
class ActuadorServo {

public: 
  ActuadorServo();
  // ponerle nombre al servomotor
  Servo actBrazo;
  // establecer las 3 partes del 
  // funcionamiento para el actuador
  void configurar();
  void posicionBrazo();
  void moverbrazo();

  // escribir datos para el ángulo del servomotor
  // donde estos grados de movimiento
  // seran cambiados en todas sus instancias
  int saludoIzq = 135;
  int saludoDer = 45;
  int saludoNeu = 180;
};
// destructores para no causar problemas en el codigo
#endif