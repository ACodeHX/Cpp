#include <iostream>
using namespace std;
void main()
{
	int x, y, result;
	for (x = 1; x < 10; x++)
	{
		for (y = 1; y <= x; y++)
		{
			result = x * y;
			cout << x << "*" << y << "=" << result << "\t";
		}
		cout << endl;
	}
}
