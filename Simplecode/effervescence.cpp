#include <iostream>
using namespace std;
void main()
{
    int arr[5] = {1,6,3,8,5};    //定义数组
    int i = 0,j = 0;
    cout << "冒泡排序前:"<<endl;
    for(i=0;i<5;i++)
    {
        cout << arr[i];
    }
    cout << endl;
    int start = 0;    
    int end = sizeof(arr)/sizeof(arr[0])-1;    //数组长度
    int temp = 0;

    for(i=0;i<end;i++)
    {
        for(j=0;j<end-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout<<"冒泡排序后:"<<endl;
    for(i=0;i<5;i++)
    {
        cout<<arr[i];
    }
}
