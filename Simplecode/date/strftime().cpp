// Note:Your choice is C++ IDE
#include <iostream>
#include <time.h>
#include <stdio.h>
using namespace std;
void main()    //strftime()�������÷�
{
	 time_t rawtime;
     struct tm *info;
     char buffer[80];
     time(&rawtime);
     info=localtime(&rawtime);
     
     
     strftime(buffer,80,"%Y-%m-%d %H:%M:%S",info);    //strftime()��˵����:%y���꣬%m���£�%d����,%H��Сʱ��%M�Ƿ֣�%S����
     printf("��ʽ��ʱ�������:|%s|",buffer);         
}