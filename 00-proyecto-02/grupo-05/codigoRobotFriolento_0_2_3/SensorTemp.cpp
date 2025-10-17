// incluir .h
#include "SensorTemp.h"

// una clase que viene desde la libreria del sensor de temp
// donde se especifica que el pin de comunicacion es el 5
// se descarta el pin 2 porque el sensorUltra los ocupará
DHT11 dht11(5);

SensorTemp::SensorTemp() {
}

void SensorTemp::configurar() {
  //Abrir la comunicación serial
  Serial.begin(9600);
}

// Lo que se necesita para que se reconozca la temperatura.
void SensorTemp::reconocerTemp() {
  // Se declara que temperature es un "int".
  int temperature;
}

// Lo que se hace para leer la Temp.
// Según el código de ejemplo.
// https://github.com/dhrubasaha08/DHT11/blob/main/examples/ReadTemperature/ReadTemperature.ino#L18
void SensorTemp::leerTemp() {
  // El int de "temperature" va a ser equivalente
  // a la temperatura leída por el sensor DHT11.
  int temperature = dht11.readTemperature();
  // Cuando la temperatura no presente algún error.
  if (temperature != DHT11::ERROR_CHECKSUM && temperature != DHT11::ERROR_TIMEOUT) {
    // Se demostrará la temperatura actual en el monitor serial.
    Serial.print("Temperature: ");
    Serial.print(temperature);
    Serial.println(" °C");
    // Cada 2 segundos.
    delay(2000);
    // Si es que esto no se cumple.
  } else {
    // Muestra el error en el monitor serial.
    Serial.println(DHT11::getErrorString(temperature));
  }
}