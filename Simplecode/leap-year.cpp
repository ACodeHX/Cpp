#include <iostream>
using namespace std;
void main()    //判断闰年
{
    int year;
    cout<<"Enter the year:"<<endl;
    cin>>year;
    if(year%4==0)
    {
    	if(year%100==0)
    	{
    		if(year%400==0)
    			cout<<"leap year";
    		  else 
    		    cout<<"Not a leap year";
    	}else cout<<"leap year";
    }else cout<<"Not a leap year";
}
