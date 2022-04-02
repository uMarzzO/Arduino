
 /*DigitalReadSerial*/

 
int botaodeApertar = 2;

void setup() {
  
  Serial.begin(9600);
  pinMode(botaodeApertar, INPUT);
}

void loop() {
  
  int botaoEstado = digitalRead(botaodeApertar);
  
  Serial.println(botaoEstado);
  delay(1);
}
