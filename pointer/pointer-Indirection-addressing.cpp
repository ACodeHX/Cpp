#include <iostream>
using namespace std;
void main()
{
    int i;
    int *ptr;
    int **pptr;
    
    i=100;
    
    ptr=&i;    // 获取 var 的地址
    
    pptr=&ptr;    // 使用运算符 & 获取 ptr 的地址
    
    cout<<"输入i的地址:"<<&i<<endl;
    cout<<"输入ptr的地址:"<<ptr<<endl;
    cout<<"输入pptr的地址:"<<pptr<<endl;
    
    cout<<"输入i的值:"<<i<<endl;
    cout<<"输入ptr的值:"<<*ptr<<endl;
    cout<<"输入pptr的值:"<<**pptr<<endl;
    
   
}
