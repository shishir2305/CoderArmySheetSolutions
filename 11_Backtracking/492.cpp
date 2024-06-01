// generate parenthesis

// algorithm 1 -> using the given number generate all possible parenthesis
// combinations and store them. At last use the store combinations and check
// whether they are balanced or not. t.c -> s.c ->

// algorithm 2 -> use the approach of pick and don't pick and here we have two
// conditions pick left or right brackets. Left brackets can only be picked if
// their value is less than that of n and right brackets can only be picked if
// their value is less than that of left. Since, number of right brackets cannot
// exceed no. of left brackets to form a balanced parenthesis combination.
// t.c -> O(2^n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

// brute force approach
class Solution {
public:
  bool ispar(string x) {
    stack<char> st;
    for (int i = 0; i < x.size(); i++) {
      if (x[i] == ')' && !st.empty() && st.top() == '(') {
        st.pop();
      } else if (x[i] == '}' && !st.empty() && st.top() == '{') {
        st.pop();
      } else if (x[i] == ']' && !st.empty() && st.top() == '[') {
        st.pop();
      } else if (x[i] == '(' || x[i] == '{' || x[i] == '[') {
        st.push(x[i]);
      } else {
        return false;
      }
    }
    return st.empty();
  }

  void solve(string &s, set<string> &ans, int index) {
    if (index >= s.size()) {
      if (s[0] == ')' || s[s.size() - 1] == '(') {
        return;
      }
      ans.insert(s);
      return;
    }
    for (int i = index; i < s.size(); i++) {
      swap(s[i], s[index]);
      solve(s, ans, index + 1);
      swap(s[i], s[index]);
    }
  }

  vector<string> AllParenthesis(int n) {
    string str = "";
    for (int i = 0; i < n; i++) {
      str += "()";
    }
    set<string> st;
    vector<string> ans;
    solve(str, st, 0);
    for (auto it : st) {
      if (ispar(it)) {
        ans.push_back(it);
      }
    }
    return ans;
  }
};

// optimized
void solve(int n, int left, int right, string &temp, vector<string> &ans) {
  if (left == n && right == n) {
    ans.push_back(temp);
    return;
  }

  // adding left parenthesis
  if (left < n) {
    temp.push_back('(');
    solve(n, left + 1, right, temp, ans);
    temp.pop_back();
  }

  // adding right parenthesis
  if (right < left) {
    temp.push_back(')');
    solve(n, left, right + 1, temp, ans);
    temp.pop_back();
  }
}

vector<string> AllParenthesis(int n) {
  vector<string> ans;
  string temp = "";
  int left = 0, right = 0;

  solve(n, left, right, temp, ans);
  return ans;
}

int main() { return 0; }