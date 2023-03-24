// Note:Your choice is C++ IDE
#include <iostream>
using namespace std;    //两种常量定义方法
#define day 7    //#define 定义
int main()    
{
	//day = 14;//语法错误
    cout<<day<<endl;
    
    const month=12;
    //month=24;    //在定义就会出错
    cout<<month;
    
    return 0;
}