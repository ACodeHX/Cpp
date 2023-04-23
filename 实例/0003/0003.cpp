#include <iostream>
#include <cmath>
using namespace std;
void main()
{
    const int n = 10;    // 年份数
    const double r = 0.09;    // 年增长率
    double p;

    p = pow(1 + r, n);

    cout << "国民生产总值与现在相比增长：" << (p - 1) * 100 << "%" << endl;

   
}
