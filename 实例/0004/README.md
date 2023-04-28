### problem

练习调用

### analyde

null

### code
```cpp
#include <iostream>
using namespace std;
void sawp(int num1,int num2)    //练习调用
{
    int temp;
    cout<<"交换前a="<<num1<<endl;
    cout<<"交换前b="<<num2<<endl;

    temp = num1;
    num1 = num2;    //交换
    num2 = temp;

    cout<<"交换后a="<<num1<<endl;
    cout<<"交换后b="<<num2<<endl;
}
void main()
{
    int a=0;
    int b=0;
    cout<<"输入a的值:"<<endl;
    cin>>a;
    cout<<"输入b的值:"<<endl;
    cin>>b;
    sawp(a,b);
}
```
