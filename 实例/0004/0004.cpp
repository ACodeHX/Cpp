#include <iostream>
using namespace std;
void sawp(int num1,int num2)
{
    int temp;
    cout<<num1<<endl;
    cout<<num2<<endl;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout<<num1<<endl;
    cout<<num2<<endl;
}
void main()    //
{
    int a=10;
    int b=20;
    sawp(a,b);
}
