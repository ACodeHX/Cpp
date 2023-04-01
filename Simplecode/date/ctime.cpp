#include <iostream>
#include <time.h>
using namespace std;
int main()    //利用ctime获得当前时间
{
    time_t curtime;
    time(&curtime);
    printf("当前时间:%s\n",ctime(&curtime));
    
    
}
