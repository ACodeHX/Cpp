// Note:Your choice is C++ IDE
#include <iostream>
using namespace std;

void main()
{
	int s = 0, a, n, t;
	cout << "" << endl;
	cin >> a;
	cin >> n;
	t = a;
	while (n > 0)
	{
		s += t;
		a = a * 10;
		t += a;
		n--;
	}
	cout << "" << s << endl;
}