#include <iostream>
using namespace std;
void main()
{
	char c;
	int letters = 0, spaces = 0, digits = 0, others = 0;
	cout << "" << endl;
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
