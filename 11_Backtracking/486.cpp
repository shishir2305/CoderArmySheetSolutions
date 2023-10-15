// permutations of a given string

// algorithm -> the process is simply every element wants to stand at the first
// place so we swap their places and store it in the answer and then backtrack
// to the previous configuration
// t.c -> O(n! * n)
// s.c -> O(n! * n)

#include <bits/stdc++.h>
using namespace std;

void solve(string &s, int index, int n, set<string> &ans) {
  if (index >= n) {
    ans.insert(s);
    return;
  }

  for (int i = index; i < n; i++) {
    swap(s[i], s[index]);
    solve(s, index + 1, n, ans);
    swap(s[i], s[index]);
  }
}

vector<string> find_permutation(string s) {
  set<string> ans;
  int n = s.size();
  solve(s, 0, n, ans);
  vector<string> result;
  for (auto it : ans) {
    result.push_back(it);
  }
  sort(result.begin(), result.end());
  return result;
}

int main() { return 0; }