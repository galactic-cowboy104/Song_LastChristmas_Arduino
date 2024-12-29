// Incluye el archivo de cabecera "pitches.h" que define las frecuencias de las notas musicales.
#include "pitches.h"

// Define el pin del botón y el pin del buzzer.
#define BUTTON 2
#define BUZZER 3

// Define los pines a los que están conectados los 7 LEDs.
#define LED1 12
#define LED2 11
#define LED3 10
#define LED4 9
#define LED5 8
#define LED6 7
#define LED7 6

// Arreglo que almacena los pines de los LEDs para facilitar su control.
uint8_t leds[7] = {
  LED1, LED2, LED3, LED4, LED5, LED6, LED7
};

// Define las notas de la melodía utilizando las constantes de "pitches.h".
uint16_t melody[] = {
  NOTE_E6, NOTE_E6, NOTE_D6, NOTE_A5,
  NOTE_E6, NOTE_E6, NOTE_FS6, NOTE_D6, 
  0, NOTE_B5, NOTE_B5, NOTE_E6, 
  NOTE_E6, NOTE_FS6, NOTE_D6, 0,
  NOTE_B5, NOTE_CS6, NOTE_D6, NOTE_CS6,
  NOTE_B5, 0, NOTE_FS6, NOTE_E6,
  0, NOTE_B5, NOTE_FS6, NOTE_G6,
  NOTE_FS6, NOTE_E6, 0, NOTE_B5,
  NOTE_CS6, NOTE_D6, NOTE_CS6, NOTE_CS6,
  NOTE_D6, NOTE_CS6, NOTE_A5, 0,
};

// Define las duraciones relativas de cada nota. Un valor de 4 representa una negra, 8 una corchea, etc.
float notesDurations[] = {
  3, 4, 4, 8,
  8, 8, 8, 4, 
  8, 8, 8, 8, 
  8, 4, 4, 8,   
  8, 8, 8, 8,
  3, 5, 3, 3,
  8, 8, 8, 8,
  8, 3, 8, 8,
  8, 8, 8, 4,
  4, 4, 3, 2
};

// Función para encender el LED correspondiente a la nota actual.
void turnLed(uint16_t thisNote) {

  // Enciende el LED1 si la nota es A5, de lo contrario, lo apaga.
  if (thisNote == NOTE_A5) 
    digitalWrite(LED1, HIGH);
  else
    digitalWrite(LED1, LOW);

  // Enciende el LED2 si la nota es B5, de lo contrario, lo apaga.
  if (thisNote == NOTE_B5) 
    digitalWrite(LED2, HIGH);
  else
    digitalWrite(LED2, LOW);

  // Enciende el LED3 si la nota es C#6, de lo contrario, lo apaga.
  if (thisNote == NOTE_CS6) 
    digitalWrite(LED3, HIGH);
  else
    digitalWrite(LED3, LOW);

  // Enciende el LED4 si la nota es D6, de lo contrario, lo apaga.
  if (thisNote == NOTE_D6)
    digitalWrite(LED4, HIGH);
  else
    digitalWrite(LED4, LOW);

  // Enciende el LED5 si la nota es E6, de lo contrario, lo apaga.
  if (thisNote == NOTE_E6)
    digitalWrite(LED5, HIGH);
  else
    digitalWrite(LED5, LOW);

  // Enciende el LED6 si la nota es F#6, de lo contrario, lo apaga.
  if (thisNote == NOTE_FS6)
    digitalWrite(LED6, HIGH);
  else
    digitalWrite(LED6, LOW);

  // Enciende el LED7 si la nota es G6, de lo contrario, lo apaga.
  if (thisNote == NOTE_G6)
    digitalWrite(LED7, HIGH);
  else
    digitalWrite(LED7, LOW);
    
}

// Configuración inicial del programa.
void setup() {

  // Configura el buzzer como salida.
  pinMode(BUZZER, OUTPUT);

  // Configura el botón como entrada con resistencia pull-up habilitada.
  pinMode(BUTTON, INPUT_PULLUP);

  // Configura todos los LEDs como salidas.
  for (int i = 0; i < 7; i ++)
    pinMode(leds[i], OUTPUT);

  // Enciende todos los LEDs al inicio para verificar su funcionamiento.
  for (int i = 0; i < 7; i ++)
    digitalWrite(leds[i], HIGH);
    
}

// Bucle principal que se ejecuta continuamente.
void loop() {

  // Si el botón está presionado (estado bajo en el pin BUTTON):
  if (digitalRead(BUTTON) == LOW) {

    // Apaga todos los LEDs antes de reproducir la melodía.
    for (int i = 0; i < 7; i ++)
      digitalWrite(leds[i], LOW);

    // Reproduce la melodía dos veces.
    for (int i = 0; i < 2; i ++) {
      
      // Recorre todas las notas de la melodía.
      for (int thisNote = 0; thisNote < 40; thisNote ++) {
  
        // Calcula la duración de la nota en milisegundos.
        float noteDuration = 1775 / notesDurations[thisNote];    
  
        // Genera la frecuencia de la nota actual en el buzzer durante la duración calculada.
        tone(BUZZER, melody[thisNote], noteDuration);
  
        // Enciende el LED correspondiente a la nota actual.
        turnLed(melody[thisNote]);
  
        // Espera un poco más que la duración de la nota para agregar una pausa entre notas.
        delay(noteDuration * 1.30);
  
        // Detiene el buzzer al finalizar cada nota.
        noTone(BUZZER);
        
      }
      
    }

    // Al finalizar la melodía, enciende nuevamente todos los LEDs.
    for (int i = 0; i < 7; i ++)
      digitalWrite(leds[i], HIGH);
  }
  
}
