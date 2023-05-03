#include <iostream>
using namespace std;

void main()
{
	int x, y, z, t=0;
	cout << "输入三个数" << endl;
	cin >> x;
	cin >> y;
	cin >> z;

	if (x > y)
	{
		t = x;
		x = y;
		y = t;
	}
	if (x > z)
	{
		t = x;
		x = z;
		z = t;
	}
	if (y > z)
	{
		t = y;
		y = z;
		z = t;
	}
	printf("从小到大排序: %d %d %d", x, y, z);
}
