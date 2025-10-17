#ifndef ACTUADOR_PANTALLA_H
#define ACTUADOR_PANTALLA_H

#include <Arduino.h>
#include <Wire.h>
#include <U8g2lib.h>

class ActuadorPantalla {



public:
  void configurar();
  void mostrarPantalla();
};


#endif