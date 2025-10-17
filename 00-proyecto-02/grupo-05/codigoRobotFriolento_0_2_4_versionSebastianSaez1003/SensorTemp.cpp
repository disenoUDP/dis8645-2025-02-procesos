// aqui se inluye el SensorTemp.h
// para poder traer lo ya establecido en este archivo
#include "SensorTemp.h"

// una clase que viene desde la libreria del sensor de temp
// donde se especifica que el pin de comunicacion es el 2
//
DHT11 dht11(2);

// se especifica la clase
SensorTemp::SensorTemp() {
}

void SensorTemp::configurar() {
  //abrir la comunicación serial
  Serial.begin(9600);
}

// que se necesita para que se reconozca la temperatura
void SensorTemp::reconocerTemp(){
  // se declara que temperature es un "int"
int temperature;
}

// que se hace para leer la Temp
// Según el código de ejemplo 
// https://github.com/dhrubasaha08/DHT11/blob/main/examples/ReadTemperature/ReadTemperature.ino#L18
void SensorTemp::leerTemp(){
  // el int de "temperature" va a ser equivalente
  // a la temperatura leida por el sensor dht11
  int temperature = dht11.readTemperature();
  // cuando la temperatura no presente algun error
if (temperature != DHT11::ERROR_CHECKSUM && temperature != DHT11::ERROR_TIMEOUT) {
  // se demostrara la temperatura actual en el monitor serial
        Serial.print("Temperature: ");
        Serial.print(temperature);
        Serial.println(" °C");
        // cada 2 segundos
        delay (2000);
        // si es que esto no se cumple
    } else {
        // muestra el error en el monitor serial
        Serial.println(DHT11::getErrorString(temperature));
    }
    
}