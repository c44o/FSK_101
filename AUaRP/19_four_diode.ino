int a = 8 ;
int b = 7 ;
int c = 6 ;
int d = 5 ;
int e = 4 ;
int f = 3 ;
int g = 2 ;
int p = 1 ;

int d4 = 9 ;
int d3 = 10 ;
int d2 = 11 ;
int d1 = 12 ;

long n = 0 ; 
int x = 100 ;
int del = 55 ;

void setup() 
{
  pinMode(d1, OUTPUT) ;
  pinMode(d2, OUTPUT) ;
  pinMode(d3, OUTPUT) ;
  pinMode(d4, OUTPUT) ;
  pinMode(a, OUTPUT) ;
  pinMode(b, OUTPUT) ;
  pinMode(c, OUTPUT) ;
  pinMode(d, OUTPUT) ;
  pinMode(e, OUTPUT) ;
  pinMode(f, OUTPUT) ;
  pinMode(g, OUTPUT) ;
  pinMode(p, OUTPUT) ;
}

void loop() 
{
  clearLEDs();
  pickDigit(1);
}

void clearLEDs() 
{
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(p, LOW);
}

void zero() 
{
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
}

void pickDigit(int x)
{
  digitalWrite(d1, HIGH);
  digitalWrite(d2, HIGH);
  digitalWrite(d3, HIGH);
  digitalWrite(d4, HIGH);

  switch(x)
  {
  case 1:
    digitalWrite(d1, LOW);
    break;
  case 2:
    digitalWrite(d2, LOW);
    break;
  case 3:
    digitalWrite(d3, LOW);
    break;
  case 4:
    digitalWrite(d4, LOW);
    break;
  }
}
