//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// Traffic light-UK
// 
// Made by 33959@ufp.edu.pt 33959@ufp.edu.pt
// License: CC-BY-SA 3.0
// Downloaded from: https://circuits.io/circuits/3918257-traffic-light-uk

// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int ledVermelho = 8, ledAmarelo=12, ledVerde=13;

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  //Luz verde
  digitalWrite(ledVerde, HIGH);    // turn the LED off by making the voltage LOW
  delay(2000);
  digitalWrite(ledVerde, LOW);
  
  //Luz amarelo
  digitalWrite(ledAmarelo, HIGH);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second
  digitalWrite(ledAmarelo, LOW);
  
  //Luz vermelho
  digitalWrite(ledVermelho, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2000);               // wait for a second
  digitalWrite(ledVermelho, LOW);
  
  //Luz vermelha e amarela ligadas ao mesmo tempo
   digitalWrite(ledVermelho, HIGH);
   digitalWrite(ledAmarelo, HIGH);
   delay(2000);
   digitalWrite(ledVermelho, LOW);
   digitalWrite(ledAmarelo, LOW);
  
}
