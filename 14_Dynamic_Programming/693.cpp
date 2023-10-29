// house robber II

// algorithm -> the problem can be solved using the same concept as that of
// house robber I just with one edge case, the first and the last element are
// neighbours so when we include first element we won't include last one and
// vice versa and find two separate answers and at last we return the maximum of
// the two
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

int FindMaxSum(vector<int> &arr, int start, int n) {
  int prev1 = arr[start];
  int prev2 = 0;

  for (int i = start + 1; i < n; i++) {
    int include = prev2 + arr[i];
    int exclude = prev1 + 0;
    int ans = max(include, exclude);
    prev2 = prev1;
    prev1 = ans;
  }
  return prev1;
}

int rob(vector<int> &nums) {
  if (nums.size() == 1)
    return nums[0];
  int ans1 = FindMaxSum(nums, 0, nums.size() - 1);
  int ans2 = FindMaxSum(nums, 1, nums.size());
  return max(ans1, ans2);
}

int main() { return 0; }