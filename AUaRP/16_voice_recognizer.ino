int sensorPint = A0;
int ledPin = 13;
int sensorValue = 0;

void setup () {
  pinMode (ledPin, OUTPUT);
  Serial.begin (9600);
}
