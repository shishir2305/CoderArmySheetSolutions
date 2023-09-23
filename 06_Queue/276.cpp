// First non-repeating character in a stream of characters

// algorithm -> use a map to store the occurence of characters and queue to
// store the elements of the stream, check whether front of q is a repeating or
// non repeating character and process accordingly
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

string FirstNonRepeating(string A) {
  string ans;
  unordered_map<char, int> mp;
  queue<char> q;
  for (int i = 0; i < A.size(); i++) {
    char ch = A[i];
    mp[ch]++;
    q.push(ch);
    while (!q.empty()) {
      if (mp[q.front()] > 1) {
        q.pop();
      } else {
        ans.push_back(q.front());
        break;
      }
    }
    if (q.empty()) {
      ans.push_back('#');
    }
  }
  return ans;
}

int main() { return 0; }