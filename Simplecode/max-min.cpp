// Note:Your choice is C++ IDE
#include <iostream>
using namespace std;
void main()
{
	int a,b,c,max,min;
	//cin>>a>>b>>c>>endl;
	cout<<"����������"<<endl;
	
	cin>>a;
	cin>>b;
	cin>>c;
	
	if(a>=b)
	max=a;
	else max=b;
	if(c>=max)
	max=c;
	
	
	cout<<"���ֵmax = "<<max<<endl;
	
	if(a>b)
	min=b;
	else min=a;     
	if(min>c)
	min=c;
	
	cout<<"��Сֵmin = "<<min<<endl;
	cout<<a <<b <<c ;
    
   
}