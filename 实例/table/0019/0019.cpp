#include <iostream>
using namespace std;
void main()
{
	int num=0, ge = 0, shi = 0, bai = 0, qian = 0;
	cout<<""<<endl;
	for (num = 0; num <= 9999; num++)
	{
		ge = num % 10;    //求个位数
		shi = num / 10 % 10;    //求十位数
		bai = num / 100 % 10;    //求百位数
		qian = num / 1000 % 10;    //求千位数

		if (ge == (shi + bai + qian))    //判断除个位数以外的位数相加是否等于个位数
			cout << num << endl;
	}
}
