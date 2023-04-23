// Note:Your choice is C++ IDE
#include <iostream>
#include <cmath>
using namespace std;
void main()
{
    const int n = 10; 
    const double r = 0.09;
    double p;

    p = pow(1 + r, n);

    cout << "国民生产总值与现在相比增长：" << (p - 1) * 100 << "%" << endl;

   
}