// anagram of string

// algorithm -> use a frequency array to store the frequency of characters, at
// last count the dirrences between both the arrays
// t.c -> O(n)
// s.c -> O(26)

#include <bits/stdc++.h>
using namespace std;

int remAnagram(string str1, string str2) {
  vector<int> v1(26, 0);
  vector<int> v2(26, 0);

  int cnt = 0;
  for (int i = 0; i < str1.size(); i++) {
    v1[str1[i] - 'a']++;
  }

  for (int i = 0; i < str2.size(); i++) {
    v2[str2[i] - 'a']++;
  }

  for (int i = 0; i < 26; i++) {
    cnt += abs(v1[i] - v2[i]);
  }

  return cnt;
}

int main() { return 0; }