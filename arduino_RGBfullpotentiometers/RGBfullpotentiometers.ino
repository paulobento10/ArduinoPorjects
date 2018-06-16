//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// RGB_full_potentiometers
// 
// Made by 33959@ufp.edu.pt 33959@ufp.edu.pt
// License: CC-BY-SA 3.0
// Downloaded from: https://circuits.io/circuits/4117674-rgb_full_potentiometers

int redPin = 3;
int greenPin = 6;
int bluePin = 5;
int w1 = 14; //potentiometer attatched to the red pin
int w2 = 15; //potentiometer attatched to the green pin
int w3 = 16; //potentiometer attatched to the blue pin
int red;
int green;
int blue;
 
void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}
 
void loop()
{
  red = (255 - map( analogRead(w1), 0, 1024, 0, 255 ) ); //255 - o valor mapeado do potenciometro resulta num valor atribuido a variavel que representa a cor desejada
  blue = (255 - map( analogRead(w2), 0, 1024, 0, 255 ) );
  green = (255 - map( analogRead(w3), 0, 1024, 0, 255 ) );
 
  analogWrite(redPin, red); //atribui a cor "calculada", anteriormente, ao pino correspondente do RGB e mostra-a
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
 
}
