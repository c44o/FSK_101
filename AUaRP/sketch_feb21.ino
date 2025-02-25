int val ; // to store incoming serial data - to store 'R'
int ledpin = 13 ; //define the digital interface 13 - assign digital pin 13 to 'ledpin'

void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600) ;
  pinMode (ledpin, OUTPUT) ;

}


void loop() {
  // put your main code here, to run repeatedly:
  val = Serial.read () ;
  if (val == 'R') 
  {
    digitalWrite (ledpin, HIGH) ;
    delay (500) ;
    digitalWrite (ledpin, LOW) ;
    delay (500) ;
    Serial.println ("Hello W!") ;
  }
}
