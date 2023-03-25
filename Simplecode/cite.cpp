#include <iostream>
using namespace std;
void main()    //C++的引用
{
    int i;
    double d;
    
    int& s=i;
    double& r=d;
    
    i=10;
    cout<<i<<endl;
    cout<<s<<endl;
    
    d=2.2;
    cout<<d<<endl;
    cout<<r<<endl;
    

}
