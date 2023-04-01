// Note:Your choice is C++ IDE
#include <iostream>
#include <stdio.h>
#include <time.h>
using namespace std;
void main()    //C 库函数 time_t time(time_t *seconds) 返回自纪元 Epoch（1970-01-01 00:00:00 UTC）起经过的时间，以秒为单位。
{
    time_t seconds;
    seconds=time(NULL);
    printf("时间:%ld\n",seconds/3600);
    //return(0);
}