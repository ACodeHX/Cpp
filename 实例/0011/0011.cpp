#include <iostream>
using namespace std;
void main()    //自由落体
{
    float h, s;
    int i = 0;
    h = s = 100;
    h = h / 2; //第一次反弹高度
    for (i = 2; i <= 10; i++)
    {
        s = s + 2 * h;
        h = h / 2;
    }
    printf("第10次落地时，共经过%f米，第10次反弹高%f米\n", s, h);
}
