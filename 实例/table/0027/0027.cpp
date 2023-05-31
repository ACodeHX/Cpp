#include <iostream>
using namespace std;

int main() {
    long long num = 600851475143;
    int maxPrime = 1;

    for (int i = 2; i <= num / i; i++) {
        while (num % i == 0) {
            maxPrime = i;
            num /= i;
        }
    }

    if (num > 1) {
        maxPrime = num;
    }

    cout << "The largest prime factor of 600851475143 is: " << maxPrime << endl;
    return 0;
}
