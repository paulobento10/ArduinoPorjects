//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// Fade
// 
// Made by 33959@ufp.edu.pt 33959@ufp.edu.pt
// License: CC-BY-SA 3.0
// Downloaded from: https://circuits.io/circuits/4065933-fade


int led = 11 , i=0;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  for(i=0;i<=255;i++)
  {
    analogWrite(led,i);
    delay(10);
  }
  for(i=255;i>=0;i--)
  {
    analogWrite(led,i);
    delay(10);
  }
}
