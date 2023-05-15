### problem

输入个数n，再输入n，个自然数（n<=3000），如果一个数它的个位数等于其余位数。\n之和，那么就符合条件，求输入的数字中符合条件的个数

### analyde

利用除法和求余算出个、十、百、千的数后相加

### code
```cpp
#include <iostream>
using namespace std;
void main()
{
	int num=0, ge = 0, shi = 0, bai = 0, qian = 0;
	cout<<""<<endl;
	for (num = 0; num <= 3000; num++)
	{
		ge = num % 10;    //求个位数
		shi = num / 10 % 10;    //求十位数
		bai = num / 100 % 10;    //求百位数
		qian = num / 1000 % 10;    //求千位数

		if (ge == (shi + bai + qian))    //判断除个位数以外的位数相加是否等于个位数
			cout << num << endl;
	}
}
```
