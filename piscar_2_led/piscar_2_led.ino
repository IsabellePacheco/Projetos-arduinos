//Programação piscar 2 leds

void setup() {
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);


}

void loop() {
  digitalWrite(7,HIGH);//Envia sinal alto para saiada 7
  delay(1000);//aguarda 1 segundo 
  digitalWrite(7,LOW);//envia sinal baixo para saida 7  
  delay(1000);
  digitalWrite(8,HIGH);//Envia sinal alto para saiada 8
  delay(1000);//aguarda 1 segundo 
  digitalWrite(8,LOW);//envia sinal baixo para saida 8  
  delay(1000);
}
