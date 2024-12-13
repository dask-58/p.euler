#include <bits/stdc++.h>
using namespace std;

int main (int argc, char *argv[]) {
  int n = 100;
  int SUM1 = (n * (n + 1) * (2 * n + 1)) / 6;
  int SUM2 = (n * (n + 1)) / 2;
  SUM2 *= SUM2;
  cout << SUM2 - SUM1;
  return 0;
}
