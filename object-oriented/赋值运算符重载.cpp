#include <iostream>
using namespace std;

class Distance
{
private:
	int real;
	int inches;
public:
	Distance()
	{
		real = 0;
		inches = 0;
	}

	Distance(int r, int inc)
	{
		real = r;
		inches = inc;
	}

	void operator=(const Distance& dis)    //赋值运算符重载
	{
		real = dis.real;
		inches = dis.inches;
	}
	void seeDistance()
	{
		cout << "r = " << real << "\tinches = " << inches << endl;
	}
};

void main()
{
	Distance d1(3,4),d2;
	d1.seeDistance();

	d2 = d1;
	d2.seeDistance();
}