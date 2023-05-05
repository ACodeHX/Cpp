// Note:Your choice is C++ IDE
#include <iostream>
using namespace std;

void main()
{
    int score;
    char grade;
    cout << "" << endl;
    cin >> score;
    if (score >= 0 && score <= 100)
    {
        grade = (score >= 90) ? 'A' : ((score >= 60) ? 'B' : 'C');
        cout << grade << endl;
    }
    else cout << "error" << endl;
}