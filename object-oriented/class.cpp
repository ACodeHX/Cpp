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
	
   Rectangle Rect;
 
   Rect.setWidth(i);
   Rect.setHeight(n);
 
   // 输出对象的面积
   cout << "Total area: " << Rect.getArea() << endl;
 
   return 0;
}
