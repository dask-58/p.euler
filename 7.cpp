#include <bits/stdc++.h>
using namespace std;

int main (int argc, char *argv[]) {
  vector<int> primes;
  int n = 2;
  while (primes.size() < 10001) {
    bool is_prime = true;
    for (int num : primes) {
      if (num * num > n) break;
      if (n % num == 0) {
        is_prime = false;
        break;
      }
    }
    if (is_prime) {
      primes.push_back(n);
    }
    n++;
  }
  cout << primes[10001 - 1];
  return 0;
}
