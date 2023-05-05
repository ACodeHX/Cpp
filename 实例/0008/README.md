### problem

利用条件运算符的嵌套来完成此题：学习成绩>=90分的同学用A表示，60-89分之间的用B表示，60分以下的用C表示

### analyde

利用(a>b)?a:b判断条件

### code
```cpp
#include <iostream>
using namespace std;
void main()    //利用条件运算符的嵌套来完成此题：学习成绩>=90分的同学用A表示，60-89分之间的用B表示，60分以下的用C表示
{
    int score;
    char grade;
    cout << "输入分数" << endl;
    cin >> score;
    if (score >= 0 && score <= 100)
    {
        grade = (score >= 90) ? 'A' : ((score >= 60) ? 'B' : 'C');
        cout << grade << endl;
    }
    else cout << "请输入0~100的数" << endl;
}
```
