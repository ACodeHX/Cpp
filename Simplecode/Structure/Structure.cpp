#include <iostream>
#include <cstring>    //设置头文件
using namespace std;
typedef struct student    //定义结构体,typedef关键字可以定义非结构类型
   {
   	  int     ID;
   	  char    Name[20];
   	  double  sco;
   	
   }stu;
void main()
{
     struct student stud[3];
     int i,n;
     cout<<"一共多少人:";
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {    //输入数据
     	
     cout<<"输入第"<<i+1<<"个学生学号:";
     cin>>stud[i].ID;
     cout<<"输入第"<<i+1<<"个学生姓名:";
     cin>>stud[i].Name;
     cout<<"输入第"<<i+1<<"个学生成绩:";
     cin>>stud[i].sco;
     cout<<endl;
     
     
     }
     cout<<"ID\tname\tsco\t"<<endl;    //设计表头
     for(i=0;i<n;i++)    //输出数据
     {
     cout<<stud[i].ID<<"\t";
     cout<<stud[i].Name<<"\t";
     cout<<stud[i].sco<<endl;
     }
    
}
