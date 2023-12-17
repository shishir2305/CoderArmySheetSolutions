// parenthesis checker

// algorithm -> use a stack and store the opening brackets and check and if
// closing brackets are encountered then check whether the top of stack is its
// counter part
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

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

int main() { return 0; }