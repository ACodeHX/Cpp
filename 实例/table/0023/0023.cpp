#include <iostream>
using namespace std;
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