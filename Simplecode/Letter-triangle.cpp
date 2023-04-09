#include <iostream>
using namespace std; 
int main()    //打印倒三角
{
    char input, alphabet = 'A';
 
    cout << "输入的行数:";
    cin >> input;
 
    for(int i = 1; i <= (input-'A'+1); ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << alphabet << " ";
        }
        ++alphabet;
 
        cout << endl;
    }
    return 0;
}
