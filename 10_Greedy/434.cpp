// assign cookies

// algorithm -> using greedy approach and sorting the array in descending order
// and then applying the required condition and increment the count
// t.c -> O(max( NlogN , MlogM ))
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  static bool cmp(int &a, int &b) { return a > b; }

  int findContentChildren(vector<int> &g, vector<int> &s) {
    sort(g.begin(), g.end(), cmp);
    sort(s.begin(), s.end(), cmp);
    int count = 0;
    int i = 0, j = 0, n = min(g.size(), s.size());
    while (i < g.size() && j < s.size()) {
      if (g[i] <= s[j]) {
        count++;
        i++;
        j++;
      } else {
        i++;
      }
    }
    return count;
  }
};

int main() { return 0; }