// smallest distinct window

// algorithm 1 -> create all the substrings and check if there exists a
// substring with all the unique characters
// t.c -> O(n^2)
// s.c -> O(n^2) -> to store all the strings

// algorithm 2 -> using sliding windows technique to find a substring which
// contains all the unique characters and then decreasing its size to find a
// substring which meets all the condition and has a smaller size
// t.c -> O(256 * n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

int findSubString(string str) {
  vector<int> count(256, 0);
  int first = 0, second = 0, diff = 0, ans = str.size();

  // finding all the unique characters
  while (first < str.size()) {
    if (count[str[first]] == 0) {
      diff++;
    }
    count[str[first]]++;
    first++;
  }

  // restoring the count array
  for (int i = 0; i < 256; i++) {
    count[i] = 0;
  }

  first = 0;

  // finding a substring with all the unique characters
  while (second < str.size()) {

    // case 1 -> when diff becomes zero, that means we have found a substring
    // which meets all the conditions and we simply need to store the length
    while (diff && second < str.size()) {
      if (count[str[second]] == 0) {
        diff--;
      }
      count[str[second]]++;
      second++;
    }
    ans = min(ans, second - first);

    // case 2 -> after diff becomes we need to make it 1 atleast for the process
    // to move on, so we will try moving the first pointer ahead and find a
    // substring with lesser size
    while (diff != 1) {
      ans = min(ans, second - first);
      count[str[first]]--;

      if (count[str[first]] == 0) {
        diff++;
      }
      first++;
    }
  }
  return ans;
}

int main() { return 0; }