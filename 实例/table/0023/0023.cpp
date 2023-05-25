#include <iostream>
using namespace std;    //欧拉计划,斐波那契数列中不超过四百万的项，求其中为偶数的项之和
int main()
{
	long long a = 1, b = 2, temp=0,sum=0;
	while (b <= 4e7)
	{
		if (a % 2 == 0)
		{
			sum += a;
		}
		temp = a + b;
		a = b;
		b = temp;
		
	}
	cout << sum << endl;
}
