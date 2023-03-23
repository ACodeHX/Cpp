#include <iostream>
using namespace std;
double getavg(int *arr,int size);  //函数声明



int main()
{
    int balance[4]={10,88,6,44};   //数组定义
    //cout<<balance;
    double avg;
    avg=getavg(balance,4);
    cout<<"平均数 = "<<avg<<endl;
    return 0;
    
}
double getavg(int *arr,int size)
{
	int i,sum=0;
	double avg;
	for(i=0;i<size;i++)
	{
		sum+=arr[i];	
	}
	avg=double(sum)/size;
	return avg;
}
