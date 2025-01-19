// Project 1

void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  int sensorValue = AnalogRead(A0);
  Serial.println(sensorValue);
  delay(100);
}
