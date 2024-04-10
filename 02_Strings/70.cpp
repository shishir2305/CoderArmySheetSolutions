// longest prefix suffix

// algorithm 1 -> find all the prefixes and suffixes and then compare
// accordingly.
// t.c -> O(n^2)
// s.c -> O(1)

// algorithm 2 -> use KMP algorithm to efficiently find the longest prefix
// suffix
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

// brute force approach
class Solution {
private:
  string suffix(string str, int start, int end) {
    string temp = "";
    for (int i = start; i < end; i++) {
      temp += str[i];
    }
    return temp;
  }

public:
  int lps(string s) {
    int ans = 0;
    for (int i = 0; i < s.size() - 1; i++) {
      if (s.substr(0, i + 1) == suffix(s, s.size() - i - 1, s.size())) {
        ans = i + 1;
      }
    }
    return ans;
  }
};

// optimized approach (KMP algorithm)
int lps(string s) {
  vector<int> lps(s.size(), 0);
  int pre = 0, suf = 1;

  while (suf < s.size()) {
    if (s[pre] == s[suf]) {
      lps[suf] = pre + 1;
      pre++;
      suf++;
    } else {
      if (pre == 0) {
        lps[suf] = 0;
        suf++;
      } else {
        pre = lps[pre - 1];
      }
    }
  }
  return lps[s.size() - 1];
}

int main() { return 0; }