// Note:Your choice is C++ IDE
#include <iostream>//Ƕ��forѭ��Ѱ������
using namespace std;
 
int main ()
{
    int i,j,n;
    cout<<"Ѱ��n�ڵ�����"<<endl;
    cout<<"����n:";
    cin>>n;
    for(i=1; i<=n; i++) 
    {
        for(j=2; j <= (i/j); j++)
         {
            if(!(i%j)) 
            {
                break; // ����ҵ�����������
            }
        }
        if(j > (i/j)) {
            cout << i <<"������"<<endl;
        }
    }
    return 0;
}