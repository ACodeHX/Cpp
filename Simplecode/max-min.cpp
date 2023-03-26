#include <iostream>
using namespace std;
void main()
{
	int a,b,c,max,min;
	//cin>>a>>b>>c>>endl;
	cout<<"输入三个数"<<endl;
	
	cin>>a;
	cin>>b;
	cin>>c;
	
	if(a>=b)
	max=a;
	else max=b;
	if(c>=max)
	max=c;
	
	
	cout<<"最大值max = "<<max<<endl;
	
	if(a>b)
	min=b;
	else min=a;     
	if(min>c)
	min=c;
	
	cout<<"最小值min = "<<min<<endl;
	cout<<a <<b <<c ;
    
   
}
