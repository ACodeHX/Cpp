#include <iostream>
using namespace std;
void main()
{
	int arr[5] = {1,2,3,4,5};
	int i = 0;
	cout<<"逆序前:";
    for(i=0;i<5;i++)
	{
		cout<<arr[i];
	}
	cout<<endl;
	int start = 0;
	int end = sizeof(arr)/sizeof(arr[0])-1;    //数组长度
	int temp = 0;

	while(start<end)
	{
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
	cout<<"逆序后:";
	for(i=0;i<5;i++)
	{
		cout<<arr[i];
	}
}
