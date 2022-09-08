void setup() {
  // put your setup code here, to run once:
  // setar o pino 2 como saída para piscar o led amarelo no protoboard
  pinMode(2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2,HIGH);
  delay(1000);
  digitalWrite(2,LOW);
  delay(1000);
}
