//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// Pedestrian Crossing
// 
// Made by 33959@Ufp.Edu.Pt 33959@Ufp.Edu.Pt
// License: CC-BY-SA 3.0
// Downloaded from: https://circuits.io/circuits/4537966-pedestrian-crossing

int ledVermelho = 11, ledAmarelo=12, ledVerde=13;
int red=3,green=2,blue=6;
//int button=2,interruption=3;
int buzz=9;
volatile int state=LOW;

int matrix[2][3]={{1,0,0},
				  {0,0,1}};

int pins[]={5,6,7};
                  
int i,j;

void setup() {
  //light-traffic
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  
  //button
  /*pinMode(button,OUTPUT);
  pinMode(interruption, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(interruption), blink, CHANGE);*/
  //buzzer
  pinMode(buzz,OUTPUT);
  
  //crosswalk
  /*for(i=0;i<3;i++)
  {
   pinMode(pins[i],OUTPUT); 
  }*/
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
}


void loop() {
  
  //digitalWrite(green, HIGH);
  //Luz verde
  digitalWrite(ledVerde, HIGH);
  delay(1000);
  digitalWrite(ledVerde, LOW);
  
  	
  delay(1000);
  digitalWrite(green, LOW);
  digitalWrite(buzz, LOW);
  digitalWrite(red, HIGH);
  
  	//Luz amarelo
  	digitalWrite(ledAmarelo, HIGH);
  	delay(1000);
  	digitalWrite(ledAmarelo, LOW);
  
   	//Luz vermelho
  	digitalWrite(ledVermelho, HIGH);
  	delay(1000);
  	digitalWrite(ledVermelho, LOW);
  
  	//passadeira
    delay(1000);
  	digitalWrite(red, LOW);
  	digitalWrite(green, HIGH);
	digitalWrite(buzz, HIGH);
  	delay(500);

}

void blink(){
	state=!state;
}
