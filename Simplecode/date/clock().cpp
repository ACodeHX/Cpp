// Note:Your choice is C++ IDE
#include <iostream>
#include <time.h>
#include <stdio.h>
using namespace std;
void main()    //clock()����������
{
    clock_t start_t,end_t;  //�������
    double tatol_t;
    int i;
    
    start_t=clock_t();
    printf("��������:start_t=%ld\n",start_t);
    printf("��ʼ��ѭ��:%ld\n",start_t);
    for(i=0;i<10000000;i++)
    {
    }
    end_t=clock();
    printf("������ѭ��:%ld\n",end_t);
    
    tatol_t=(double)(end_t-start_t)/CLOCKS_PER_SEC;    //CLOCKS_PER_SEC����1000000���ú�����Լÿ 72 ���ӻ᷵����ͬ��ֵ��
    printf("CPUռ��ʱ��:%f\n",tatol_t);    //�������Ͳ�Ҫ��
    cout<<"��������"<<endl;
}