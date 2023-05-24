#include <iostream>
using namespace std;

class complex    //将对象传给函数
{
private:
	int real, imag;
public:
	complex() :real(0), imag(){ }

	void getdata()
	{
		cout << "Enter the data" << endl;
		cin >> real >> imag;
	}
	void datainput(complex var,complex var1)
	{
		real = var.real + var.real;
		imag = var.imag + var1.imag;
	}
	void redata()
	{
		cout << "real" << real << endl;
		cout << "imag" << imag << endl;
	}
};

int main()
{
	complex a1, a2,a3;
	int temp;
	
	a1.getdata();
	a2.getdata();

	a3.datainput(a1, a2);
	a3.redata();
	return 0;

}