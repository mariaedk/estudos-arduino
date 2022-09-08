/* Sketch de exemplo do Arduino para controlar um sensor de distância ultrassônico JSN-SR04T com a biblioteca NewPing e Arduino. */
// Incluir a biblioteca:
#include <NewPing.h>
// Defina o Trig e o pino de eco:
#define trigPin 2
#define echoPin 3
// Defina a distância máxima para a qual queremos fazer o ping (em centímetros). A distância máxima do sensor é avaliada em 400-500 cm:
#define MAX_DISTANCE 400
// Configuração de NewPing de pinos e distância máxima.
NewPing sonar = NewPing(trigPin, echoPin, MAX_DISTANCE);
void setup() {
  // Abra o Monitor Serial a 9600 baudrate para ver os resultados do ping:
  Serial.begin(9600);
}
void loop() {
  // Aguarde 50ms entre os pings (cerca de 20 pings / seg). 29 ms deve ser o menor atraso entre os pings:
  delay(50); 
  
  // Meça a distância e imprima no Monitor Serial:
  Serial.print("Distancia = ");
 // Enviar ping, obter a distância em cm e imprimir o resultado (0 = fora da faixa de distância definida):
  Serial.print(sonar.ping_cm()); 
  Serial.println(" cm");
}
