#include <iostream>
using namespace std;
class box
{
private:
	double length;
	double width;
	double heith;
public:
	double seebox(void)
	{
		return (length * width * heith);
	}

	void getdata(double len, double wid, double hei)
	{
		length = len;
		width = wid;
		heith = hei;
	}

	box operator+(const box& b)    //重载 + 运算符 把两个对象box相加
	{
		box Box;
		Box.length = this->length + b.length;
		Box.width = this->width + b.width;
		Box.heith = this->heith + b.heith;
		return Box;
	}
};

int main()
{
	box b1;
	box b2;
	box b3;
	b1.getdata(2,3,4);
	b2.getdata(3, 4, 5);
	double value = 0.0;

	value = b1.seebox();
	cout << value << endl;

	value = b2.seebox();
	cout << value << endl;

	b3 = b1 + b2;    //将两个对象相加
	value = b3.seebox();
	cout << value << endl;
	return 0;
}