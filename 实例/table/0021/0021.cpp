#include <iostream>
using namespace std;

int main()
{
	int sum = 0,i = 0;
	cout << "输入数字:" << endl;
	while (cin >> i)
	{
		sum += i;
		while (cin.peek() == ' ')    //cin.peek() 可以用来预览输入流中的下一个字符，以便根据需要进行不同的处理
		{
			cin.get();    cin.get()   //可以用来逐个读取字符，特别适用于处理需要单个字符输入的情况
		}
		if (cin.peek() == '\n')
			break;
	}
	cout << sum << endl;
}