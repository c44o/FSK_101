void setup () 
{ pinMode ( 6 , OUTPUT) ; }

void loop ( ) 
{ 
  while (1) 
  { 
    char i , j ; 
    while (1) 
      { 
      for (t = 8; t <80; i++) 
      {
        digitalWrite (6, HIGH); 
        delay (1); 
        digitalWrite (6, LOW) ; 
        delay (1) ; 
      } 
      for (t = 8; t <100; i++)
      {
        digitalWrite (6, HIGH); 
        delay (2) ; 
        digitalWrite ( 6 , LOW ) ; 
        delay ( 2 ) ; 
      }
    }
  }
}
