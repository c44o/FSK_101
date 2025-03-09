int buzzer = 8 ;

void setup () 
{
  pinMode (buzzer, OUTPUT) ;
}

void loop () 
{
  unsigned char i, j ;
  while (1) 
    {
      for (i = 0; i <80; i++)
        {
          digitalWrite (buzzer, HIGH) ;
          delay (2) ;
          digitalWrite (buzzer, LOW) ;
          delay (6);
        }
      for (i = 0; i <100; i++) 
      {
        digitalWrite (buzzer, HIGH) ;
        delay (2) ;
        digitalWrite (buzzer, LOW) ;
        delay (2) ;
        digitalWrite (buzzer, HIGH) ;
        delay (10) ;
        digitalWrite (buzzer, LOW) ;
        delay (10) ;
      }
    }
}
