// Note:Your choice is C++ IDE
#include <iostream>
#include <time.h>
//#include <ctime>
using namespace std;
void main()    //localtime���÷�
{
    time_t rawtime;
    struct tm *info;
    //char buffer[80];
    
    time(&rawtime);
    info=localtime(&rawtime);
    
    printf("��ǰ��ʱ�������:%s",asctime(info));
    
}