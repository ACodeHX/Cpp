#include <iostream>
 
using namespace std;
const int MAX = 3;
 
int main ()    //ָ�����
{
   int  var[MAX] = {5, 50, 150};
   int  *ptr;
 
                                   // ָ���е������ַ
   ptr = var;
   for (int i = 0; i < MAX; i++)
   {
      cout << "Address of var[" << i << "] = ";
      cout << ptr << endl;
 
      cout << "Value of var[" << i << "] = ";
      cout << *ptr << endl;
 
                                   // �ƶ�����һ��λ��
      ptr++;
   }
   return 0;
}