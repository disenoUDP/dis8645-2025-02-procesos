# sesion-11b

## Encargo
- cada persona debe subir una investigación detallada de la obra artística de Claudia González Godoy, con énfasis en su investigación sobre ríos, incluyendo información sobre premios, exposiciones, colaboradores, estudios y referencias en su obra.
- Cada persona debe subir taxonomía detallada de sensores, actuadores, software y hardware utilizado en 1 obra exhibida en la Bienal de Artes Mediales 2025, citando correctamente a las fuentes.

## Nuevas máquinas
Podemos usar metáforas y filosofía para abordar el propósito de las máquinas. Las opciones más fuertes por el momento son máquinas de lenguaje y de felicidad. ¿Será este proceso parecido a la línea de razonamiento del "buen diseño"?

### Referentes/Datos
- Grahad Harman/La Cosmología. "El lenguaje es un reflejo pobre de la realidad"
- Heideger
- La tercera mesa: Quiere acercarse lo más posible a la mesa real.
- miu miu
- Asíntota: Casi pero next level. Líneas se acercan tanto que parecen paralelas pero nunca se juntan.
- *"Pienso, luego existo"* / ***if/then***
- Paradoja de Xenon

### Una mesa
- Clase: mesa
- Constantes: 4 patas/fierro/madera/negra
- Funciones: soportar cosas/sentarse/apoyarse
Esto es la **programación orientada a los objetos.** El método es la función dentro de un objeto. Al diseñar pensamos en ambas mesas:
- Mesa científica/undermining: Cuando hablas de la mesa solo pensando en la composición. Se desgrana a lo más simple.
- Mesa humanista/overmining: Relaciones que ocurren con la mesa y le dan contexto. Se desgrana a lo más complejo.
- Mesa real: Está entre los 2 subconjuntos anteriores pero no tenemos palabras para describirlas correctamente.

Este cuestionamiento aparece cuando la mesa falla y deja de ser mesa. *"El buen diseño es invisible".*

## Claudia Gonzalez Godoy
Es una artista medial, gestora de proyectos y doctora en historia del arte. Su obra se concentra en el cruce de arte, ciencia, naturaleza y tecnología. Su foco principal es la investigación de ríos y fallas naturales (con agua) y la traducción de estos elementos al sonido. Proyectos como "*Water Resistance Laboratory*" exploran de manera científica y exhaustiva elementos básicos como el agua y la electricidad. Analiza sus aspectos químicos, físicos y cómo se relacionan entre ellos y con nosotros. La obra de Claudia propone escenarios e instancias para la observación, reflexión y descubrimiento, con un gran compromiso medioambiental. Un ejemplo de esto es su obra relacionada a los ríos de Chile: *Hidroscopia*. 

**Hidroscopía/ Mapocho** aísla muestras de agua del río en una instalación con artilugios que la miden, controlan y traducen en muestras y datos. Mediante sensores y conectores es posible darle una "personalidad" al agua del Mapocho y hacer una crítica de manera indirecta. Mi aspecto favorito de la obra es como el ph del agua (y como cambia) es influyente en el sonido y la imagen que se proyecta. Con **Hidroscopía/Loa** aborda otro aspecto problemático: la desertificación por sobreindustrialización. En esta ocasión somete al agua a un circuito que expone su apriencia, sonido, flujo y constante cambio para, de manera literal y figurativa, mostrarle a todos el estado del río. 
Claudia Gonzalez toma problemas políticos ambientales y los hace patentes con elegancia y sutileza para generar opiniones en vez de imponerlas. Su trabajo científico legitimiza su obra y le da solemnidad y pulcritud a un elemento natural e incontrolable como el río.
La obra de Claudia se expone nacional e internacionalmente en MINCAP Chile, ifa Gallery y ZKM Karlsruhe en Alemania. Ha participado en bienales en España, Brasil, Austria y Croacia. Se ha desarrollado como Coordinadora de la unidad de Anilla del Museo de Arte Contemporáneo de la Universidad de Chile y actualmente es Coordinadora del área de oficios gráficos del Museo Taller.

### Fuentes
- https://www.claudiagonzalez.cl/projects/hidroscopia-loa/
- https://www.claudiagonzalez.cl/projects/hidroscopia-mapocho-macro-roma/
- https://www.claudiagonzalez.cl/projects/water-resistance-laboratory/
- https://artishockrevista.com/2025/09/14/claudia-gonzalez-godoy-hidroscopias/
- https://www.claudiagonzalez.cl/cgg/

## Bienal de Artes Mediales 2025
### Punto de Fuga III: La singularidad o La densidad infinita de las imágenes

Aunque no tiene sensores me pareció la obra más llamativa del recorrido. Era de las pocas que hablaban por si solas e impresionaban sin necesidad de explicación. 
Creo que la taxonomía del proyecto es bastante simple:
- **Sensores**: No tiene, funciona de manera autónoma.
- **Actuadores**: Pantalla (redonda) compuesta de leds y reproductor de video. No estoy completamente seguro ya que me parece un proceso muy tedioso y dificil, pero creo que manejaron la pantalla con microcontroladores individuales para cada led. De esta manera no sería necesario el reproductor de video y por la cantidad reducida de pixeles podría no haber problema con el espacio (128x64 en la OLED 1306 usaba bastante). Par esto sería necesario traducir cada patrón de la pantalla y sus intermedios a código o directamente dibujarlo con funciones. Por los colores y movimientos fluidos necesitaría hartas variables o podría repetirlas para la "vuelta" (cuando se agranda y achica) y cambiar colores.
- **Software**: De la manera propuesta solo se necesitaría arduino, adafruit (supongo) y para estar seguros un controlador de tarjeta sd por si no alcanza el código. 
- **Hardware**: Lo principal es la pantalla esférica rodeada de espejos con calados que acentúan y deforman "la singularidad". No recuerdo si tenía audio pero en el caso de tenerlo necesitaría un reproductor mp3 como el DFPlayer y un parlante más poderoso que el que usamos nosotros. Vi cables que salían de la pantalla esférica por lo que no creo que sea controlado por wifi. No se hasta que punto es instalación y no hardware pero creo que junto a los cables vi unos cordones de acero sosteniendo la estructura.

Usando elementos "sencillos" de manejar (ojalá) y dándoles las condiciones que más los hacen destacar logran transmitir una experiencia hipnótica y contemplativa. Al dejar de lado la interactividad hacen una declaración de confianza en su proyecto y se pueden concentrar en fortalecer el elemento principal: la imagen. Creo que esta es una opción realista y más que valida que debo tomar en cuenta en el proyecto final del curso.

### Links
- https://17.bienaldeartesmediales.cl/obra/punto-de-fuga-iii-la-singularidad-o-la-densidad-infinita-de-las-imagenes/
- https://afel.cl/products/modulo-reproductor-mp3-dfplayer-mini?



