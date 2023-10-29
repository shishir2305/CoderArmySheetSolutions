// disjoint intervals

// algorithm -> at first sort the entire array in ascending order, then start
// traversing and at every element check whether it is greater than the current
// ending element and increment the ans and change the current ending element
// t.c -> O(n log(n))
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

static bool cmp(vector<int> &a, vector<int> &b) { return a[1] < b[1]; }

int solve(vector<vector<int>> &intervals) {
  int N = intervals.size();
  sort(intervals.begin(), intervals.end(), cmp);
  int ans = 1;
  int currEnding = intervals[0][1];
  for (int i = 1; i < N; i++) {
    if (intervals[i][0] > currEnding) {
      ans++;
      currEnding = intervals[i][1];
    }
  }
  return ans;
}

int main() { return 0; }