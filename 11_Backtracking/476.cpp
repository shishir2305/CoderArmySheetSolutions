// letter phone

// algorithm -> using recursion along with for loop we can successively go to
// every element of a phone letter and store it
// t.c -> O(4^n * n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

void solve(string digits, int index, string output, vector<string> &ans,
           vector<string> &mapping) {
  if (index >= digits.size()) {
    ans.push_back(output);
    return;
  }
  string value = mapping[digits[index] - '0'];
  for (int i = 0; i < value.size(); i++) {
    output.push_back(value[i]);
    solve(digits, index + 1, output, ans, mapping);
    output.pop_back();
  }
}

vector<string> letterCombinations(string digits) {
  vector<string> ans;
  if (digits.size() == 0) {
    return ans;
  }
  vector<string> mapping = {"",    "",    "abc",  "def", "ghi",
                            "jkl", "mno", "pqrs", "tuv", "wxyz"};
  string output = "";
  solve(digits, 0, output, ans, mapping);
  return ans;
}

int main() { return 0; }