// Note:Your choice is C++ IDE
#include <iostream>
#include <time.h>
//#include <ctime>
using namespace std;
void main()    //localtime的用法
{
    time_t rawtime;
    struct tm *info;
    //char buffer[80];
    
    time(&rawtime);
    info=localtime(&rawtime);
    
    printf("当前的时间和日期:%s",asctime(info));
    
}