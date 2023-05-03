#include <iostream>
using namespace std;

void main()
{
	int x, y, z, t=0;
	cout << "" << endl;
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
	printf("%d %d %d", x, y, z);
}
