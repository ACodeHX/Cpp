### problem

输入三个整数x,y,z，请把这三个数由小到大输出

### analyde

null

### code
```cpp
#include <iostream>
using namespace std;

void main()    //三个数判断大小
{
	int x, y, z, t=0;
	cout << "输入三个数" << endl;
	cin >> x;
	cin >> y;
	cin >> z;

	if (x > y)
	{    /*交换x,y的值*/
		t = x;
		x = y;
		y = t;
	}
	if (x > z)
	{    /*交换x,z的值*/
		t = x;
		x = z;
		z = t;
	}
	if (y > z)
	{    /*交换z,y的值*/
		t = y;
		y = z;
		z = t;
	}
	printf("从小到大排序: %d %d %d", x, y, z);
}
```
