// Semáforo com LED Amarelo Piscando 

// Declarando nome e posição dos LED's:
int vermelho = 13;
int amarelo = 9;
int verde = 6;

void setup() {
  
//Setando os pinos como Saída:
  pinMode(verde, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(vermelho, OUTPUT);

}

void loop() {

  digitalWrite(vermelho, LOW); // Apaga LED vermelho
  digitalWrite(verde, LOW); // Apaga LED verde
  
  for(int a = 0; a <= 5; a++){
    digitalWrite(amarelo, HIGH);
    delay(500);
    digitalWrite(amarelo, LOW);
    delay(500);
  } // Faz LED amarelo piscar por um período determinado
  

  digitalWrite(amarelo, LOW); // Apaga LED amarelo
  digitalWrite(vermelho, HIGH); // Acende LED vermelho
  delay(10000); // Duração

  digitalWrite(vermelho, LOW); // Apaga LED vermelho
  digitalWrite(verde, HIGH); // Acende LED verde
  delay(10000); // Duração
}
