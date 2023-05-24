#include <iostream>
using namespace std;
class Time
{
private:
	int huor;
	int minute;
	int day;
public:
	Time()    //定义构造函数
	{
		huor = 0;
		minute = 0;
		day = 0;
	}

	Time(int d,int h, int m)
	{
		day = d;
		huor = h;
		minute = m;
	}

	void seeTime()    //显示
	{
		cout <<"day = "<< day << "\t" << "h = " << huor << "\t" << "m = " << minute << endl;
	}

	Time operator++ ()    //重载前缀递增运算符
	{
		++minute;
		if (minute >= 60)
		{
			++huor;
			minute -= 60;
		}

		if (huor >= 24)
		{
			++day;
			huor -= 24;
		}
		return Time(day,huor, minute);
	}
	Time operator++ (int)    //重载后缀递增运算符
	{
		Time T(day, huor, minute);    //保存原始值
		minute++;
		if (minute >= 60)
		{
			huor++;
			minute -= 60;
		}
		if (huor >= 24)
		{
			day++;
			huor -= 24;
		}
		return T;    //返回旧的原始值
	}
};

int main()
{
	Time t1(0,23,59),t2(3,4,59);

	++t1;
	t1.seeTime();

	t2++;
	t2.seeTime();

	return 0;
}