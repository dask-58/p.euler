#include <bits/stdc++.h>
using namespace std;

int main (int argc, char *argv[]) {
    string number = "1";
    int power = 1000;
    for (int i = 0; i < power; i++) {
        int carry = 0;
        for (int j = 0; j < number.size(); j++) {
            int digit = (number[j] - '0') * 2 + carry;
            number[j] = (digit % 10) + '0';
            carry = digit / 10;
        }
        while (carry) {
            number.push_back((carry % 10) + '0');
            carry /= 10;
        }
    }
    int ans = 0;
    for (char digit : number) {
        ans += digit - '0';
    }
    cout << ans;
  return 0;
}
