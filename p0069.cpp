#include <ios>
#include <iostream>

using namespace std;

void solve() {
    int n = 1;
    int primes[13] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41};
    for (int i = 0; i < 13; ++i) {
        if (n * primes[i] > 1000000) break;
        n *= primes[i];
    }
    cout << n << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

    // phi(n) = n * (1 - 1/p1) * (1 - 1/p2) * ... * (1 - 1/pk)
    // where p1, p2, ..., pk are the distinct prime factors of n.

    // n / phi(n) = 1 / (1 - 1/p1) * (1 - 1/p2) * ... * (1 - 1/pk)

//   int t; cin >> t; while (t--)
  solve();

  return 0;
}