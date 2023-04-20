#include <iostream>
using namespace std;
void main()    //bool类型
{
    bool feal = true;
    
    cout<<"true = "<<feal<<endl;    //返回 1
    
    feal = false;
    
    cout<<"false = "<<feal<<endl;    //返回 0
    
    cout<<"bool size = "<<sizeof(bool);    //类型大小 1
}
