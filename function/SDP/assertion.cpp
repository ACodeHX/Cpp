#include "assertion.h"    //分文件编写
int add(int a, int, b)    //源文件写定义
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << a << endl;
	cout << b << endl;
}
void main()
{
	int a = 10;
	int b = 20;
	add(a, b);
}
