#define echo x //digite o pino do echo
#define trig y // digite o pino do trig


float distancia = 0; //variavel que vai armazenar o valor da distância
unsigned long tempo = 0; //variavel que vai armazenar o valor do tempo da onda


void setup() {
	pinMode(echo,INPUT);
	pinMode(trig,OUTPUT);

	digitalWrite(trig,LOW);
}

void loop() {
	ultra();
}
  
void ultra(){
	digitalWrite(trig,HIGH);
	delay(10);
	digitalWrite(trig,LOW);

	tempo = pulseIn(echo,HIGH); //Irá verificar o tempo em que pulso foi emtido até ser recebido novamente
	
	distancia  = tempo/58.82 //Fazendo uma regra de tres simples entre o tempo da onda e a velocidade do som no ar, temos o valor 29.41 cm a cada micro segundo.
//Sendo assim, como a onda faz o percurso de ida e volta, e queremos calcular somente o valor de ida(ou volta), dividirmos o tempo pelo valor indicado e dividir esse resultado por 2.
//Assim, temos: distancia = (tempo/29.41)/2 == tempo/58.82
}
