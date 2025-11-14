# sesion-10a 14.10.25

Hoy revisamos código y trajimos nuestro nuevo prototipo a clase.

## Proceso de nuestro nuevo AND-Y (RAMon 2.0)

![ANDY](./imagenes/1.jpg)
![ANDY](./imagenes/2.jpg)
![ANDY](./imagenes/3.jpg)
![ANDY](./imagenes/4.jpg)

Al cambiar nuestro código ".ino" a clases en el sensor ultrasónico tuvimos un ploblema con esta parte del código:

```cpp
float EntradaUltrasonico::medirDistancia() {
```
Ya que estaba en void no en float, si está en void no nos dejaba "return" la distancia al final del códigoi y necesitabamos eso para poder usar la distancia en otras partes del código.

### Libreria "newping"

Misa nos dijo que esta libreria podia servirnos para controlar mejor nuestro ultrasónico. Es una librería para Arduino IDE, básicamente, incluye toda la lógica necesaria para calcular distancias de forma rápida y precisa.
<https://eloctavobit.com/librerias-arduino/newping>
Funciones:
+ **sonar.ping ([max_cm_distance]):** envía un ping y obtiene el tiempo de eco (en microsegundos) como resultado. [max_cm_distance] permite establecer opcionalmente una nueva distancia máxima.
+ **sonar.ping_in ([max_cm_distance]):** envía un ping y obtiene la distancia en pulgadas enteras. [max_cm_distance] permite establecer opcionalmente una nueva distancia máxima.
+ **sonar.ping_cm ([max_cm_distance]):** envía un ping y obtiene la distancia en centímetros enteros. [max_cm_distance] permite establecer opcionalmente una nueva distancia máxima.
+ **sonar.ping_median (iteraciones [, max_cm_distance]):** realiza varios pings (predeterminado = 5), descarta los pings fuera de rango y devuelve la mediana en microsegundos. [max_cm_distance] permite establecer opcionalmente una nueva distancia máxima.
+ **sonar.convert_in (echoTime):** convierte echoTime de microsegundos a pulgadas.
+ **sonar.convert_cm (echoTime):** convierte echoTime de microsegundos a centímetros.
+ **sonar.ping_timer (function [, max_cm_distance]):** envía un ping y llama a la función para probar si el ping está completo. [max_cm_distance] permite establecer opcionalmente una nueva distancia máxima.
+ **sonar.check_timer ():** comprueba si el ping ha regresado dentro del límite de distancia establecido.
+ **NewPing :: timer_us (frecuencia, función):** función de llamada cada microsegundos de frecuencia.
+ **NewPing :: timer_ms (frecuencia, función):** función de llamada cada milisegundos de frecuencia.
+ **NewPing :: timer_stop ():** detiene el temporizador.
Tambien encontramos el github: <https://github.com/eliteio/Arduino_New_Ping>
Le pedimos ayuda a Aarón para que nos ayudara a ordenar el archivo del código.
Cuando pasamos nuestro código “.ino” a clases dentro del sensor ultrasónico, tuvimos un problema con esta parte:
``` cpp
float EntradaUltrasonico::medirDistancia() {
```

Antes estaba declarada como void, pero eso no nos permitía usar return para devolver la distancia al final. 

Necesitábamos ese valor para poder utilizar la medida en otras partes del código, así que lo cambiamos a float.


### NUEVO PROCESO AND-Y
Decidimos cambiarle el nombre a nuestro robot: antes se llamaba RAMon, pero ahora se llama AND-Y. Nos pareció divertido porque nos recordó la compuerta lógica AND que vimos en clases.


Ese día el sensor medía distancia, pero el robot reproducía el mismo audio una y otra vez. Tal como nos habia ocurrido unas sesiones antes. Aarón nos dio una mano revisando el código, y ahí nos dimos cuenta de que en el archivo SalidaMotorVibracion habíamos escrito que el motor “medía distancia y vibraba”. Obviamente eso no tenía sentido, porque el motor no tiene sensores asi que no puede medir nada jajaj,  así que corregimos esa parte para que el código tuviera coherencia.

Luego hablamos con el profesor Sergio, el nos hizo darnos cuentas que uno de nuestros audios no sonaba porque estaba en mp4 y nos ayudo a aplicar una bool de reproducir para que ANDy solo dijera un audio a la vez! funciono super 🩷.

Estamos super contentas con el resultado!
