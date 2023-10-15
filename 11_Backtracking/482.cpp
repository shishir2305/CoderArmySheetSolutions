// permutations

// algorithm -> the process is simply every element wants to stand at the first
// place so we swap their places and store it in the answer and then backtrack
// to the previous configuration
// t.c -> O(n! * n)
// s.c -> O(n! * n)

#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &nums, int index, int n, vector<vector<int>> &ans) {
  if (index >= n) {
    ans.push_back(nums);
    return;
  }

  for (int i = index; i < n; i++) {
    if (i != index && nums[i] == nums[i - 1]) {
      continue;
    }
    swap(nums[i], nums[index]);
    solve(nums, index + 1, n, ans);
    swap(nums[i], nums[index]);
  }
}

vector<vector<int>> permute(vector<int> &nums) {
  vector<vector<int>> ans;
  int n = nums.size();
  if (n == 1) {
    ans.push_back(nums);
    return ans;
  }
  sort(nums.begin(), nums.end());
  solve(nums, 0, n, ans);
  return ans;
}

int main() { return 0; }