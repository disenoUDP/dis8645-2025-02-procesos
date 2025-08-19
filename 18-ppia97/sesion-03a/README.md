# sesion-03a
## APUNTES 19.08.25
### Condicionales, iteradores, Serial.read(), protoboard
Operadores lógicos: permiten operar y realizar preguntas de sí y no. En cada lenguaje se escriben distinto.
```ccp
If (Boolean condition) Then
  (consequence)
  Else
    (alternative)
  End if
Si (asistencia, condición) entonces
print ("pasaste")
En cualquier otro caso
print ("nope")
Ejemplo:
if (estaLloviendo == true) {
   hacerSopaipillas();
}
else {
  salirAAndarEnBici();
---------
}
if (ver == false) {  
   ponermeLentes();
if (suciedad == true){   //condición dentro de otra condición, se puede hacer.
   limpiarLentes();
}
}
else{
continuarConMiVida();
}
//equivale a ¿es ver falso?, si la respuesta es sí, ponerme lentes, si la respuesta es no, continuar con mi vida.
```
```ccp
!: bank, significa lo contrario a.
ejemplo:
//si no hay arana
//reacciono tranqui
if (!hayArana) {
   reaccionarTranqui();
}
else {
chillar(infinito);
}
```
```ccp
if (edad >= 18 AND edad <=80 ) {
  dartePermisoConducir();
}
else {
noPuedoNoMas();
}
```
