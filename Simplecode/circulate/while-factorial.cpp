#include <iostream>
//for求阶乘
using namespace std;
int main()
{
    int i=1,n=1,q;
    cout<<"输入一个数q:"<<endl;
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
