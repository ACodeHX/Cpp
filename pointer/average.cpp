// Note:Your choice is C++ IDE
#include <iostream>
using namespace std;
double getavg(int *arr,int size);  //��������



int main()
{
    int balance[4]={10,88,6,44};   //���鶨��
    //cout<<balance;
    double avg;
    avg=getavg(balance,4);
    cout<<"ƽ���� = "<<avg<<endl;
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
