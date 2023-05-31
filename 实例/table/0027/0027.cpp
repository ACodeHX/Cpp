#include <iostream>
using namespace std;

int main() {
    long long num = 600851475143;
    int maxPrime = 1;
    //从2开始逐个测试每个数是否是给定数的因数
    for (int i = 2; i <= num / i; i++) {
        while (num % i == 0) {
            maxPrime = i;
            num /= i;    //将num除以i,继续寻找下一个质因数
        }
    }

    if (num > 1) {    //如果num本身是质数,将num作为最大质因数
        maxPrime = num;
    }

    cout << "The largest prime factor of 600851475143 is: " << maxPrime << endl;
    return 0;
}
