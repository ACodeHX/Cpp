### problem

一只小猴子一天摘了许多桃子，第一天吃了一半，然后忍不住又吃了一个；第二天又吃了一半，再加上一个；后面每天都是这样吃。到第10天的时候，
小猴子发现只有一个桃子了。问小猴子第一天共摘了多少个桃子

### analyse

null

### code

```Cpp
#include <iostream>
using namespace std;
int main()    //猴子偷桃
{
    int x, y, n;
    for (x=1, n=0; n<9; y=(x+1)*2, x=y, n++);
        cout<<"第一天共摘的桃子数量为 "<<x<<endl;
    return 0;
}
```
