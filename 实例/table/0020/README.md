### problem

输入数字和空格输出数字和

### analyde

null

### code
```cpp
#include <iostream>
#include <sstream>
using namespace std;    //读取数字和
int main()
{
	string input;
	cout << "输入一串数字和空格:" << endl;
	getline(cin, input);    // 读取用户输入的整行数据
	istringstream iss(input);    // 将字符串转换为输入流

	int num , sum = 0;

	while (iss>> num)
	{
		sum = sum + num;
	}
	cout << sum << endl;
	return 0;
}
```
