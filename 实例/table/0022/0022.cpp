#include <iostream>
using namespace std;

int main()
{
	int num, sum = 0,i;    //暴力解法
	for (i = 0; i < 1000; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	cout << sum << endl;

	return 0;
}