// Note:Your choice is C++ IDE
#include <iostream>
#include <time.h>
using namespace std;
int main()    //����ctime��õ�ǰʱ��
{
    time_t curtime;
    time(&curtime);
    printf("��ǰʱ��:%s\n",ctime(&curtime));
    
    
}