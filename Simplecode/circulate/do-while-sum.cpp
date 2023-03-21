#include <iostream>//do-while求和
using namespace std;
int main()
{
    int a=0,s=0,n;
    
    cout<<"求1到n的和"<<endl<<"输入n:";
    
    
    cin>>n;
    do
    {
    	a++;
    	s+=a;
    	
    }while(a<n);    //while要;
    cout<<s<<endl;
    return 0;
}
