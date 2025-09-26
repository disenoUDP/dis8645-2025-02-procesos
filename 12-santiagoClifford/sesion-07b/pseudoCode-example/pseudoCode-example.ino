void setup() {
//configurarSensor1A();
//configurar otros sensores
//configurar actuadores

//lo anterior lo podemos reducir a una función
configurarComponentes();
}

void loop() {
leerSensores();
tomarDecisiones();
actuar();

}
