#include <bits/stdc++.h>
using namespace std;

vector<int64_t> sieve(int64_t n) {
  vector<int64_t> primes;
  vector<bool> is_prime(n + 1, true);
  is_prime[0] = is_prime[1] = false;
  for (int i = 2; 1LL * i * i <= n; i++) {
    if (is_prime[i]) {
      for (int j = 1LL * i * i; j <= n; j += i) {
        is_prime[j] = false;
      }
    }
  }
  for (int i = 2; i <= n; i++) {
    if (is_prime[i]) {
      primes.push_back(i);
    }
  }
  return primes;
}

int main (int argc, char *argv[]) {
  vector<int64_t> primes = sieve(2'000'000);
  int ans = accumulate(primes.begin(), primes.end(), 0LL);
  cout << ans;
  return 0;
}
