#include <iostream>
using namespace std;

void swap(int* s1, int* s2)
{
	int temp;
	temp = *s1;
	*s1 = *s2;
	*s2 = temp;    //交换指针
}

int main()
{
	int x, y, z;
	int *p1,*p2,*p3;
	scanf_s("%d", &x);    //安全输出
	scanf_s("%d", &y);
	scanf_s("%d", &z);
	p1 = &x;
	p2 = &y;
	p3 = &z;
	if (x > y)
		swap(p1, p2);
	if (x > z)
		swap(p1, p3);
	if (y > z)
		swap(p2, p3);
	cout << x << y << z;
}
