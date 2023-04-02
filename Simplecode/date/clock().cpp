// Note:Your choice is C++ IDE
#include <iostream>
#include <time.h>
#include <stdio.h>
using namespace std;
void main()    //clock()函数的作用
{
    clock_t start_t,end_t;  //定义变量
    double tatol_t;
    int i;
    
    start_t=clock_t();
    printf("程序启动:start_t=%ld\n",start_t);
    printf("开始大循环:%ld\n",start_t);
    for(i=0;i<10000000;i++)
    {
    }
    end_t=clock();
    printf("结束大循环:%ld\n",end_t);
    
    tatol_t=(double)(end_t-start_t)/CLOCKS_PER_SEC;    //CLOCKS_PER_SEC等于1000000，该函数大约每 72 分钟会返回相同的值。
    printf("CPU占用时间:%f\n",tatol_t);    //数据类型不要错
    cout<<"结束进程"<<endl;
}