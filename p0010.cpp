#include <ios>
#include <iostream>
#include <vector>

using namespace std;

#define int long long

void solve() {
  const int N = 2000000;
  vector<int> primes;
  vector<bool> is_composite(N, false);
  int sum = 0;
  for (int i = 2; i < N; ++i) {
    if (!is_composite[i]) {
      primes.push_back(i);
      sum += i;
    }
    for (int p : primes) {
      if (1LL * i * p >= N) break;
      is_composite[i * p] = true;
      if (i % p == 0) break;
    }
  }
  cout << sum << '\n';
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // int t; cin >> t; while (t--)
  solve();

  return 0;
}