### problem

输出9*9口诀

### analyde

null

### code
```cpp
#include <iostream>
using namespace std;
void main()    //九九乘法表
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
```
