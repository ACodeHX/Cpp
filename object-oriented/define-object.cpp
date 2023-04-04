#include <iostream>
using namespace std;
class Box    //类定义是以关键字class开头,后跟类的名称.
{
	public:
	
	double length;
	double breadth;
	double heigth;
	
	double get(void);
	void set(double len,double bre,double hei);
};
double Box::get(void)
{
	
	return length*breadth*heigth;
	
}
void Box::set(double len,double bre,double hei)
{
	length=len;
	breadth=bre;
	heigth=hei;
		
}
void main()
{
	  Box Box1;        // 声明 Box1，类型为 Box
      Box Box2;
      double volume = 0.0;     // 用于存储体积
      cout<<"输入一个长方体Box1的长、宽、高:"<<endl;
      /*Box1.length=2;
      Box1.breadth=2;
      Box1.heigth=2;*/
      
      
      cin>>Box1.length>>Box1.breadth>>Box1.heigth;
      /*cin>>Box1.length;
      cin>>Box1.breadth;
      cin>>Box1.heigth;*/
      
      cout<<"Box1体积 = ";
      volume=Box1.length*Box1.breadth*Box1.heigth;
      
      
      
      cout<<volume<<endl;
      
      Box2.set(2,2,2);
      volume=Box2.get();
      cout<<"用set()和get()的长方体Box2的体积:"<<volume;
 
   
	
}


