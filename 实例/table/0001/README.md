### problem
    
不同类型变量的创建方法：

### analyse

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
    string myString = "ACodeHX";   // 字符串
    
    // 输出变量
    cout << "int: " << myNum << "\n";    //5
    cout << "float: " << myFloatNum << "\n";    //5.99
    cout << "double: " << myDoubleNum << "\n";    //9.98
    cout << "char: " << myLetter << "\n";   //D 
    cout << "bool: " << myBoolean << "\n";    //true
    cout << "string: " << myString << "\n";    //ACodeHX
}
```



