//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// Led_scale_ldr
// 
// Made by 33959@ufp.edu.pt 33959@ufp.edu.pt
// License: CC-BY-SA 3.0
// Downloaded from: https://circuits.io/circuits/4218636-led_scale_ldr

int led1 = 11,led2 = 10,led3 = 6,led4 = 5,led5 = 3;
int ldr=A0, state=0,aux=0;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(ldr, INPUT);
  Serial.begin(9600);
}

void loop() {

  aux=analogRead(ldr);
  state=map(aux, 0, 679, 0, 5 );
      Serial.println(state);
  Serial.println(aux);

  if(state==0){
   	digitalWrite(led1, LOW);digitalWrite(led2, LOW);digitalWrite(led3, LOW);digitalWrite(led4, LOW);digitalWrite(led5, LOW);
    delay(1000);
  }
  else if(state==1){
  	digitalWrite(led1, HIGH);digitalWrite(led2, LOW);digitalWrite(led3, LOW);digitalWrite(led4, LOW);digitalWrite(led5, LOW);
    delay(1000);
  }
  else if(state==2){
  	digitalWrite(led1, HIGH);digitalWrite(led2, HIGH);digitalWrite(led3, LOW);digitalWrite(led4, LOW);digitalWrite(led5, LOW);
    delay(1000);
  }
  else if(state==3){
  	digitalWrite(led1, HIGH);digitalWrite(led2, HIGH);digitalWrite(led3, HIGH);digitalWrite(led4, LOW);digitalWrite(led5, LOW);
    delay(1000);
  }
  else if(state==4){
  	digitalWrite(led1, HIGH);digitalWrite(led2, HIGH);digitalWrite(led3, HIGH);digitalWrite(led4, HIGH);digitalWrite(led5, LOW);
    delay(1000);
  }
  else if(state==5){
  	digitalWrite(led1, HIGH);digitalWrite(led2, HIGH);digitalWrite(led3, HIGH);digitalWrite(led4, HIGH);digitalWrite(led5, HIGH);
    delay(1000);
  }
}
