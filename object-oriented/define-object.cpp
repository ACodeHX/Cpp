// Note:Your choice is C++ IDE
#include <iostream>
using namespace std;
class Box
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
	  Box Box1;        // ���� Box1������Ϊ Box
      Box Box2;
      double volume = 0.0;     // ���ڴ洢���
      cout<<"����һ��������Box1�ĳ�������:"<<endl;
      /*Box1.length=2;
      Box1.breadth=2;
      Box1.heigth=2;*/
      
      
      cin>>Box1.length>>Box1.breadth>>Box1.heigth;
      /*cin>>Box1.length;
      cin>>Box1.breadth;
      cin>>Box1.heigth;*/
      
      cout<<"Box1��� = ";
      volume=Box1.length*Box1.breadth*Box1.heigth;
      
      
      
      cout<<volume<<endl;
      
      Box2.set(2,2,2);
      volume=Box2.get();
      cout<<"��set()��get()�ĳ�����Box2�����:"<<volume;
 
   
	
}


