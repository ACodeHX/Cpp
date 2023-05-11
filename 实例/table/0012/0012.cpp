#include <iostream>
using namespace std;
int fact(int j)    //利用递归求阶乘
{
    int sum;
    if (j == 0) {
        sum = 1;
    }
    else {
        sum = j * fact(j - 1);
    }
    return sum;
}
void main()
{
    int i;
    int fact(int);
    for (i = 0; i < 6; i++)
    {
        printf("%d!=%d\n", i, fact(i));
    }
}
