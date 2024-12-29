# Repositorio: Control de LEDs y Reproducción de Melodía "Last Christmas" con Arduino

Este repositorio contiene un proyecto para controlar una secuencia de LEDs y reproducir una melodía utilizando un Arduino. El proyecto utiliza un botón para activar la reproducción de la canción, y a medida que se reproduce la melodía, los LEDs se encienden en sincronización con las notas de la canción.

## Homenaje a George Michael

La canción que se reproduce en este proyecto es "Last Christmas", un tema icónico de Wham! lanzado en 1984. Este proyecto es un homenaje a George Michael, el talentoso cantante y compositor que formó parte de Wham! y quien lamentablemente falleció un 25 de diciembre, dejando un legado musical imborrable.

## Materiales Necesarios

- **1 Arduino Nano**: Para controlar los LEDs, el altavoz y leer el estado del botón.
- **1 Altavoz de 4 ohmios y 2 watts**: Para reproducir la melodía.
- **7 LEDs**: Para visualizar el encendido sincronizado con las notas de la melodía.
- **7 Resistores de 220 ohmios**: Para limitar la corriente de los LEDs.
- **1 Pulsador**: Para activar la melodía.
- **Protoboard y cables de conexión**: Para realizar el montaje de los componentes.
- **Fuente de alimentación para Arduino**.

## Contenido del Repositorio

1. **Código Arduino**: El código que permite la reproducción de la melodía y el control de los LEDs mediante el uso de un botón.
2. **Diagrama de Conexiones Físicas**: Un diagrama que muestra cómo conectar los LEDs, el buzzer y el pulsador al Arduino.

## Instrucciones de Uso

### Conexiones Físicas:

- Sigue el diagrama de conexiones físicas para conectar los LEDs, el altavoz y el pulsador al Arduino.
- Conecta los LEDs a los pines digitales 12, 11, 10, 9, 8, 7, y 6 del Arduino.
- Conecta el pulsador al pin digital 2.
- Conecta un resistor de 220 ohmios en serie con cada LED.

### Cargar el Programa en el Arduino:

1. Abre el archivo `.ino` con el IDE de Arduino.
2. Conecta tu Arduino a la computadora y selecciona el puerto correcto.
3. Carga el programa en el Arduino.

### Control del Proyecto:

- Una vez cargado el programa, presiona el botón para activar la melodía.
- Los LEDs se encenderán sincronizados con las notas de "Last Christmas" mientras suena la canción.
- Puedes ajustar la duración de las notas y la sincronización de los LEDs modificando el código.

## Consejos Adicionales

- **Personalización de la melodía**: Puedes modificar el arreglo `melody[]` para cambiar la canción que se reproduce.
- **Sigue las Instrucciones con Cuidado**: Asegúrate de seguir el diagrama de conexiones y las instrucciones de carga del programa al pie de la letra para evitar problemas.

## Disfruta y Experimenta

Este proyecto es una excelente oportunidad para aprender sobre control de LEDs y reproducción de melodías con Arduino. **"Last Christmas" es un recordatorio del talento de George Michael y de su legado musical que sigue vivo en nuestros corazones.** Disfruta del proceso de construcción y programación de tu proyecto, y diviértete creando una experiencia visual y sonora.

¡Buena suerte y diviértete controlando los LEDs y el buzzer con Arduino!