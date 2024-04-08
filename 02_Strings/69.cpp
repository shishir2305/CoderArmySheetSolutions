// length of the longest substring without repeating characters

// algorithm 1 -> find all the substrings of the string and find the longest
// substring without repeating characters.
// t.c -> O(n^3)
// s.c -> O(1)

// algorithm 2 -> use two for loops to find the longest substring from an index
// with non repeating characters.
// t.c -> O(n^2)
// s.c -> O(1)

// algorithm 3 -> using the concept of sliding windows we can solve this
// problem. The main idea is we start traversing the elements and if a repeating
// character is encountered then we try to remove its earlier occurence and move
// ahead.
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
  vector<bool> count(256, 0);
  int first = 0, second = 0, len = 0;
  while (second < s.size()) {
    while (count[s[second]]) {
      count[s[first]] = 0;
      first++;
    }
    count[s[second]] = 1;
    len = max(len, second - first + 1);
    second++;
  }
  return len;
}

int main() { return 0; }