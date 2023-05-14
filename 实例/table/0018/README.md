### problem

学习使用按位取反~

### analyde

~0=-1; ~1=-2

### code
```cpp
#include <iostream>
using namespace std;

void main()    //学习使用按位取反~
{
	int x, y;
	x = 234;
	y = ~x;
	cout << "x的按位取反值为(十进制):" << y<<endl;
	x = ~x;
	cout << "x的按位取反值为(十六进制):" <<hex<< x << endl;
}
```
