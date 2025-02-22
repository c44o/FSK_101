int ledpin = 13 ;// define the digital interface 13
void setup ()
{
pinMode (ledpin, OUTPUT) ;// set the digital output interface 13 is, Arduino, we
use the I / O port should be carried out like this definition.
}
void loop ()
{
digitalWrite (ledpin, HIGH) ;// lit Digital 13 LED.
delay (1000);
digitalWrite (ledpin, LOW) ;// Off Digital 13 LED
delay (1000);
}
