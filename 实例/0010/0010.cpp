#include <iostream>
using namespace std;
void main()    //求s=a+aa+aaa+aaaa+aa...a的值
{
	int s = 0, a, n, t;
	cout << "请输入a和n" << endl;
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
	cout << "a+aa+...=" << s << endl;
}
