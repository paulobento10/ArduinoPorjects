//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// RGB_full
// 
// Made by 33959@ufp.edu.pt 33959@ufp.edu.pt
// License: CC-BY-SA 3.0
// Downloaded from: https://circuits.io/circuits/4094303-rgb_full

int redPin = 3;
int greenPin = 6;
int bluePin = 5;

int i,j,k;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin,OUTPUT);
}

void redColor(int n)
{
  analogWrite(redPin,n);
}

void greenColor(int n)
{
  analogWrite(greenPin,n);
}

void blueColor(int n)
{
  analogWrite(bluePin,n);
}

void loop()
{
    for(i=0;i<=255;i++)
  	{
    	redColor(i);
      	delay(1);
      	for(j=i;j<=255;j++)
  		{
      		greenColor(j);
    		delay(1);
          	for(k=j;k<=255;k++)
  			{
      			blueColor(k);
    			delay(1);
        	}
        }
  	}
}
