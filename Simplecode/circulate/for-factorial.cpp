#include <iostream>//for求阶乘
using namespace std;
int main()
{
    int i,n=1,q;
    cout<<"输入一个数:q"<<endl;
    cin>>q;
    for(i=1;i<=q;i++)
    {
    	
    	n*=i;
    	
    }
    cout<<q<<"! = ";
    cout<<n<<endl;
    
    return 0;
}
