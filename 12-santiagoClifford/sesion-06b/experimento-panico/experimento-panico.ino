 const int buzzer = 9; //buzzer to arduino pin 9
int ledPin=2;


void setup(){
   
  pinMode(buzzer, OUTPUT); // Set buzzer - pin 9 as an output
  pinMode(ledPin, OUTPUT);
}

void   loop(){
 
  tone(buzzer, 2000); // Send 1KHz sound signal..
  delay(6000);         // ...for 1 sec
  digitalWrite(ledPin,HIGH);
delay(700);
  noTone(buzzer);     // Stop sound...
  delay(700);         // ...for 1sec
  
digitalWrite(ledPin,LOW);
delay(500);
}