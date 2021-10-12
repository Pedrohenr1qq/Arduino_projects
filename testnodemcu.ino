
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

#define BLYNK_PRINT Serial

char username[] = "Thiago Elias";
char password[] = "91350708abc";

char token[] = "0coFyG4-uqm_nKcSmd6PbHQ_aWcVBwj6";
//#define led 13

#define ldr A0

int r = 0;
/*


void ldrled(){
  r = analogRead(ldr);

  Blynk.virtualWrite(V6,r);

  //int l = r <= 200 ? LOW:HIGH;

  analogWrite(13,r);

  //Serial.println("sensor: " + r);
  
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);


  Blynk.begin(token,username,password);

}


void loop() {
  // put your main code here, to run repeatedly:
  Blynk.run();
   ldrled();
  }
