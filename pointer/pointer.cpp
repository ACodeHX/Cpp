// Note:Your choice is C++ IDE
#include <iostream>
using namespace std;
int main()    //c++ָ��
{
    int null = 10;
    int *i;
    
    i=&null;    //��ָ������д洢 var �ĵ�ַ
    
    cout<<null<<endl;    //�����ָ������д洢��ֵ
    
    cout<<*i<<endl;    //����ָ���е�ַ��ֵ
    
    cout<<&null<<endl;    //��������ĵ�ַ
    
    cout<<&i<<endl;    //����ָ���еĵ�ַ
    
    return 0;
}