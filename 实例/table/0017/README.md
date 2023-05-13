### problem

学习使用如何调用外部函数

### analyde

null

### code
```cpp
#include <iostream>
using namespace std;

int a, b, c;
void add()    //学习使用如何调用外部函数
{
    int a;
    a = 3;
    c = a + b;
}
void main()
{
    a = b = 4;
    add();
    cout <<"c的值:" << c << endl;
}
```
