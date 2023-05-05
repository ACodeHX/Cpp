#include <iostream>
using namespace std;
void main()    //输入一行字符串，统计出其中英文字母、空格、数字和其它字符的个数
{
	char c;
	int letters = 0, spaces = 0, digits = 0, others = 0;
	cout << "输入字符串:" << endl;
	while ((c=getchar()) != '\n')
	{
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			letters++;
		else if (c >= '0' && c <= '9')
			spaces++;
		else if (c == ' ')
			digits++;
		else
			others++;
	}
	cout << letters << spaces <<digits<< others << endl;
}
