### problem

假如我国国民生产总值的年增长率为9%，计算10年后我国国民生产总值与现在相比增长多少百分比

### analyde

先利用pow()算出为与现在相比的倍数，然后计算GDP的增长占百分比

### code
```c++
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
```
