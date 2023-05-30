### problem

getchar函数、putchar函数的使用

### analyde

null

### code
```cpp
﻿#include <iostream>
using namespace std;
int main()    //getchar函数、putchar函数的使用
{
	int str;
	str = getchar();    //获得第一个数
	putchar(str);    //输出

	printf("\n");
	putchar(-1);    //输入乱码
	printf("\n");
	putchar(256);    //什么也没输出

	int str1;
	str1 = getchar();
	printf("输入 ctrl+C 结束");
	while (str1 != EOF)    //这个可以输出输入的数据
	{
		putchar(str1);
		str1 = getchar();
	}
	return 0;
}
```
