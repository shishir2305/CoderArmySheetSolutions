// remove consecutive characters

// algorithm -> use a stack and keep checking whether its top is same as the
// current element, if yes then pop out and move to the next element
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string s) {
  string ans = "";
  int i = 0;
  while (i < s.size()) {
    if (ans.size() == 0 || ans.back() != s[i]) {
      ans.push_back(s[i]);
    } else {
      ans.pop_back();
    }
    i++;
  }
  return ans;
}

int main() { return 0; }