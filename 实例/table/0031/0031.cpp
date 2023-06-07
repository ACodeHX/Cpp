#include <iostream>
using namespace std;
long long multiple(int start, int end) {
    long long number = end;

    while (true) {
        bool isDivisible = true;
        for (int i = start; i <= end; i++) {
            if (number % i != 0) {
                isDivisible = false;
                break;
            }
        }

        if (isDivisible) {
            return number;
        }

        number += end;
    }
}

int main() {
    int start = 1;
    int end = 20;

    long long smallestMultiple = multiple(start, end);

    cout << "最小的能够被 " << start << " 到 " << end << " 整除的正数是：" << smallestMultiple << endl;

    return 0;
}
