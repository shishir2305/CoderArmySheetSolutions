// minimum characters to be added at front to make string palindrome

// algorithm 1 -> starting from the last character keep checking whether it is a
// palindrome or not till 0th character and keep incrementing the resultant
// count by 1 if the current string is not a palindrome.
// t.c -> O(n^2)
// s.c -> O(1)

// algorithm 2 -> we can find the longest palindrome prefix using lps and then
// subtract its length from the original length of the string.
// Ex -> ROORSP $ SPROOR, the problem is changed to longest prefix suffix
// t.c -> O(n)
// s.c -> O(n)

// brute force
bool checkPalindrome(string s, int start, int end) {
  while (start <= end) {
    if (s[start] == s[end]) {
      start++;
      end--;
    } else {
      return false;
    }
  }
  return true;
}

int minChar(string str) {
  int ans = 0;

  for (int i = str.size() - 1; i >= 0; i--) {
    if (checkPalindrome(str, 0, i)) {
      return ans;
    } else {
      ans++;
    }
  }
  return ans;
}

// optimized
void findLps(string str, vector<int> &lps) {
  int pre = 0, suf = 1;

  while (suf < str.size()) {
    if (str[pre] == str[suf]) {
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
}
int minChar(string str) {
  string temp = str;
  temp += "$"; // this is acting as a separator
  reverse(str.begin(), str.end());
  temp += str;
  vector<int> lps(temp.size(), 0);
  findLps(temp, lps);

  return str.size() - lps[temp.size() - 1];
}

#include <bits/stdc++.h>
using namespace std;

int main() { return 0; }