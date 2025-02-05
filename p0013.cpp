#include <bits/stdc++.h>
using namespace std;

int main (int argc, char *argv[]) {
  vector<int> ans(55 ,0);
  for (int i = 0; i < 50; i++) {
    string s;
    cin >> s;
    vector<int> dig;
    for (auto it = s.rbegin(); it != s.rend(); it++) {
      int num = *it - '0';
      dig.push_back(num);
    }
    dig.resize(ans.size(), 0);
    for (int i = 0; i < dig.size(); i++) {
      ans[i] += dig[i];
      if (ans[i] >= 10) {
        ans[i] -= 10;
        ans[i + 1]++;
      }
    }
  }
  auto a = ans.rbegin();
  while (!(*a)) {
    a++;
  }
  for (int i = 10; i >= 0; i--) {
    cout << *a++;
  }
  return 0;
}
