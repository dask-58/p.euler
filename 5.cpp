#include <bits/stdc++.h>
using namespace std;

int main (int argc, char *argv[]) {
  int ans = 1;
  vector<int> nums(20);
  iota(nums.begin(), nums.end(), 1);
  for (int i = 0; i < 20; i++) {
    ans = lcm(ans, nums[i]);
  }
  cout << ans;
  return 0;
}
