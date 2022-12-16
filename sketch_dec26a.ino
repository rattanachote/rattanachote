const int analogInPin = A0;
const int relay = 2;

int sensorValue = 0;        
int outputValue = 0;        

void setup() {
  Serial.begin(9600);
  pinMode(relay, OUTPUT);
}

void loop() {
  sensorValue = analogRead(analogInPin);
  outputValue = map(sensorValue, 0, 1023, 100, 0);

  Serial.print("Soil Moisture = ");
  Serial.print(outputValue);
  Serial.println(" %");

  if (outputValue <= 40) {  
    digitalWrite(relay, HIGH);
  }

  else {
    digitalWrite(relay, LOW);
  }
  delay(1000);
}
