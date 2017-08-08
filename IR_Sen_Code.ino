const int analogInPin0 = 32;  
const int analogInPin1 = 34; 
const int analogInPin2 = 36;
const int analogInPin3 = 38;

#define qtrLed 8 // LED of IR

int sensorValue0 = 0;
int sensorValue1 = 0;
int sensorValue2 = 0;
int sensorValue3 = 0;// value read from the pot

int outputValue = 0;        

void setup() {
 
  Serial.begin(9600); 
  digitalWrite(qtrLed, HIGH);
}

void loop() {

  sensorValue0 = analogRead(analogInPin0);
  sensorValue1 = analogRead(analogInPin1);
  sensorValue2 = analogRead(analogInPin2);
  sensorValue3 = analogRead(analogInPin3);

  //Serial.print("sensor = " );                       
  Serial.println(sensorValue0);
  Serial.print(" ");                       
  Serial.println(sensorValue1);
  Serial.print(" ");                       
  Serial.println(sensorValue2);
  Serial.print(" ");                       
  Serial.println(sensorValue3);

  
  delay(500);                     
}

