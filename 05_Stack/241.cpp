// decode string

// algorithm -> use a stack and simply insert if '[' or alphabets or numbers are
// encountered, else pop till you find the opening bracket and store everything
// in a string, then pop the number of times to repeat the string and make a new
// string with required repeatitions at the end push newly made string to the
// stack
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

string decodeString(string s) {
  stack<char> st;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == ']') {
      string temp;
      while (!st.empty() && st.top() != '[') {
        temp = st.top() + temp;
        st.pop();
      }
      st.pop();
      string num;
      while (!st.empty() && isdigit(st.top())) {
        num = st.top() + num;
        st.pop();
      }
      int number = stoi(num);
      string repeat;
      for (int j = 0; j < number; j++) {
        repeat += temp;
      }
      for (int k = 0; k < repeat.size(); k++) {
        st.push(repeat[k]);
      }
    } else {
      st.push(s[i]);
    }
  }
  string res;
  while (!st.empty()) {
    res += st.top();
    st.pop();
  }
  reverse(res.begin(), res.end());
  return res;
}

int main() { return 0; }