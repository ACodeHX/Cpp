// Note:Your choice is C++ IDE
#include <iostream>
using namespace std;

int a, b, c;
void add()    //ѧϰʹ����ε����ⲿ����
{
    int a;
    a = 3;
    c = a + b;
}
void main()
{
    a = b = 4;
    add();
    cout <<"c��ֵ:" << c << endl;
}