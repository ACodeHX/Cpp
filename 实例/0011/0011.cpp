// Note:Your choice is C++ IDE
#include <iostream>
using namespace std;

void main()
{
    float h, s;
    int i = 0;
    h = s = 100;
    h = h / 2; //��һ�η����߶�
    for (i = 2; i <= 10; i++)
    {
        s = s + 2 * h;
        h = h / 2;
    }
    printf("��10�����ʱ��������%f�ף���10�η�����%f��\n", s, h);
}