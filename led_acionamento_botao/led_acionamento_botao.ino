// LED c/ acionamento p/ Botão:

int botao = 9;
int ledAzul = 12;

void setup(){
  pinMode(botao, INPUT); // config. o pino com o botão como entrada
  pinMode(ledAzul, OUTPUT); // config. o pino com o LED como saída
}

void loop(){
  if (digitalRead(botao) == HIGH){ // se botão estiver pressionado (HIGH)
    digitalWrite(ledAzul, HIGH); // acende o LED
  }
  else{ // se não estiver pressionado (LOW)
    digitalWrite(ledAzul, LOW); // apaga o LED
  }
}
