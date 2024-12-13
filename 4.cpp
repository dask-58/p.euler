#include <bits/stdc++.h>
using namespace std;

bool ispal(int n) {
  int og = n;
  int re = 0;
  while (n) {
    re = re * 10 + n % 10;
    n /= 10;
  }
  return og == re;
}

int main (int argc, char *argv[]) {
  int larg = 0;
  for (int i = 999; i >= 100; --i) {
    for (int j = i; j >= 100; --j) {
      int prod = i * j;
      if (ispal(prod) && prod > larg) {
        larg = prod;
      }
    }
  }
  cout << larg;
  return 0;
}
