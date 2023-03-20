#include "iostream.h"
void main()
{
    int a,b,c;    //定义变量
    a=60;         //60的二进制:0011 1100
    b=13;         //30的二进制:0000 1100
    c=0;
    
    c=a&b;
    cout<<"a&b = "<<c<<"\n";
    
    c=a|b;
    cout<<"a|b = "<<c<<"\n";
    
    c=a^b;
    cout<<"a^b = "<<c<<"\n";
    
    c=a<<2;
    cout<<"a<<2 = "<<c<<"\n";
    
    c=a>>2;
    cout<<"a>>2 = "<<c<<"\n";
}
