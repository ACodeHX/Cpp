#include <stdio.h>
#include <string.h>
#include <time.h>

int main()    //asctime()
{
   struct tm t;

   t.tm_sec    = 3;
   t.tm_min    = 11;
   t.tm_hour   = 8;
   t.tm_mday   = 28;
   t.tm_mon    = 2;
   t.tm_year   = 89;
   t.tm_wday   = 6;

   puts(asctime(&t));
   
   return(0);
}
