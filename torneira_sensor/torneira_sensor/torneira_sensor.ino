const int sensor = A0; // Qual pino esta o sensor.
int valorSensor = 0;  // Valor lido pelo sensor.
const int rele = 10; // Pino Digital onde liguei o rele.

void setup() {
 //Serial.begin(9600);
pinMode(rele, OUTPUT);
}

void loop() {
  valorSensor = analogRead(sensor);
  
  //Serial.println(valorSensor); --> p/ verificar os valores de referência das distancias entre sensor infravermelho e a mão.
  //delay(200); -->tempo entra leituras feitas pelo sensor
  //Menor distancia = Maior Valores do sensor.
  
  if(valorSensor > 85){
    digitalWrite(rele, HIGH);
    delay(900); // p/ não chavear o solenóide.
  } else {
    digitalWrite(rele, LOW);
  }
}
