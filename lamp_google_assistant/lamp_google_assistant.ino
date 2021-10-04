#define BLYNK_PRINT Serial

#include <DHT.h>
#include <ESP8266WiFi.h> // file untuk modul wifi

char auth[] = "BBFF-0kFPjZRJqbINSZ3Z6F8MV4cWgIIlyB"; // token yang dikirim dari blynk ke email masing2
char ssid[] = "realme3";
char pass[] = "12345678";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);

}

void loop() {
  // put your main code here, to run repeatedly:
  Blynk.run();
  

}
