//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// RGB_button
// 
// Made by 33959@ufp.edu.pt 33959@ufp.edu.pt
// License: CC-BY-SA 3.0
// Downloaded from: https://circuits.io/circuits/4303206-rgb_button

#include <IRremote.h>

const int RECV_PIN = 10;

IRrecv irrecv(RECV_PIN);

decode_results results;

int redPin = 6, greenPin = 3, bluePin = 5;

int red=255,blue=255,green=255;

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
  irrecv.blink13(true);
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

void loop() {
  if (irrecv.decode(&results)) {
   	// print the hexa value of the pressed button
    Serial.println(results.value, HEX);
    // compare the hexa of a pressed button
    if (results.value == 0xFD00FF)  {
      Serial.println("The on/off button have been pressed!");
      redColor(0);
      greenColor(255);
      blueColor(0);
      delay(1000);
    }
    if(results.value == 0xFD08F7){
      Serial.println("The 1 button have been pressed! Turn red");
      redColor(255);
      greenColor(0);
      blueColor(0);
      delay(1000);
    }
    if(results.value == 0xFD50AF){
      Serial.println("The up button have been pressed!");
      if(red<255){
        red++;
        Serial.println(red);
      	redColor(red);
      	greenColor(0);
      	blueColor(0);
      	delay(1000);
      }
    }
    if(results.value == 0xFD10EF){
      Serial.println("The down button have been pressed!");
      if(red>0){
        red--;
        Serial.println(red);
      	redColor(red);
      	greenColor(0);
      	blueColor(0);
      	delay(1000);
      }
    }
    
    if(results.value == 0xFD8877){
      Serial.println("The 2 button have been pressed! Turn green");
      redColor(0);
      greenColor(255);
      blueColor(0);
      delay(1000);
    }
        if(results.value == 0xFD50AF){
      Serial.println("The up button have been pressed!");
      if(green<255){
        green++;
        Serial.println(green);
      	redColor(0);
      	greenColor(green);
      	blueColor(0);
      	delay(1000);
      }
    }
    if(results.value == 0xFD10EF){
      Serial.println("The down button have been pressed!");
      if(green>0){
        green--;
        Serial.println(green);
      	redColor(0);
      	greenColor(green);
      	blueColor(0);
      	delay(1000);
      }
    }
    
    if(results.value == 0xFD48B7){
      Serial.println("The 3 button have been pressed! Turn blue");
      redColor(0);
      greenColor(0);
      blueColor(255);
      delay(1000);
    }
    
     if(results.value == 0xFD50AF){
      Serial.println("The up button have been pressed!");
      if(blue<255){
        blue++;
        Serial.println(blue);
      	redColor(0);
      	greenColor(0);
      	blueColor(blue);
      	delay(1000);
      }
    }
    if(results.value == 0xFD10EF){
      Serial.println("The down button have been pressed!");
      if(blue>0){
        blue--;
        Serial.println(blue);
      	redColor(0);
      	greenColor(0);
      	blueColor(blue);
      	delay(1000);
      }
    }
    
    irrecv.resume(); // Receive the next value
  }
}
