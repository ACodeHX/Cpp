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

	Distance operator()(int a, int b, int c)    //()运算符重载
	{
		Distance d1;
		d1.real = a + b + 10;
		d1.inches = b + c;
		return d1;
	}

	void seeDistance()
	{
		cout << "r = " << real << "\tinches = " << inches << endl;
	}
};

void main()
{
	Distance d1(3,4),d2(0,0),d3;
	d1.seeDistance();

	d2=d3(2,3,4);
	d2.seeDistance();
}