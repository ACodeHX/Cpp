#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1,6,3,8,5};
    int i = 0,j = 0;
    cout << "Ã°ÅÝÅÅÐòÇ°:"<<endl;
    for(i=0;i<5;i++)
    {
        cout << arr[i];
    }
    cout << endl;
    int start = 0;
    int end = sizeof(arr)/sizeof(arr[0])-1;
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

    cout<<"ÅÅÐòºó:"<<endl;
    for(i=0;i<5;i++)
    {
        cout<<arr[i];
    }
    return 0;
}
