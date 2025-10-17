//Contructores para no causar problemas en el codigo
#ifndef SENSOR_TEMP_H
#define SENSOR_TEMP_H

#include <Arduino.h>

//incluir biblioteca hecha por Dhruba Saha 
//para el funcionamiento del sensor de temperatura
#include <DHT11.h>

//crear la clase SensorTemp
class SensorTemp {

public: 
  SensorTemp();
  // establecer las 3 partes del 
  // funcionamiento para el sensor
  void configurar();
  void reconocerTemp();
  void leerTemp();
  
};
// destructores para no causar problemas en el codigo
#endif