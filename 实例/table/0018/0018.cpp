// Note:Your choice is C++ IDE
#include <iostream>
using namespace std;

void main()
{
	int x, y;
	x = 234;
	y = ~x;
	cout << "x�İ�λȡ��ֵΪ(ʮ����):" << y<<endl;
	x = ~x;
	cout << "x�İ�λȡ��ֵΪ(ʮ������):" <<hex<< x << endl;
}