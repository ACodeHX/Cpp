#include <iostream>//大小写转换
using namespace std;
int main()
{
    int i;
    cin>>i;
    if(i<97&&i>=65)
    {
    	cout<<char(i)<<"的小写";
        i+=32;
        cout<<char(i);
    }
    else if(i<123&&i>=97)
    {
    	cout<<char(i)<<"的大写";
        i-=32;
        cout<<char(i);
    }else
    {
    	cout<<"请输入65~122的数";
    }
    
    return 0;
}
