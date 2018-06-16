//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// Simulation_0_matrix
// 
// Made by 33959@ufp.edu.pt 33959@ufp.edu.pt
// License: CC-BY-SA 3.0
// Downloaded from: https://circuits.io/circuits/3955507-the-unnamed-circuit


int a=2;
int b=3;
int c=5;
int d=6;
int e=7;
int f=9;
int g=8;
int dp=4;

int i,j;
int pinArray[]={2,3,4,5,6,7,8,9};
int matrix [10][8]={{1,1,0,1,0,0,1,1},
			     	{1,1,0,1,1,1,1,1},
			     	{1,1,0,1,0,0,0,0},
			     	{1,0,0,1,1,1,1,1},
			     	{1,0,0,1,1,0,1,1},
			     	{0,1,0,1,0,0,1,1},
			     	{1,1,0,1,1,0,1,0},
			     	{1,1,0,0,1,1,1,0},
			     	{0,1,0,1,0,0,0,0},
			     	{1,1,0,1,1,1,0,1}};
  

void setup() {
  for(i=0;i<9;i++)
  {
    pinMode(pinArray[i],OUTPUT);
  }
}

void loop() {

                  
  for(i=0;i<10;i++)
  {
    delay(1000);
    for(j=0;j<=9;j++)
    {
      digitalWrite(pinArray[j],matrix[i][j]);
    }
  }
}
