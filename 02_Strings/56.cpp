// merge two strings

// algorithm -> create a new string and keep appending one one character from
// both the strings
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

string merge(string s1, string s2) {
  string ans = "";
  int i = 0, j = 0;
  while (i < s1.size() || j < s2.size()) {
    if (i < s1.size()) {
      ans += s1[i];
      i++;
    }
    if (j < s2.size()) {
      ans += s2[j];
      j++;
    }
  }
  return ans;
}

int main() { return 0; }