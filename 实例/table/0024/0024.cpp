#include <iostream>
using namespace std;    //反转数字

int main()
{
	int n = 0, reversal = 0, temp = 0;
	cout << "反转数字:" << endl;
	cin >> n;
	while (n != 0)
	{
		reversal = n%10;
		temp = temp*10+reversal;
		n /= 10;
	}
	cout << temp;
	return 0;
}
