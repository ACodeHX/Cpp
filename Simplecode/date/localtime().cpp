#include <iostream>
#include <time.h>
using namespace std;
void main()    //localtime()的用法
{
    time_t rawtime;
    struct tm *info;
        
    time(&rawtime);
    info=localtime(&rawtime);
    
    printf("当前的时间和日期:%s",asctime(info));
    
}
