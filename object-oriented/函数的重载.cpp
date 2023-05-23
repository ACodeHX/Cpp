#include <iostream>
using namespace std;    //函数的重载

void freigth(int a);
void freigth(float b);
void freigth(int, float);
void main()    //返回类型不同，但是传递给这两个函数的参数个数和数据类型都相同
{
	int a = 5;
	float b = 3.6;

	freigth(a);
	freigth(b);
	freigth(a, b);
}

void freigth(int var)
{
	cout << var << endl;
}
void freigth(float var)
{
	cout << var << endl;
}
void freigth(int var, float var1)
{
	cout << var << endl;
	cout << var1 << endl;
}