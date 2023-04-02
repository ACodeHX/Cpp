#include <iostream>
#include <time.h>
#include <stdio.h>
using namespace std;
void main()    //strftime()函数的用法
{
     time_t rawtime;
     struct tm *info;
     char buffer[80];
     time(&rawtime);
     info=localtime(&rawtime);
     
     
     strftime(buffer,80,"%Y-%m-%d %H:%M:%S",info);    //strftime()的说明符:%y是年，%m是月，%d是日,%H是小时，%M是分，%S是秒
     printf("格式化时间和日期:|%s|",buffer);         
}
