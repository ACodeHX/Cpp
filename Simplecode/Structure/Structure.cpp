// Note:Your choice is C++ IDE
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
     cout<<"һ��������:";
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
     	
     cout<<"�����"<<i+1<<"��ѧ��ѧ��:";
     cin>>stud[i].ID;
     cout<<"�����"<<i+1<<"��ѧ������:";
     cin>>stud[i].Name;
     cout<<"�����"<<i+1<<"��ѧ���ɼ�:";
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