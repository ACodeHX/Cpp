// Note:Your choice is C++ IDE
#include <iostream>
 
using namespace std;
 
// ����
class Shape 
{
   public:
      void setWidth(int w)
      {
         width = w;
      }
      void setHeight(int h)
      {
         height = h;
      }
   protected:
      int width;
      int height;
};
 
// ������
class Rectangle: public Shape
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
	scanf("%d %d",&i,&n);
   Rectangle Rect;
 
   Rect.setWidth(i);
   Rect.setHeight(n);
 
   // �����������
   cout << "Total area: " << Rect.getArea() << endl;
 
   return 0;
}