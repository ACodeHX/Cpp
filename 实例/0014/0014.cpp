// Note:Your choice is C++ IDE
#include <iostream>
using namespace std;

#define N 10

int main()
{
    int i, j, a[N], temp;
    cout << "输入十个数:" << endl;
    for (i = 0; i < N; i++)
        cin >> a[i];
    for (i = 0; i < N - 1; i++)
    {
        int min = i;
        for (j = i + 1; j < N; j++)
        {
            if (a[min] > a[j])
                min = j;
        }
        if (min != i)
        {
            temp = a[min];
            a[min] = a[i];
            a[i] = temp;
        }
    }
    cout << "排序的结果:" << endl;
    for (i = 0; i < N; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}

