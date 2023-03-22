#include <iostream>
//嵌套for循环寻找质数
using namespace std;
 
int main ()
{
    int i,j,n;
    cout<<"寻找n内的质数"<<endl;
    cout<<"输入n:";
    cin>>n;
    for(i=1; i<=n; i++) 
    {
        for(j=2; j <= (i/j); j++)
         {
            if(!(i%j)) 
            {
                break; // 如果找到，则不是质数
            }
        }
        if(j > (i/j)) {
            cout << i <<"是质数"<<endl;
        }
    }
    return 0;
}
