/*************************************************************
  Download latest Blynk library here:
    https://github.com/blynkkk/blynk-library/releases/latest

  Blynk is a platform with iOS and Android apps to control
  Arduino, Raspberry Pi and the likes over the Internet.
  You can easily build graphic interfaces for all your
  projects by simply dragging and dropping widgets.

    Downloads, docs, tutorials: http://www.blynk.cc
    Sketch generator:           http://examples.blynk.cc
    Blynk community:            http://community.blynk.cc
    Follow us:                  http://www.fb.com/blynkapp
                                http://twitter.com/blynk_app

  Blynk library is licensed under MIT license
  This example code is in public domain.

 *************************************************************
  This example runs directly on ESP32 chip.

  Note: This requires ESP32 support package:
    https://github.com/espressif/arduino-esp32

  Please be sure to select the right ESP32 module
  in the Tools -> Board menu!

  Change WiFi ssid, pass, and Blynk auth token to run :)
  Feel free to apply it to any other example. It's simple!
 *************************************************************/

/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial


#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
BlynkTimer timer;
// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "##############";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "##############";
char pass[] = "####################";

const int Gas2Pin = 13;
const int Gas4Pin = 12;
const int Gas5Pin = 14;
const int Gas3Pin = 4;
const int Gas6Pin = 27;
const int Gas7Pin = 2;
const int Gas8Pin = 15;
// variable for storing the Gas value

int GasValue2 = 0;
int GasValue3 = 0;
int GasValue4 = 0;
int GasValue5 = 0;
int GasValue6 = 0;
int GasValue7 = 0;
int GasValue8 = 0; 

void myTimerEvent()
{ GasValue2 = analogRead(Gas2Pin);
  GasValue3 = analogRead(Gas3Pin);
  GasValue4 = analogRead(Gas4Pin);
  GasValue5 = analogRead(Gas5Pin);
  GasValue6 = analogRead(Gas6Pin);
  GasValue7 = analogRead(Gas7Pin);
  GasValue8 = analogRead(Gas8Pin);
  // You can send any value at any time.
  // Please don't send more that 10 values per second.
  Blynk.virtualWrite(V2, GasValue2);
  Blynk.virtualWrite(V3, GasValue3);
  Blynk.virtualWrite(V4, GasValue4);
  Blynk.virtualWrite(V5, GasValue5);
  Blynk.virtualWrite(V6, GasValue6);
  Blynk.virtualWrite(V7, GasValue7);
  Blynk.virtualWrite(V8, GasValue8);
  
  
}

void setup()
{
  // Debug console
  Serial.begin(115200);

  Blynk.begin(auth, ssid, pass, "49.229.108.138", 8080);
  timer.setInterval(1000L, myTimerEvent);
}

void loop()
{
  Blynk.run();
  timer.run();
}
