//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// Traffic light-portuguese_with_crosswalk
// 
// Made by 33959@ufp.edu.pt 33959@ufp.edu.pt
// License: CC-BY-SA 3.0
// Downloaded from: https://circuits.io/circuits/3990137-traffic-light-portuguese_with_crosswalk


int ledVermelho = 8, ledAmarelo=12, ledVerde=13;
int red=5,green=7,blue=6;

int matrix[2][3]={{1,0,0},
				  {0,0,1}};

int pins[]={5,6,7};
                  
int i,j;

void setup() {
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  
  for(i=0;i<3;i++)
  {
   pinMode(pins[i],OUTPUT); 
  }
}


void loop() {
  //Luz vermelho
  digitalWrite(ledVermelho, HIGH);
  delay(1000);
  //passadeira
  for(i=0;i<2;i++)
  {
    for(j=0;j<3;j++)
    {
      digitalWrite(pins[j],matrix[i][j]);
    }
    delay(5000);
  }
  
  
  digitalWrite(ledVermelho, LOW);
  
  //Luz verde
  digitalWrite(ledVerde, HIGH);
  delay(5000);
  digitalWrite(ledVerde, LOW);
  
  //Luz amarelo
  digitalWrite(ledAmarelo, HIGH);
  delay(1000);
  digitalWrite(ledAmarelo, LOW);
}
