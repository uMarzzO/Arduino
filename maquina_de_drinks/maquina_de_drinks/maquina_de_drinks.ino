// Criado p/ Seafoxc
// Traduzido p/ pt-br por uMarzzO
//#include <SoftwareSerial.h>
//SoftwareSerial EEBlue(0, 1); // RX | TX

//Definição dos pins usados p/ cada bebiba, pode alterar os pins conforme as disposições das bebidas.

int Vodka = 2;
int Cointreau = 3;
int CranberryJuice = 4;
int Sprite = 5;
int LemonJuice = 6;
int SugarWater = 7;
int BlueCur = 8;
int Gin = 9;



int state = 0;
// Tempo entre mudança das bombas.
int TimeBetweenPours = 500;


void setup()
{
 
  Serial.begin(9600); 
  Serial.println("O bluetooth esta aberto.\n Conecte-se ao HC-05 por outro dispositivo bluetooth através da chave de pareamento:\n1234");

  // Definindo os pins 2-9 como pins de saída para acionar o relé
  pinMode(2, OUTPUT); 
  pinMode(3, OUTPUT); 
  pinMode(4, OUTPUT); 
  pinMode(5, OUTPUT); 
  pinMode(6, OUTPUT); 
  pinMode(7, OUTPUT); 
  pinMode(8, OUTPUT); 
  pinMode(9, OUTPUT); 


// Minha placa de retransmissão é uma placa "Low True". Configurando a saída para baixa energização do relé, pois você não quer que todos liguem ao ligar a coqueteleira ...
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);

  
}
 
void loop()

{
if(Serial.available() > 0){ // Verifica se os dados estão vindo da porta serial
    state = Serial.read(); // Lê os dados da porta serial
    Serial.println(state);
}

// Coquetéis:


//Vodka sprite
if (state == 'a') {
  Serial.println("Vodka Sprite em produção...");
  Mix(3000,0,0,0,5000,0,0,0); // Vodka, Triple Sec, Cranberry juice, Sprite, Lime juice, Sugar water, Blue Curacao, Gin 
 }

// Lagoa Azul
if (state == 'b') {
  Serial.println("Lagoa Azul em produção...");
  Mix(2000,0,0,5000,1800,1000,1800,0); // Vodka, Triple Sec, Cranberry juice, Sprite, Lime juice, Sugar water, Blue Curacao, Gin  
 }
  

// Cosmo
if (state == 'c') {
  Serial.println("Cosmo in the making");
  Mix(2500,1500,3800,0,1200,1200,0,0); // Vodka, Triple Sec, Cranberry juice, Sprite, Lime juice, Sugar water, Blue Curacao, Gin
 }

// Lemon drop
if (state == 'd') {
  Serial.println("Lemon drop em produção...");
  Mix(1500,1500,0,0,1800,1200,0,0); // Vodka, Triple Sec, Cranberry juice, Sprite, Lime juice, Sugar water, Blue Curacao, Gin
 }

// Blue Moon
if (state == 'e') {
  Serial.println("Blue Moon em produção...");
  Mix(2000,0,3000,0,1800,1200,1200,0); // Vodka, Triple Sec, Cranberry juice, Sprite, Lime juice, Sugar water, Blue Curacao, Gin
 }

// Blue Gin Moon
if (state == 'f') {
  Serial.println("Blue Gin Moon em produção...");
  Mix(0,0,3000,0,1800,1200,1200,2000); // Vodka, Triple Sec, Cranberry juice, Sprite, Lime juice, Sugar water, Blue Curacao, Gin
 }

// Golpe Duplo
if (state == 'i') {
  Serial.println("Golpe Duplo em produção...");
  Mix(2000,0,3000,0,1800,0,1200,0); // Vodka, Triple Sec, Cranberry juice, Sprite, Lime juice, Sugar water, Blue Curacao, Gin
 }

// Tom Collins
if (state == 'h') {
  Serial.println("Tom Collins em produção...");
  Mix(0,0,0,4000,1800,1800,0,2200); // Vodka, Triple Sec, Cranberry juice, Sprite, Lime juice, Sugar water, Blue Curacao, Gin
 }

// Holandês Voador
if (state == 'g') {
  Serial.println("Holandês Voador em produção...");
  Mix(0,2000,0,0,1200,1000,0,2000); // Vodka, Triple Sec, Cranberry juice, Sprite, Lime juice, Sugar water, Blue Curacao, Gin
 }

// London Cosmo
if (state == 'j') {
  Serial.println("London Cosmo em produção...");
  Mix(0,2000,5000,1800,0,0,0,2000); // Vodka, Triple Sec, Cranberry juice, Sprite, Lime juice, Sugar water, Blue Curacao, Gin
 }
    

// Vodka Cranberry 
if (state == 'k') {
  Serial.println("Vodka Cranberry em produção...");
  Mix(2000,0,5000,0,0,1200,0,0); // Vodka, Triple Sec, Cranberry juice, Sprite, Lime juice, Sugar water, Blue Curacao, Gin
 }

// Cranberry Gin   
if (state == 'l') {
  Serial.println("Cranberry Gin em produção...");
  Mix(0,0,5000,0,2000,0,0,2200); // Vodka, Triple Sec, Cranberry juice, Sprite, Lime juice, Sugar water, Blue Curacao, Gin
 }

// Opções de teste e manutenção

// Configuração Vodka
if (state == 'm') {
  Serial.println("Configuração Vodka");
  Mix(1100,0,0,0,0,0,0,0); // Vodka, Triple Sec, Cranberry juice, Sprite, Lime juice, Sugar water, Blue Curacao, Gin
 }

// Configuração Tripple Sec
if (state == 'n') {
  Serial.println("Configuração Tripple Sec");
  Mix(0,1100,0,0,0,0,0,0); // Vodka, Triple Sec, Cranberry juice, Sprite, Lime juice, Sugar water, Blue Curacao, Gin
 }

// Configuração suco de Cranberry
if (state == 'o') {
  Serial.println("Configuração suco de Cranberry");
  Mix(0,0,1000,0,0,0,0,0); // Vodka, Triple Sec, Cranberry juice, Sprite, Lime juice, Sugar water, Blue Curacao, Gin
 }

// Configuração Sprite
if (state == 'p') {
  Serial.println("Configuração Sprite");
  Mix(0,0,0,1000,0,0,0,0); // Vodka, Triple Sec, Cranberry juice, Sprite, Lime juice, Sugar water, Blue Curacao, Gin
 }

// Configuração Lime juice
if (state == 'q') {
  Serial.println("Configuração Lime juice");
  Mix(0,0,0,0,1100,0,0,0); // Vodka, Triple Sec, Cranberry juice, Sprite, Lime juice, Sugar water, Blue Curacao, Gin
 }

// Configuração Sugar water
if (state == 'v') {
  Serial.println("Configuração Sugar water");
  Mix(0,0,0,0,0,1200,0,0); // Vodka, Triple Sec, Cranberry juice, Sprite, Lime juice, Sugar water, Blue Curacao, Gin
 }

// Configuração Blue Curaçao
if (state == 'r') {
  Serial.println("Configuração Blue curaçao");
  Mix(0,0,0,0,0,0,800,0); // Vodka, Triple Sec, Cranberry juice, Sprite, Lime juice, Sugar water, Blue Curacao, Gin
 }

// Configuração Gin
if (state == 's') {
  Serial.println("Set-up Gin");
  Mix(0,0,0,0,0,0,0,1000); // Vodka, Triple Sec, Cranberry juice, Sprite, Lime juice, Sugar water, Blue Curacao, Gin
 }

// Limpeza
if (state == 't') {
  Serial.println("Set-up Gin");
  Mix(4000,4000,4000,4000,4000,4000,4000,4000); // Vodka, Triple Sec, Cranberry juice, Sprite, Lime juice, Sugar water, Blue Curacao, Gin
 }

// Configuração Geral (primeira vez após a limpeza)
if (state == 'u') {
  Serial.println("Configuração GERAL!");
  Mix(800,800,800,800,1000,1600,800,800); // Vodka, Triple Sec, Cranberry juice, Sprite, Lime juice, Sugar water, Blue Curacao, Gin
 }
    
}

void Mix(int DelayTimeVodka, int DelayTimeCointreau, int DelayTimeCranberryJuice, int DelayTimeSprite, int DelayTimeLemonJuice, int DelayTimeSugarWater, int DelayTimeBlueCur, int DelayTimeGin ) {
  
  state = 0;
  delay(800);
  digitalWrite(Vodka, LOW);   
  delay(DelayTimeVodka);            
  digitalWrite(Vodka, HIGH); 
  delay(TimeBetweenPours);    

  digitalWrite(Cointreau, LOW);   
  delay(DelayTimeCointreau);            
  digitalWrite(Cointreau, HIGH); 
  delay(TimeBetweenPours); 

  digitalWrite(CranberryJuice, LOW);   
  delay(DelayTimeCranberryJuice);            
  digitalWrite(CranberryJuice, HIGH); 
  delay(TimeBetweenPours);

  digitalWrite(Sprite, LOW);   
  delay(DelayTimeSprite);            
  digitalWrite(Sprite, HIGH); 
  delay(TimeBetweenPours);
  
  digitalWrite(LemonJuice, LOW);   
  delay(DelayTimeLemonJuice);            
  digitalWrite(LemonJuice, HIGH); 
  delay(TimeBetweenPours); 

  digitalWrite(SugarWater, LOW);   
  delay(DelayTimeSugarWater);            
  digitalWrite(SugarWater, HIGH); 
  delay(TimeBetweenPours); 

  digitalWrite(BlueCur, LOW);   
  delay(DelayTimeBlueCur);            
  digitalWrite(BlueCur, HIGH); 
  delay(TimeBetweenPours);

  digitalWrite(Gin, LOW);   
  delay(DelayTimeGin);            
  digitalWrite(Gin, HIGH); 
  delay(TimeBetweenPours); 


  Serial.println("Drink pronto!"); 
  state = 0;
}
