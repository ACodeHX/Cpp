#include <iostream>
 
using namespace std;
const int MAX = 3;
 
int main ()    //ָ��ݼ�
{
   int  var[MAX] = {5, 50, 150};
   int  *ptr;
 
                                  // ָ�������һ��Ԫ�صĵ�ַ
   ptr = &var[MAX-1];
   for (int i = MAX; i > 0; i--)
   {
      cout << "Address of var[" << i << "] = ";
      cout << ptr << endl;
 
      cout << "Value of var[" << i << "] = ";
      cout << *ptr << endl;
 
                                   // �ƶ�����һ��λ��
      ptr--;
   }
   return 0;
}