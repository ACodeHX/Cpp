#include <iostream>
using namespace std;
void sawp(int num1,int num2)    //利用调用算四则运算
{
    int num3;
    num3 = num1 +num2;
    cout<<"a+b = "<<num3<<endl;

    num3 = num1-num2;
    cout<<"a-b = "<<num3<<endl;

    num3 = num1/num2;
    cout<<"a/b = "<<num3<<endl;

    num3 = num1%num2;
    cout<<"a%b = "<<num3<<endl;
}
void main()    //
{
    int a=20;
    int b=10;
    sawp(a,b);
}
