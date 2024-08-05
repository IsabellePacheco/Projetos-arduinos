//Programação piscar led 

void setup() //define a porta 
{
   pinMode(7,OUTPUT);  
}
void loop() {
  //
  digitalWrite(7,HIGH);//Envia sinal alto para saiada 7
  delay(1000);//aguarda 1 segundo 
  digitalWrite(7,LOW);//envia sinal baixo para saida 7  
  delay(1000);
  
}
