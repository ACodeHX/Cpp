#include <iostream>
using namespace std;
int main()    //打印正三角
{
    int space, rows;
 
    cout <<"输入行数:";
    cin >> rows;
 
    for(int i = 1, k = 0; i <= rows; ++i, k = 0)
    {
        for(space = 1; space <= rows-i; ++space)
        {
            cout <<"  ";
        }
 
        while(k != 2*i-1)
        {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }    
    return 0;
}
