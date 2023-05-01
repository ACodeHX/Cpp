#include "assertion.h"
int add(int a, int, b)
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
