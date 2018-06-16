//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// ReadAngle&TurnServo
// 
// Made by 33959@ufp.edu.pt 33959@ufp.edu.pt
// License: CC-BY-SA 3.0
// Downloaded from: https://circuits.io/circuits/4285815-the-unnamed-circuit

#include <Servo.h>

Servo myservo;
int incommingByte=0;

void setup() {
  myservo.attach(14);
  Serial.begin(9600);
}

void loop() {
  
  if(Serial.available()>0){
    incommingByte=Serial.parseInt();
    Serial.print("I received: ");
    Serial.println(incommingByte,DEC);
  }
  myservo.write(incommingByte);
  delay(1000);
}
