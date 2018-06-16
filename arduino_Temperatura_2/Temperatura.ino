//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// Temperatura
// 
// Made by 33959@ufp.edu.pt 33959@ufp.edu.pt
// License: CC-BY-SA 3.0
// Downloaded from: https://circuits.io/circuits/4379798-temperatura

int temperatura= A5;
String ssid     = "Simulator Wifi";
String password = "";


void setup()
{
  	pinMode(temperatura, INPUT);
    Serial.begin(115200);  	//Start the serial connection
  
  	Serial.println("AT"); // Send an AT comand
  	delay(5000);
  
  	pinMode(13, OUTPUT);
  	digitalWrite(13, LOW);
  
  
  	if(!connectWiFi()){
  		digitalWrite(13, HIGH);
  	}
}
 
void loop()
{
  	int reading = analogRead(temperatura);  
 	float voltage = reading * 5.0;
 	voltage /= 1024.0; 

 	Serial.print(voltage); 
 	Serial.println(" volts");
 
 	float temperatureC = (voltage - 0.5) * 100 ;
  	Serial.print(temperatureC); 
 	Serial.println(" temperature");
 	delay(5000);
  
  
   
  	updateTemp(temperatureC);
 	delay(5000);
}



// Update the temperatue via a Get Request
void updateTemp(float tenmpF){
  // send an AT command -> AT+CIPSTART="TCP","api.thingspeak.com",80; 
  String cmd = "AT+CIPSTART=\"TCP\",\"api.thingspeak.com\",80";
  Serial.println(cmd);
  
  // if response contains error -> return ending the updateTemp function
  if(Serial.find("error")){
    return;
  }
  else{  
  	String cmd3 = "GET /update?key=K4ZLHJ4E5N3RX721&field1=";
    cmd3+=temperatura;
    cmd3+=" HTTP/1.1 Host: api.thingspeak.com\r\n\r\n";
    String cmd2= "AT+CIPSEND=";
    cmd2+=cmd3.length();
    Serial.println(cmd2);
    if(!Serial.find(">")){
      Serial.println("AT+CIPCLOSE");
      return;
    }else{
      Serial.println(cmd3);
    }
  }
  // else send the AT command -> AT+CIPSEND=XX , where "XX" corresponds to the string lenght of the next message
  // 	if response not contains '>' -> send the AT+CIPCLOSE, closing the communication and return ending the updateTemp function
  //	else send the GET request -> GET /update?key=XXXXXXXXXXXXXXXXX&field1=TTTTT HTTP/1.1 Host: api.thingspeak.com (this message should end up twice with carriage return and new line - "\r\n\r\n")
  
  // example of possible exchanged communications:
  // -> AT+CIPSTART="TCP","api.thingspeak.com",80 
  // -> AT+CIPSEND=84 
  // -> GET /update?key=3S314320UUP7MIGX&field1=24.70 HTTP/1.1 Host: api.thingspeak.com 
  // (\r\n\r\n are not shown but they are included in 84!)
}

// Configure the WIFI via AT command -> AT+CWJAP="Simulator Wifi","" 
// Return true when gets the "OK" response
boolean connectWiFi(){
  String cmd="AT+CWJAP=\"";
  cmd+=ssid;
  cmd+="\",\"";
  cmd+=password;
  cmd+="\"";
  Serial.println(cmd);
  
  delay(5000);
  if(Serial.find("OK")){
    return true;
  }else{
    return false;
  }
}
