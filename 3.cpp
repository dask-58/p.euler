#include <bits/stdc++.h>
using namespace std;

int main (int argc, char *argv[]) {
  int64_t N = 600851475143;
  int64_t i = 2;
  int64_t ans = 0;
  while (1LL * i * i <= N) {
    if (N % i == 0) {
      while (N % i == 0) {
        N /= i;
      }
      ans = i;
    }
    i++;
  }
  if (N > 1) {
    ans = N;
  }
  cout << ans;
  return 0;
}
