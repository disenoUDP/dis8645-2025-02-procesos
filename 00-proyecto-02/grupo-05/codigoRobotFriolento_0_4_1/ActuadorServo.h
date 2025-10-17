#//Contructores para no causar problemas en el codigo
#ifndef ACTUADOR_SERVO_H
#define ACTUADOR_SERVO_H

#include <Arduino.h>
#include <Servo.h>

//crear la clase ActuadorServo
class ActuadorServo {

public: 
  ActuadorServo();
  // ponerle nombre al servomotor
  Servo actBrazo;
  // establecer las 2 partes del 
  // funcionamiento para el actuador
  void configurar();
  void moverBrazo();

  // escribir datos para el ángulo del servomotor
  // donde estos grados de movimiento
  // seran cambiados en todas sus instancias
  int saludoIzq = 45;
  int saludoDer = 130;
  int saludoNeu = 0;

  // int para medir cantidad de saludos
  int cuantosSaludos;
};
// destructores para no causar problemas en el codigo
#endif