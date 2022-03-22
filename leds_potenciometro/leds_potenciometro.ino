byte ledPin[] = {2, 4, 6, 8, 10, 13};
int ledDelay;
int potPin = 2;

void setup() {
  for( int x=0; x<6; x++)
    {
        pinMode(ledPin[x], OUTPUT);
    }
}

void loop() {
  
    ledDelay = analogRead(potPin);
    for(int x=0; x<6; x++)
      {
        digitalWrite(ledPin[x], HIGH);
        delay(ledDelay);
        digitalWrite(ledPin[x], LOW);
        delay(ledDelay);
      }

}
