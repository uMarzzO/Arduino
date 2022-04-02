/*
  Sensor de barulho

  Este esboço lê um elemento piezoelétrico para detectar um som de batida.
  Ele lê um pino analógico e compara o resultado com um limite definido.
  Se o resultado for maior que o limite, ele grava "Toctoc" no serial
  porta e alterna o LED no pino 13.

  O circuito:
- conexão positiva do piezo ligado ao analógico em 0
- ligação negativa do piezo ligado ao terra
- Resistor de 1 megohm conectado do analógico em 0 ao terra
*/


const int ledPin = 13;    
const int sensorBarulho = A0;
const int limite = 100;



int sensorLeitura = 0;      
int ledState = LOW;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);   
}

void loop() {
  
  sensorLeitura = analogRead(sensorBarulho);

    if (sensorLeitura >= limite) {
        ledState = !ledState;
    digitalWrite(ledPin, ledState);
    Serial.println("Toctoc!");
  }
  delay(100);
}
