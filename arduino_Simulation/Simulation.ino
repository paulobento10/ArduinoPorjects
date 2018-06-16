//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// Simulation_0
// 
// Made by 33959@ufp.edu.pt 33959@ufp.edu.pt
// License: CC-BY-SA 3.0
// Downloaded from: https://circuits.io/circuits/3951763-the-unnamed-circuit

// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int a=2;
int b=3;
int c=4;
int d=6;
int e=7;
int f=9;
int g=8;
int dp=5;

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(dp, OUTPUT);
}

void displayNumber(int num)
{
  switch(num)
  {
    case 0:
    		  //0
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(dp, LOW);
  delay(1000);
    break;
    
    case 1:
      //1
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(g, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(dp, LOW);
  delay(1000);
    break;
    
    case 2:
    
      //2
  
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(dp, LOW);
  delay(1000);
    break;
    
    case 3:
    
      
  //3
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(dp, LOW);
  delay(1000);
    break;
    
    case 4:
    
      //4
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(dp, LOW);
  delay(1000);
    break;
    
    case 5:
    
      //5
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(dp, LOW);
  delay(1000);
    break;
    
    case 6:
      //6
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(dp, LOW);
  delay(1000);
    break;
    
    default:
    
      digitalWrite(a, LOW);
  		digitalWrite(b, LOW);
  		digitalWrite(c, LOW);
  		digitalWrite(d, LOW);
  		digitalWrite(g, LOW);
  		digitalWrite(e, LOW);
  		digitalWrite(f, LOW);
  		digitalWrite(dp, HIGH);
  		delay(1000);
    break;
    
  }
  
}

// the loop routine runs over and over again forever:
void loop() {
  
  int num=random(0,7); //random, gera um numero aleatorio entre 0 e 7, excluindo 7
    displayNumber(num);
    delay(5000);
  //9
  /*
  digitalWrite(c, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(a, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(dp, LOW);
  delay(1000);*/
  
  //8
  /*
  digitalWrite(c, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(a, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(dp, LOW);
  delay(1000);/
  
  //7
  /*
  digitalWrite(c, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(a, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(f, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(dp, LOW);
  delay(1000);*/
  
  //6
  /*
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(dp, LOW);
  delay(1000);*/
  
  //5
  /*
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(dp, LOW);
  delay(1000);*/
  
  //4
  /*
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(dp, LOW);
  delay(1000);*/
     
  //3
  /*
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(dp, LOW);
  delay(1000);*/
  
	//2
  /*
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(dp, LOW);
  delay(1000);*/
  
  
   //1
  /*
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(g, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(dp, LOW);
  delay(1000);*/
  
  //0
  /*
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(dp, LOW);
  delay(1000);*/
    

  //dp
  /*
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(g, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(dp, HIGH);
  delay(1000);*/
}
