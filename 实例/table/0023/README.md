### problem

欧拉计划:斐波那契数列,考虑不超过四百万的斐波那契数，计算其中偶数斐波那契数的和

### analyde

使用临时变量来保存中间的计算过程，并通过迭代计算得到最后的结果

### code
```cpp
﻿#include <iostream>
using namespace std;    //欧拉计划,斐波那契数列中不超过四百万的项，求其中为偶数的项之和
int main()
{
	long long a = 1L, b = 2L, temp=0L,sum=0L;
	while (b <= 4e7)    //4e7科学计数法
	{
		if (a % 2 == 0)
		{
			sum += a;
		}
		temp = a + b;
		a = b;
		b = temp;
		
	}
	cout << sum << endl;
}
```
