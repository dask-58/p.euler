#include <bits/stdc++.h>
using namespace std;

int main (int argc, char *argv[]) {
  int ans = 1;
  for (int a = 1; a <= 1000 / 3; a++) {
    for (int b = a + 1; b <= 1000 / 2; b++) {
      int c = 1000 - b - a;
      if (a * a + b * b == c * c) {
        ans = a * b * c;
        break;
      }
    }
  }
  cout << ans;
  return 0;
}
