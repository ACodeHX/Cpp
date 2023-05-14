/* Note:Your choice is C IDE */
#include <iostream>
using namespace std;
void main()
{
	int num=0, ge = 0, shi = 0, bai = 0, qian = 0;
	cout<<""<<endl;
	for (num = 0; num <= 9999; num++)
	{
		ge = num % 10;
		shi = num / 10 % 10;
		bai = num / 100 % 10;
		qian = num / 1000 % 10;

		if (ge == (shi + bai + qian))
			cout << num << endl;
	}
}