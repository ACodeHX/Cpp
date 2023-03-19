#include "iostream.h"
void main()
{
    int a,b,c;
    a=60;
    b=13;
    c=0;
    
    c=a&b;
    cout<<"a&b = "<<c<<"\n";
    
    c=a|b;
    cout<<"a|b = "<<c<<"\n";
    
    c=a^b;
    cout<<"a^b = "<<c<<"\n";
    
    c=a<<2;
    cout<<"a<<2 = "<<c<<"\n";
    
    c=a>>2;
    cout<<"a>>2 = "<<c<<"\n";
}
