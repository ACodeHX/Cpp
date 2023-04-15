#include <iostream>
using namespace std;    //一个类可以派生出多个类
 
// 基类
class Shape 
{
   public:    //共有类
      void setWidth(int w)
      {
         width = w;
      }
      void setHeight(int h)
      {
         height = h;
      }
   protected:    //保护类
      int width;
      int height;
};
 
// 派生类，定义一个派生类，我们使用一个类派生列表来指定基类
class Rectangle: public Shape    //派生shape类
{
   public:
      int getArea()
      { 
         return (width * height); 
      }
};
 
int main(void)
{
	int i,n;
	cout<<"输入长和宽"<<endl;
	cin>>i;
	cin>>n;
   Rectangle Rect;
 
   Rect.setWidth(i);
   Rect.setHeight(n);
 
   // 输出对象的面积
   cout << "Total area: " << Rect.getArea() << endl;
 
   return 0;
}
/*
一个派生类继承积累的所有方法,但除了
1.基类的构造函数、析构函数和拷贝构造函数.
2.基类的重载的运算符
3.基类的友元函数.
*/
