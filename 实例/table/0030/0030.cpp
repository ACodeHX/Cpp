#include <iostream>
#include <string>

using namespace std;
/*寻找两个三位数乘积中最大的回文数*/
//判断一个整数是否为回文数
bool is_palindrome(int num) {    //将整数转换为字符串
    string str = to_string(num);
    int len = str.length();
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {    //遍历字符串的前一半，判断是否与后一半相同
            return false;    //如果不相同，说明不是回文数
        }
    }
    return true;
}

int main() {
    int ans = 0;
    for (int i = 999; i >= 100; i--) {
        for (int j = 999; j >= 100; j--) {
            int product = i * j;
            /*计算乘积,如果是回文数并且比当前最大回文数还大，更新最大回文数*/
            if (is_palindrome(product) && product > ans) {
                ans = product;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
