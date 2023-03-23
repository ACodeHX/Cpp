#include <iostream>
using namespace std;
int main()    //c++指针
{
    int null = 10;
    int *i;
    
    i=&null;    //在指针变量中存储 var 的地址
    
    cout<<null<<endl;    //输出在指针变量中存储的值
    
    cout<<*i<<endl;    //访问指针中地址的值
    
    cout<<&null<<endl;    //输出变量的地址
    
    cout<<&i<<endl;    //访问指针中的地址
    
    return 0;
}
