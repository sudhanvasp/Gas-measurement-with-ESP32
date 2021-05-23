// Potentiometer is connected to GPIO 34 (Analog ADC1_CH6) 
const int Gas2Pin = 13;
const int Gas4Pin = 12;
const int Gas5Pin = 14;
const int Gas3Pin = 4;
const int Gas6Pin = 27;
const int Gas7Pin = 2;
const int Gas8Pin = 15;
// variable for storing the potentiometer value
int GasValue2 = 0;
int GasValue3 = 0;
int GasValue4 = 0;
int GasValue5 = 0;
int GasValue6 = 0;
int GasValue7 = 0;
int GasValue8 = 0; 

void setup() {
  Serial.begin(115200);
  delay(1000);
}

void loop() {
  // Reading potentiometer value
  GasValue2 = analogRead(Gas2Pin);
  GasValue3 = analogRead(Gas3Pin);
  GasValue4 = analogRead(Gas4Pin);
  GasValue5 = analogRead(Gas5Pin);
  GasValue6 = analogRead(Gas6Pin);
  GasValue7 = analogRead(Gas7Pin);
  GasValue8 = analogRead(Gas8Pin);
  Serial.println("2 the reading is ");
  Serial.print(GasValue2);
  
  Serial.print("3 the reading is ");
  Serial.println(GasValue3);
  Serial.print("4 the reading is ");
  Serial.println(GasValue4);
  Serial.print("5 the reading is ");
  Serial.println(GasValue5);
  Serial.print("6 the reading is ");
  Serial.println(GasValue6);
  Serial.print("7 the reading is ");
  Serial.println(GasValue7);
  Serial.print("8 the reading is ");
  Serial.println(GasValue8);
  Serial.println("");
  Serial.print(GasValue2);
  Serial.print(" ");
  Serial.print(GasValue3);
  Serial.print(" ");
  Serial.print(GasValue4);
  Serial.print(" ");
  Serial.print(GasValue5);
  Serial.print(" ");
  Serial.print(GasValue6);
  Serial.print(" ");
  Serial.print(GasValue7);
  Serial.print(" ");
  Serial.print(GasValue8);
  delay(1000);
}
