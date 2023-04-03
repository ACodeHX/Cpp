#include <iostream>
#include <cstring>
using namespace std;
typedef struct student
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
     {
     	
     cout<<"输入第"<<i+1<<"个学生学号:";
     cin>>stud[i].ID;
     cout<<"输入第"<<i+1<<"个学生姓名:";
     cin>>stud[i].Name;
     cout<<"输入第"<<i+1<<"个学生成绩:";
     cin>>stud[i].sco;
     cout<<endl;
     
     
     }
     cout<<"ID\tname\tsco\t"<<endl;
     for(i=0;i<n;i++)
     {
     cout<<stud[i].ID<<"\t";
     cout<<stud[i].Name<<"\t";
     cout<<stud[i].sco<<endl;
     }
    
}
