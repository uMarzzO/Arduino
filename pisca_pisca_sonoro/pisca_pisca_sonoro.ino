// Pisca-pisca sonoro.

int buzzer = 10;
int frequencia = 500; // Quanto MAIOR a frequencia, MAIS agudo o som. 

void setup(){
  pinMode(buzzer, OUTPUT); // Configura o pino com o buzzer como saída
}

void loop(){
  tone(10, frequencia); // Gera frequencia de 500Hz no buzzer
  delay(1500);
  noTone(10); // para frequencia no buzzer
  delay(1000);
}