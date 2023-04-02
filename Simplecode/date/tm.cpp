// Note:Your choice is C++ IDE
#include <iostream>
#include <ctime>
using namespace std;
void main()    //使用tm结构格式化时间
{
	 time_t now=time(0);
	 cout<<now<<endl;
	 
	 tm *ltm=localtime(&now);
	 
	 cout<<1900+ltm->tm_year<<"年";    //tm_year获得年
	 cout<<1+ltm->tm_mon<<"月";    //tm_mon获得月
	 cout<<ltm->tm_mday<<"日";    //tm_mday获得日
	 cout<<"\t"<<ltm->tm_hour<<":";    //tm_hour获得时
	 cout<<ltm->tm_min<<":";    //tm_min获得分
	 cout<<ltm->tm_sec;    //tm_sec获得秒 
}