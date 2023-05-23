#include <iostream>
using namespace std;

class Area
{
private:
    int length;
    int width;

public:
    // 构造函数
    Area() : length(5), width(2) { }

    void Getdata()
    {
        cout << "分别输入长度和宽度: ";
        cin >> length >> width;
    }

    int getArea() { return (length * width); }

    void setArea(int temp)
    {
        cout << "面积: " << temp;
    }
};

int main()
{
    Area A1, A2;
    int temp;

    A1.Getdata();
    temp = A1.getArea();
    A1.setArea(temp);

    cout << endl << "默认面积为:" << endl;

    temp = A2.getArea();
    A2.setArea(temp);

    return 0;
}