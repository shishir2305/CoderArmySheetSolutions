// combinations

// algorithm -> use backtracking along with the concept of pick and don't pick
// t.c -> O(2^n)
// s.c -> O(r)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  void solve(int &n, int index, int &k, vector<int> &output,
             vector<vector<int>> &ans) {
    if (index > n) {
      if (output.size() == k) {
        ans.push_back(output);
      }
      return;
    }

    // pick
    output.push_back(index);
    solve(n, index + 1, k, output, ans);
    output.pop_back();

    // don't pick
    solve(n, index + 1, k, output, ans);
  }

  vector<vector<int>> combine(int n, int k) {
    vector<vector<int>> ans;
    vector<int> output;
    solve(n, 1, k, output, ans);
    return ans;
  }
};

int main() { return 0; }