/* Note:Your choice is C IDE */
#include <iostream>
using namespace std;
    // 无参无返
void type1()
{
    cout<<"this is type1"<<endl;
}    
    // 无参有返
int type2()
{
    cout<<"this is type2 a="<<endl;
    return 1000;
}
    // 有参无返
void type3(int a)
{
    cout<<"this is type3 a="<<a<<endl;
}
    //有参有返
int type4(int a)
{
    cout<<"this is type4 a="<<a<<endl;
    return 100;
}
void main()
{
    type1();
    int num = type2();
    cout<<"type2 = "<<num<<endl;
    type3(100);
    int num1 = type4(1000);
    cout<<"type4 = "<<num1<<endl;
}