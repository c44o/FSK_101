int potpin = 0 ;// define analog interface 0
int ledpin = 11 ;// define the digital interface 11 (PWM output)
int val = 0 ;// temporary values of the variables from the sensor
void setup ()
{
pinMode (ledpin, OUTPUT) ;// define the digital interface 11 as output
Serial.begin (9600) ;// set the baud rate to 9600
// NOTE: analog interface is automatically set to the input
}
void loop ()
{
val = analogRead (potpin) ;// read sensor analog values and assigned to val
Serial.println (val) ;// display val variable
analogWrite (ledpin, val / 4) ;// turn on the LED and set the brightness (PWM
output max 255)
delay (10) ;// delay of 0.01 seconds
}
