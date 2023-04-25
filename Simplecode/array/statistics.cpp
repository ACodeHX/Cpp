#include <iostream>
#include <string>
using namespace std;
void main()    //统计
{
    int arr[3][3] =
    {
        {100,127,134},
        {94,105,126},
        {98,100,99}
    };    //定义数组
    string name[3] ={"tom","ACHX","jek"}; 
    for(int i = 0;i<3;i++)
    {
        int sum = 0;
        for(int j = 0;j<3;j++)
        {
            sum+=arr[i][j];
        }
        cout<<name[i]<<":"<<sum<<endl;
    }
}
