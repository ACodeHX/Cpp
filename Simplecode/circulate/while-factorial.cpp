// Note:Your choice is C++ IDE
#include <iostream>//for��׳�
using namespace std;
int main()
{
    int i=1,n=1,q;
    cout<<"����һ����:q"<<endl;
    cin>>q;
    while(i<=q)
    {
    	
    	n*=i;
    	i++;
    }
    
    cout<<q<<"! = ";
    cout<<n<<endl;
    
    return 0;
}