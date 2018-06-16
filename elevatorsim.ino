//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// elevator_sim
// 
// Made by pofc24 pofc24
// License: CC-BY-SA 3.0
// Downloaded from: https://circuits.io/circuits/4049693-elevator_sim


int i,j;
int pinArray[]={8,9,10,11,12,13,14,15};
int matrix [3][8]={{0,1,0,1,0,0,0,0},
			      {1,1,0,0,1,1,1,0},
                  {1,1,0,1,1,0,1,0}};
int elevatornum=1;

void setup() {
  for(i=0;i<=7;i++){
      pinMode(pinArray[i], OUTPUT);
  }
  pinMode(4,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(6,INPUT);
  pinMode(7,INPUT);
}

void displayNumber(int num)
{
  		delay(1000);
    	for(j=0;j<=7;j++)
    	{
      		digitalWrite(pinArray[j],matrix[num-1][j]);
    	}
}

void loop() {
  
  if (digitalRead(4) == LOW)
  { 
    
  }
  if (digitalRead(3) == LOW)
  {
    if(elevatornum-2<0)// vai para baixo
    {
      digitalWrite(6,LOW);
      digitalWrite(7,HIGH);
      displayNumber(2);
      elevatornum=2;
      delay(2000);
    }
    /*else // vai para cima
    {
      
    }*/
    
  }
  if (digitalRead(2) == LOW)
  {
    
  }
}
