### problem

练习函数调用

### analyde

null

### code
```
#include <iostream>
using namespace std;
void hello_world(void)    //练习调用
{
    printf("Hello, world!\n");
}
void three_hellos(void)
{
    int counter;
    for (counter = 1; counter <= 3; counter++)
        hello_world();/*调用此函数*/
}
int main(void)
{
    three_hellos();/*调用此函数*/
}
```
