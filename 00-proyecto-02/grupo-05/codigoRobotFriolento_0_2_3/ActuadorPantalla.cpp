#include <Wire.h>
#include <U8g2lib.h>
#include "ActuadorPantalla.h"


// Constructor para pantalla SH1106 128x64 I2C
U8G2_SH1106_128X64_NONAME_F_HW_I2C display(U8G2_R0, U8X8_PIN_NONE);


void ActuadorPantalla::configurar() {
  display.begin();
  display.clearBuffer();
  Serial.begin(115200);
};

void ActuadorPantalla::mostrarPantalla() {
  // Fuente monoespaciada en negrita
  display.setFont(u8g2_font_9x15B_tr);  // similar a FreeMonoBold12pt7b

  // Posición del texto
  display.drawStr(0, 30, "Probando algo ");
  display.drawStr(0, 45, "Largo!");
  // Muestra en pantalla

  display.sendBuffer();
};
