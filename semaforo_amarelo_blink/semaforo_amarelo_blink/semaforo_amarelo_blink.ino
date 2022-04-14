int vermelho = 13;
int amarelo = 9;
int verde = 6;

void setup() {

  pinMode(verde, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(vermelho, OUTPUT);

}

void loop() {

  digitalWrite(vermelho, LOW);
  
    for(int a = 0; a <= 5; a++){
    digitalWrite(amarelo, HIGH);
    delay(500);
    digitalWrite(amarelo, LOW);
    delay(500);
  }
  
   digitalWrite(verde, LOW);
  

  digitalWrite(amarelo, LOW);
  digitalWrite(vermelho, HIGH);
  delay(10000);

  digitalWrite(vermelho, LOW);
  digitalWrite(verde, HIGH);
  delay(10000);
}
