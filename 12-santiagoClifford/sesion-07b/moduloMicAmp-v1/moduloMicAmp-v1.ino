int valorMic;
void setup() {
  Serial.begin(9600);
}

void loop() {
  valorMic = constrain(valorMic, 511, 1023);
  valorMic = analogRead(A0);
  Serial.println(valorMic);
  delay(500);
}
