//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// Bingo
// 
// Made by 33959@ufp.edu.pt 33959@ufp.edu.pt
// License: CC-BY-SA 3.0
// Downloaded from: https://circuits.io/circuits/4010286-bingo


int i,j;
int pinArray[]={2,3,4,5,6,7,8,9};
int pinArray2[]={10,11,12,13,14,15,16,17};

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

int num,aux=80,num1=0;
int bingo_nums[80];
                   	
void setup() {
  for(i=0;i<=7;i++)
  {
    pinMode(pinArray[i],OUTPUT);
    pinMode(pinArray2[i],OUTPUT);
  }
}

void displayNumber(int num)
{
  delay(1000);
  if(num>=10)
  {
  	num1=num/10;
    num=num%10;
    	for(j=0;j<=7;j++)
    	{
      		digitalWrite(pinArray[j],matrix[num][j]);
          	digitalWrite(pinArray2[j],matrix[num1][j]);
    	}
    delay(1000);
  }
  else
  {
        for(j=0;j<=7;j++)
    	{
      		digitalWrite(pinArray[j],LOW);
          	digitalWrite(pinArray2[j],matrix[num][j]);
    	}
    delay(1000);
  }
}

void generateBingo(int *bingo_nums, int size)
{
  for(i=0;i<=size;i++)
  {
    bingo_nums[i]=i;
  }
}

void loop() {
  
  generateBingo(bingo_nums,80);
  
  for(i=0;i<=10;i++)
  {
    num=random(0,aux);
   	displayNumber(bingo_nums[num]);
    
    for(j=num;j<aux;j++)
  	{
    	bingo_nums[j]=bingo_nums[j+1];
  	}
    aux--;
  }
  
}
