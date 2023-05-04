#include <iostream>
using namespace std;

void main()
{
	int x=0, y=0, z=0, i=0;
	for (i = 100; i < 1000; i++)
	{
		x = i % 10;
		y = i /10% 10;
		z = i / 100 % 10;
		if (i == (x*x * x + y*y * y + z*z * z))
			cout << i<< endl;
	}
}
