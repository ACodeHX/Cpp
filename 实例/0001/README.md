### problem
    
不同类型变量的创建方法：

### 分析

null

### code

```cpp
#include <iostream>
#include <string>
using namespace std;
    
void main ()
{
                                 // 创建变量
    int myNum = 5;               // 整型
    float myFloatNum = 5.99;     // 单精度浮点型
    double myDoubleNum = 9.98;   // 双精度浮点型
    char myLetter = 'D';         // 字符型
    bool myBoolean = true;       // 布尔型
    string myString = "Runoob";   // 字符串
    
    // 输出变量
    cout << "int: " << myNum << "\n";
    cout << "float: " << myFloatNum << "\n";
    cout << "double: " << myDoubleNum << "\n";
    cout << "char: " << myLetter << "\n";
    cout << "bool: " << myBoolean << "\n";
    cout << "string: " << myString << "\n";
    
    return 0;
}
```



