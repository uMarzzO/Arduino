// Frequencímetro:
//Um botão aumenta e o outro diminui a frequencia do buzzer.

int frequencia = 2000; // frequencia inicial do buzzer
const int buzzer = 10; // pino onde o buzzer esta conectado
const int botaoVerde = 9; // pino onde o botao verde esta conectado
const int botaoAmarelo = 11; // pino onde o botao amarelo esta conectado

void setup(){
  pinMode(buzzer, OUTPUT); // configura o pino com o buzzer como saída
  pinMode(botaoVerde, INPUT_PULLUP); // configura o pino com o Botão Verde como entrada
  pinMode(botaoAmarelo, INPUT_PULLUP); // configura o pino com o Botão Amarelo como entrada
}

void loop(){

  // Soma 100 à frequencia atual se o botao estiver pressionado
  if (digitalRead(botaoVerde) == LOW) {
    frequencia += 100;
  }
  
  // Subtrai 100 da frequencia atual se o botao estiver pressionado
  if (digitalRead(botaoAmarelo) == LOW) {
    frequencia -= 100;
  }
  
  tone(buzzer, frequencia); // gera frequencia no buzzer
  delay(1000);
  noTone(buzzer); // para frequencia no buzzer
  delay(1000);
}