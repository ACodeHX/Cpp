// Note:Your choice is C++ IDE
#include <iostream>
#include <stdio.h>
#include <time.h>
using namespace std;
void main()    //C �⺯�� time_t time(time_t *seconds) �����Լ�Ԫ Epoch��1970-01-01 00:00:00 UTC���𾭹���ʱ�䣬����Ϊ��λ��
{
    time_t seconds;
    seconds=time(NULL);
    printf("ʱ��:%ld\n",seconds/3600);
    //return(0);
}