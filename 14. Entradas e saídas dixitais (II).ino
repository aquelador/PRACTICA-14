// C++ code
/*
A partir da montaxe da práctica anterior, co pulsador no pin 10,
modifica o programa para que cando o pulsador está premido, 
todos os pins de saída envíen o sinal 'LOW'. Cando non está 
premido, o programa fai o que estaba programado

Para realizar esta práctica terás que empregar o bloque 
'IF-ELSE' (SI-ENTÓN condicional) e engadir unha condición 
relativa ao pin 10 na casilla correspondente.

Pode ser que o pulsador non funcione correctamente todas as 
veces. Se acontece así, non te preocupes e pregunta en clase 
como se pode solucionar.
*/

// C++ code
//
#define PULSADOR 10
#define LED_INTEGRADO 13 
#define LED 12
#define RELÉ 11

bool pulsador;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(PULSADOR, INPUT);
}

void loop()
{
  pulsador = digitalRead(10);
  
  if(!pulsador){
  	digitalWrite(LED_BUILTIN, HIGH);
  	delay(10000); // Wait for 10000 millisecond(s)//O led integrado se encende durante 10 segundos//
  	digitalWrite(LED_BUILTIN, LOW);
  	delay(4000); // Wait for 4000 millisecond(s)//O led integrado apagase e pasados 4 segundos acivanse os pins 11 e 12 para activar o led e o rele durante 10 segundos// 
 	digitalWrite(12, HIGH);
 	digitalWrite(11, HIGH);
 	delay(10000); // Wait for 10000 millisecond(s)//Pasados os 10 segundos desactianse os pins 11 e 12//
  	digitalWrite(12, LOW);
  	digitalWrite(11, LOW);
  	delay(4000); // Wait for 4000 millisecond(s)//Ao desactivarse os pins e pasar 4 segundos, volve a repetirse o proceso//
  }
  
  /*Si el led del ARDUINO (13) esta en LOW desconectas los pines
  12 y 11 durante 5s)
 */
    else(pulsador); {
      digitalWrite(LED_BUILTIN, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      delay(500);
      }
    }
