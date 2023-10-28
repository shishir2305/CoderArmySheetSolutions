// backspace string compare

// algorithm -> use two stacks and keep inserting elements if it is not "#" else
// pop at the end compare both the stacks by comparing their top elements and
// size
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

bool backspaceCompare(string s, string t) {
  stack<char> st1, st2;
  int i = 0, j = 0;
  while (i < s.size() || j < t.size()) {
    if (i < s.size()) {
      if (!st1.empty() && s[i] == '#') {
        st1.pop();
      } else if (s[i] != '#') {
        st1.push(s[i]);
      }
      i++;
    }
    if (j < t.size()) {
      if (!st2.empty() && t[j] == '#') {
        st2.pop();
      } else if (t[j] != '#') {
        st2.push(t[j]);
      }
      j++;
    }
  }
  while (!st1.empty() && !st2.empty()) {
    if (st1.top() != st2.top()) {
      return false;
    }
    st1.pop();
    st2.pop();
  }
  return st1.size() == st2.size();
}

int main() { return 0; }