#include <iostream>
using namespace std;

class Distance
{
private:
	int real;
	int inches;
public:
	Distance(int r, int inc)
	{
		real = r;
		inches = inc;
	}

	bool operator<(const Distance& dis)    //关系运算符重载< > <= >= ==用法一致
	{
		if (real < dis.real)
		{
			return true;
		}
		if (real == dis.real && inches < dis.inches)
		{
			return true;
		}
		return false;
	}
};

void main()
{
	Distance d1(3, 4), d2(5, 2);

	if (d1 < d2)
	{
		cout << "d1<d2" << endl;
	}
	else { cout << "d2<d1" << endl; }
}