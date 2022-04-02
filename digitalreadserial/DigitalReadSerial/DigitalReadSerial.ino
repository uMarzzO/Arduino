
 /*DigitalReadSerial*/

 
int botaodeApertar = 2;

void setup() {
  
  Serial.begin(9600);
  pinMode(botaodeApertar, INPUT);
}

void loop() {
  
  int botaoLocal = digitalRead(botaodeApertar);
  
  Serial.println(botaoLocal);
  delay(1);
}
