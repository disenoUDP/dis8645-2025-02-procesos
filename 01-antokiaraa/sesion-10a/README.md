# sesion-10a

## Última clase antes de la entrega del proyecto 02

- Qué funciona y que no funciona?
- Simplificar método de detección de sonido (aplausos)
- Se dejó en un solo aplauso
- Terminar Readme del proyecto

### Proyecto:

Chispop es un proyecto interactivo que combina tecnología, sonido y lenguaje. La idea es crear una experiencia donde el usuario pueda elegir un idioma desde un menú en pantalla y, al aplaudir, recibir un saludo tanto visual como sonoro en el idioma seleccionado.

### Funcionamiento

Al encender el dispositivo, se muestra en la pantalla un menú de idiomas (Ruso, Japones, Francés).

El usuario gira un encoder rotatorio para desplazarse entre las opciones y presiona su botón para seleccionar un idioma.

Luego, la pantalla muestra un mensaje que indica: “Aplaude dos veces para continuar”

Si el sensor de sonido detecta un aplauso no pasa nada pero si detecta dos aplausos, se activa el reproductor DFPlayer Mini, que emite un saludo en audio correspondiente al idioma elegido y en la pantalla OLED se muestra una imagen del saludo en el idioma correspondiente.

Si el usuario presiona el botón, vuelve al menú principal.
