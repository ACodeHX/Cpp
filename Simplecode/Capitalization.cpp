// Note:Your choice is C++ IDE
#include <iostream>//��Сдת��
using namespace std;
int main()
{
    int i;
    cin>>i;
    if(i<97&&i>=65)
    {
    	cout<<char(i)<<"��Сд";
        i+=32;
        cout<<char(i);
    }
    else if(i<123&&i>=97)
    {
    	cout<<char(i)<<"�Ĵ�д";
        i-=32;
        cout<<char(i);
    }else
    {
    	cout<<"������65~122����";
    }
    
    return 0;
}