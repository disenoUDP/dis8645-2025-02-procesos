void setup() {
  configurarSensores();
  configurarActuadores();
}

void loop() {
  buscarAmenazas();
  contactoVisual();
}
