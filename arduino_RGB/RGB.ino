//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// RGB
// 
// Made by 33959@ufp.edu.pt 33959@ufp.edu.pt
// License: CC-BY-SA 3.0
// Downloaded from: https://circuits.io/circuits/3989800-rgb


int red = 13;
int blue=12;
int green=11;

int matrix[8][3]={{0,0,0},
				  {0,0,1},
				  {0,1,0},
				  {0,1,1},
				  {1,0,0},
				  {1,0,1},
				  {1,1,0},
				  {1,1,1}};
int pins[]={11,12,13};
                  
int i,j;                  
                  
void setup() {
  for(i=0;i<3;i++)
      {
        pinMode(pins[i],OUTPUT);
      }
}

void loop() {
  
  for(i=0;i<8;i++)
  {
    for(j=0;j<3;j++)
      {
        digitalWrite(pins[j],matrix[i][j]);
      }
    delay(1000);
  }
  
}
