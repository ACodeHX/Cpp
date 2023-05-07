// Note:Your choice is C++ IDE
#include <iostream>
using namespace std;

int fact(int j)
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
void main()    //ÀûÓÃµİ¹éÇó½×³Ë
{
    int i;
    int fact(int);
    for (i = 0; i < 6; i++)
    {
        printf("%d!=%d\n", i, fact(i));
    }
}
