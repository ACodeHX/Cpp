// Note:Your choice is C++ IDE
#include <iostream>
using namespace std;

void foo()
{
	static int x = 0;
	x++;
	cout << x << endl;
}
void main()
{
	foo();
	foo();
	foo();
}