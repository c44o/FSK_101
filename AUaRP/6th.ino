int redLed = 10 ;
int yellowLed = 7 ;
int greenLed = 4 ;
void setup () 
{
  pinMode (redLed, OUTPUT) ;
  pinMode (yellowLed, OUTPUT) ;
  pinMode (greenLed, OUTPUT) ;
}

void loop () 
{
  digitalWrite (redLed, HIGH) ;
  delay (1000) ;
  digitalWrite (redLed, LOW) ;
  digitalWrite (yellowLet, HIGH) ;
  delay (200) ;
  digitalWrite (yellowLed, LOW) ;
  digitalWrite (greenLed, HIGH) ;
  delay (1000) ;
  digitalWrite (greenLed, LOW) ;
}

