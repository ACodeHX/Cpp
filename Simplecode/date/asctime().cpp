#include <stdio.h>
#include <string.h>
#include <time.h>

int main()    //asctime()用法
{
   struct tm t;

   t.tm_sec    = 3;    //记录秒，范围0~59
   t.tm_min    = 11;    //记录分，范围0~60
   t.tm_hour   = 8;    //记录时，范围0~23
   t.tm_mday   = 28;    //记录一个月的天，范围1~31
   t.tm_mon    = 2;    //记录月份，范围1~11
   t.tm_year   = 89;    //记录年，从1900年开始的
   t.tm_wday   = 6;    //记录一个星期的多少天，范围0~6
   t.tm_year   =36;    
   t.tm_isdst  =5;    //夏令时

   puts(asctime(&t));
   
   return(0);
}
