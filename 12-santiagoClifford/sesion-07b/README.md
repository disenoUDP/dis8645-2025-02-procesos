# sesion-07b

## clase 14 - 26-sept

- [velocidad del sonido](https://es.wikipedia.org/wiki/Velocidad_del_sonido)

- [ultrasonido e infrasonido](https://www.lpi.tel.uva.es/~nacho/docencia/ing_ond_1/trabajos_03_04/infra_y_ultra/infrasonidos.htm)

### modulo MAX4466
<https://lastminuteengineers.com/max4466-arduino-tutorial>

- captura ondas de sonido en el rango de 20Hz-20kHz


- datasheets:
   - [servo](http://www.ee.ic.ac.uk/pcheung/teaching/DE1_EE/stores/sg90_datasheet.pdf)
   - [modulo mic](https://www.analog.com/en/products/max4466.html)

### links 
- [dart](https://dart.dev)
- [mermaid](https://mermaid.js.org)

#### avance masacre

```cpp
//en este codigo, se calcula a cual mic le llega sonido con mayor intensidad,
//de eso depende si se reste mic1-mic2 o mic2-mic1.
//Esto con el proposito de que el valor sea siempre positivo

//luego usando el resultado de la resta, el servo se mueve esa cantidad resultante(mapeada)
//es por esto que dependiendo de cuál mic recibia sonido con mayor intensidad, 
//el servo corre de derecha a izquierda, o de izquierda a derecha
int valueMic1;
int valueMic2;

if(valueMic1>valueMic2){
 origenSonido = valueMic1-valueMic2;
 apuntacionServo = map(origenSonido, 0, 1023, 10, 170); 
}else if(valueMic1<valueMic2){
 origenSonido = valueMic2-valueMic1;
 apuntacionServo = map(origenSonido, 0, 1023, 170, 10); 
}
```

#### otro alcance
```cpp
//en este ejemplo, mic0,mic1 y mic2 estan colocados de izquierda a derecha, en ese orden. 
int mic0;
int mic1;
int mic2;

mic0 = analogRead(A0);
mic1 = analogRead(A1);
mic2 = analogRead(A2);

if(mic0 > mic1 && mic0 > mic2){
   Serial.println("hay un wn q me quiere matar a la izquierda");
}else if(mic1 > mic0 && mic1 > mic2){
   Serial.println("hay un wn q me quiere matar al frente");
}else if(mic2 > mic0 && mic2 > mic1){
   Serial.println("hay un wn q me quiere matar a la derecha");
}
```

#### otro alcance v2

```cpp
//en este ejemplo, los posibles lugares donde apuntará el servo, son separados en zonas. De esta manera, asumimos que siempre que el microfono de la izq reciba sonido con mayor intensidad, significa que el sonido proviene desde la izquierda. Lo mismo para el micro a la derecha
int micA;
int micB;

bool zona0 = false;
bool zona1 = false;

mic0 = analogRead(A0);
mic1 = analogRead(A1);


if(mic0 > mic1){
   zona0 = true;
   zona1 = false;
}else if(mic1 > mic0){
  zona0 = false;
  zona1 = true;
}

//si se detecta desde la zona izq, el movimiento se limita desde 0 hasta 45°
//si se detecta desde la zona izq, el movimiento se limita desde 45° hasta 90°
if(zona0 && !zona1){
   servo = map(servo, 0, 1023, 0, 44);
}else if(!zona0 && zona1){
   servo = map(servo, 0, 1023, 45, 90);
}
```