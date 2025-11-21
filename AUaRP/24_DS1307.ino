#include <DS1302.h>
#include <stdio.h>
#include <string.h>

uint8_t CE_PIN = 5;
uint8_t IO_PIN = 6;
uint8_t SCLK_PIN = 7;

char buf [50];
char day [10];

String comdata = "";
int numdata [7] = {0}, j = 0, mark = 0;


DS1302 rtc (CE_PIN, IO_PIN, SCLK_PIN);
void print_time ()
{
Time t = rtc.time ();
memset (day, 0, sizeof (day));
switch (t.day) 
{
case 1: strcpy (day, "Sunday"); break;
case 2: strcpy (day, "Monday"); break;
// other cases
}

void setup ()
{
  Serial.begin (9600);
  rtc.writeProtect (false);
  rtc.halt (false);
}

void loop () ()
{
  while(Serial.available()>0)
    {
      comdata+=char(Serial.read());
      delay(2);
      mark=1;
    }
  if (mark==1) 
  {
    Serial.print("You inputed:");
    Serial.println(comdata);
    for(int i=0;i<comdata.length();i++)
      {
        if(comdata[i]==',',||comdata[i]==0x10||comdata[i]==0x13)
        {
          j++;
        }
        else
        {
          numdata[j]=numdata[j]*10+(comdata[i]-'0');
        }
      }
  }
}
