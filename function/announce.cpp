#include <iostream>
using namespace std;
//声明
int type(int a,int b)
{
    return a<b?a:b;
}
void main()
{
    int a=10;
    int b=20;
    cout<<type(a,b)<<endl;
}