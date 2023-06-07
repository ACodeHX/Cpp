#include <iostream>
using namespace std;
long long multiple(int start, int end) {
    long long number = end;    //从最大的数开始,因为它一定能被包含在内的数整除

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

        number += end;    //逐步增加以end为步长,因为最小的数一定是end的倍数
    }
}

int main() {
    int start = 1;
    int end = 20;

    long long smallestMultiple = multiple(start, end);

    cout << "最小的能够被 " << start << " 到 " << end << " 整除的正数是：" << smallestMultiple << endl;

    return 0;
}
