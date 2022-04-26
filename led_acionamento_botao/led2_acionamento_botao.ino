// LED c/ acionamento p/ Botão:

int botao = 9;
int ledAzul = 12;
int ledLaranja = 13;

void setup(){
  pinMode(botao, INPUT); // configura o pino com o botão como entrada
  pinMode(ledAzul, OUTPUT); // configura o pino com o LED Azul como saída
  pinMode(ledLaranja, OUTPUT); // configurar o pino com o Led Laranja como saída
}

void loop(){
  if (digitalRead(botao) == HIGH){ // se botão estiver pressionado (HIGH)
    digitalWrite(ledAzul, HIGH); // acende o LED Azul
    digitalWrite(ledLaranja, HIGH); // acende o LED Laranja
  }
  else{ // se não estiver pressionado (LOW)
    digitalWrite(ledAzul, LOW); // apaga o LED Azul
    digitalWrite(ledLaranja, LOW); // apaga o LED Laranja
  }
}