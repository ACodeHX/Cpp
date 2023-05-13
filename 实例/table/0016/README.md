### problem

学习使用auto定义变量的用法

### analyde

null

### code
```cpp
#include <iostream>
using namespace std;    //学习使用auto定义变量的用法
void main()
{
	int num, i;
	num = 3;
	for (i = 0; i < 3; i++)
	{
		cout << "num 变量为"<<num<<endl;
		num++;
			for (i = 0; i < 3; i++)
			{
				auto num = 1;
				cout << "内置模块 num 变量为";
				num++;
					cout << num<<endl;
			}
	}
}
```
