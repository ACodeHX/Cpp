// Note:Your choice is C++ IDE
#include <iostream>//while���
using namespace std;
int main()
{
    int a=0,s=0,n;
    
    cout<<"��1��n�ĺ�"<<endl<<"����n:";
    
    
    cin>>n;
    do
    {
    	a++;
    	s+=a;
    	
    }while(a<n);
    cout<<s<<endl;
    return 0;
}