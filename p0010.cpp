#include <bits/stdc++.h>
using namespace std;

int main (int argc, char *argv[]) {
  vector<int64_t> primes;
  int64_t n = 2;
  int64_t ans = 0;
  while (primes.size() < 2'000'000) {
    bool is_prime = true;
    for (auto& num : primes) {
      if (1LL * num * num > n) break;
      if (n % num == 0) {
        is_prime = false;
        break;
      }
    }
    if (is_prime) {
      ans += n;
    }
    n++;
  }
  cout << ans;
  return 0;
}
