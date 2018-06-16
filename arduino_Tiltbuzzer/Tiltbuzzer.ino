//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// Tilt buzzer
// 
// Made by 33959@ufp.edu.pt 33959@ufp.edu.pt
// License: CC-BY-SA 3.0
// Downloaded from: https://circuits.io/circuits/4265080-tilt-buzzer

int tilt = 13, buzzer=12;

void setup() {
  pinMode(tilt, INPUT);
  pinMode(buzzer,OUTPUT);
}

void loop() {
  if(digitalRead(tilt)==HIGH){
  digitalWrite(buzzer, LOW);
  delay(1000);
  }
  digitalWrite(buzzer, HIGH);
}
