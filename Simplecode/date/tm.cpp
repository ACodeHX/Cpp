// Note:Your choice is C++ IDE
#include <iostream>
#include <ctime>
using namespace std;
void main()    //ʹ��tm�ṹ��ʽ��ʱ��
{
	 time_t now=time(0);
	 cout<<now<<endl;
	 
	 tm *ltm=localtime(&now);
	 
	 cout<<1900+ltm->tm_year<<"��";    //tm_year�����
	 cout<<1+ltm->tm_mon<<"��";    //tm_mon�����
	 cout<<ltm->tm_mday<<"��";    //tm_mday�����
	 cout<<"\t"<<ltm->tm_hour<<":";    //tm_hour���ʱ
	 cout<<ltm->tm_min<<":";    //tm_min��÷�
	 cout<<ltm->tm_sec;    //tm_sec����� 
}