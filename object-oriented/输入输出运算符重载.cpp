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

	friend ostream& operator<<(ostream& output, const Distance& dis)    //输出运算符重载
	{
		cout << "r = " << dis.real << "\tinc = " << dis.inches << endl;
		return output;
	}

	friend istream& operator>>(istream& input, Distance& dis)    //输入运算符重载
	{
		cin >> dis.real;
		cin >> dis.inches;
		return input;
	}
};

void main()
{
	Distance d1(0,0),d2;
	cin >> d2;
	cout << d1;
	cout << d2;

}