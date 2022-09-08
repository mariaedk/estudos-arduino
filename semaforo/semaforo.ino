#define VERDE 2
#define AMARELO 3
#define VERMELHO 4

void setup() {
  // put your setup code here, to run once:
  pinMode(VERDE,OUTPUT); // led verde
  pinMode(AMARELO,OUTPUT); // led amarelo
  pinMode(VERMELHO,OUTPUT); // led vermelho
}

void loop() {
  acendeLedVerde();
  acendeLedAmarelo();
  acendeLedVermelho();
}

void acendeLedVerde() {
  digitalWrite(VERDE, HIGH);
  delay(6000);
  digitalWrite(VERDE, LOW);
}

void acendeLedAmarelo() {
  digitalWrite(AMARELO, HIGH);
  delay(3000);
  digitalWrite(AMARELO, LOW);
}

void acendeLedVermelho() {
  digitalWrite(VERMELHO, HIGH);
  delay(6000);
  digitalWrite(VERMELHO, LOW);
}
