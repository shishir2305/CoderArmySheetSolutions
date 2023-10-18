// combination sum

// algorithm -> classical pick and don't pick problem, but we can pick a number
// any number of times until it exceeds the target
// t.c -> O(2^target * k)
// s.c -> O(k * x)

#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &candidates, vector<vector<int>> &ans, vector<int> &ds,
           int target, int index) {
  if (index >= candidates.size()) {
    if (target == 0) {
      ans.push_back(ds);
    }
    return;
  }
  if (candidates[index] <= target) {
    ds.push_back(candidates[index]);
    solve(candidates, ans, ds, target - candidates[index], index);
    ds.pop_back();
  }

  solve(candidates, ans, ds, target, index + 1);
}

vector<vector<int>> combinationSum(vector<int> &candidates, int target) {
  int index = 0;
  vector<vector<int>> ans;
  vector<int> ds;
  solve(candidates, ans, ds, target, index);
  return ans;
}

int main() { return 0; }