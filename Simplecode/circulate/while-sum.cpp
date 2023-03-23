#include <iostream>
//while求和
using namespace std;
int main()
{
    int a=0,s=0,n;
    
    cout<<"求1~n的和"<<endl<<"输入n:";
    
    
    cin>>n;
    while(a<=n)
    {
    	s+=a;
    	a++;
    }
    cout<<s<<endl;
    return 0;
}
