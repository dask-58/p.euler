#include <bits/stdc++.h>
using namespace std;

int main (int argc, char *argv[]) {
  int a = 1, b = 2;
  int ans = 0;
  while (b <= 4'000'000) {
    if (b % 2 == 0) {
      ans += b;
    }
    int nx = a + b;
    a = b;
    b = nx;
  }
  cout << ans;
  return 0;
}
