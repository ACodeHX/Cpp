#include <iostream>
using namespace std;
void main()
{
    /* 定义二维数组的四种方法*/
    /* 第一种*/
    int arr[2][3];
    int i = 0,j = 0;
    arr[0][0] = 1;
    arr[0][1] = 2;
    arr[0][2] = 3;
    arr[1][0] = 4;
    arr[1][1] = 5;
    arr[1][2] = 6;

    for(i = 0;i<2;i++)
    {
        for(j = 0;j<3;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    cout<<"---------"<<endl;
    /* 第二种(推荐)更直观*/
    int arr1[2][3] ={{1,2,3},{4,5,6}};

    for(i = 0;i<2;i++)
    {
        for(j = 0;j<3;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    cout<<"---------"<<endl;
    /* 第三种*/
    int arr2[2][3] = {1,2,3,4,5,6};

    for(i = 0;i<2;i++)
    {
        for(j = 0;j<3;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    cout<<"---------"<<endl;
    /* 第四种*/
    int arr3[][3] = {1,2,3,4,5,6};

    for(i = 0;i<2;i++)
    {
        for(j = 0;j<3;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}