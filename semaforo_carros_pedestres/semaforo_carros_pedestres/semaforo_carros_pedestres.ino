// Semáforo de carros e pedestres.

//LEDs Semáforo carro:
int ledVerdeCar = 11;
int ledAmareloCar = 12;
int ledVermelhoCar = 13;

//LEDs Semáforo Pedestres:
int ledVermelhoPeds = 10;
int ledVerdePeds = 9;

void setup(){
  
  // Configura os pinos com os LEDs como saída,
  // Semaf. Carro:
  pinMode(ledVerdeCar, OUTPUT); // LED verde carros
  pinMode(ledAmareloCar, OUTPUT); // LED amarelo carros
  pinMode(ledVermelhoCar, OUTPUT); // LED vermelho carros

  // Semaf. Pdestres:
  pinMode(ledVerdePeds, OUTPUT); // LED verde pedestres
  pinMode(ledVermelhoPeds, OUTPUT); // LED vermelho pedestres
}

void loop(){
  
  // Sinal para pedestres fechado: apaga LED verde, acende LED vermelho
  digitalWrite(ledVerdePeds, LOW);
  digitalWrite(ledVermelhoPeds, HIGH);
  
  // Sinal para carros aberto: apaga LED vermelho, acende LED verde
  digitalWrite(ledVerdeCar, HIGH);
  digitalWrite(ledAmareloCar, LOW);
  digitalWrite(ledVermelhoCar, LOW);
  delay(9000);
  
  // Sinal para carros fechando: apaga LED verde, acende LED amarelo
  digitalWrite(ledVerdeCar, LOW);
  for (int n = 0; n <= 8; n++){
    digitalWrite(ledAmareloCar, HIGH);
    delay(1000);
    digitalWrite(ledAmareloCar, LOW);
    delay(1000);
  }
  digitalWrite(ledVermelhoCar, LOW);
  
  // Sinal para pedestres aberto: apaga LED vermelho, acende LED verde
  digitalWrite(ledVerdePeds, HIGH);
  digitalWrite(ledVermelhoPeds, LOW);
  
  // Sinal para carros fechado: apaga LED verde, acende LED vermelho
  digitalWrite(ledVerdeCar, LOW);
  digitalWrite(ledAmareloCar, LOW);
  digitalWrite(ledVermelhoCar, HIGH);
  delay(15000);
}
