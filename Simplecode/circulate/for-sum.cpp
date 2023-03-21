#include <iostream>//for求和
using namespace std;
int main()
{
    int a=0,s=0,n;
    
    cout<<"求1到n的和"<<endl<<"输入n:";
    
    
    cin>>n;
    for(a;a<=n;a++)
    {
    	s+=a;
    	
    }
    cout<<s<<endl;
    return 0;
}
