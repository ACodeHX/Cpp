#include <iostream>
using namespace std;
void main()    //数组大小和地址
{
    int arr[2][3] =
    {
        {1,2,3},{4,5,6}
    };
    cout<<"数组的大小"<<sizeof(arr)<<endl;
    cout<<"第一列数组元素的大小:"<<sizeof(arr[0])<<endl;
    cout<<"第二列数组的大小:"<<sizeof(arr[1])<<endl;
    cout<<sizeof(arr[0])/sizeof(arr[0][0])<<endl;

    cout<<"数组的地址:"<<(int)arr<<endl;
    cout<<"第一列数组的地址:"<<(int)arr[0]<<endl;
    cout<<"第二列数组的地址:"<<(int)arr[1]<<endl;
    cout<<"数组首地址:"<<(int)&arr[0][0];
}
