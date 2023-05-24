#include <iostream>
using namespace std;

int main()    //欧拉计划,1000以内3的倍数和5的倍数和
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
