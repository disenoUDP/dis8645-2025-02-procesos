//LIBRARIES:
#include <Servo.h> 

Servo myservo;  //creamos un objeto servo 
int angulo;

void setup(){
  myservo.attach(3);  // asignamos el pin 3 al servo.
  Serial.begin(9600); // iniciamos el puerto serial
}

 
void loop() { 
  angulo= 20;
  myservo.write(angulo);
  Serial.print("ángulo:  ");
  Serial.println(angulo);
  delay(2000);  

  angulo=160;
  myservo.write(angulo);
  Serial.print("ángulo:  ");
  Serial.println(angulo);
  delay(2000); 

} 
