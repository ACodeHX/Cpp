#include <iostream>
#include <string>

using namespace std;
/*寻找两个三位数乘积中最大的回文数*/
bool is_palindrome(int num) {
    string str = to_string(num);
    int len = str.length();
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int ans = 0;
    for (int i = 999; i >= 100; i--) {
        for (int j = 999; j >= 100; j--) {
            int product = i * j;
            if (is_palindrome(product) && product > ans) {
                ans = product;
            }
        }
    }
    cout << ans << endl;
    return 0;
}