// n meetings in one room

// algorithm -> we use greedy algorithm and sort the array according to the
// ending time of the meeting, now for every meeting we check whether it
// coincides with other meeting or not and keep on increasing the count
// t.c -> O(n log(n))
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

static bool cmp(pair<int, int> a, pair<int, int> b) {
  return a.second < b.second;
}

int maxMeetings(int start[], int end[], int n) {
  vector<pair<int, int>> v;
  for (int i = 0; i < n; i++) {
    v.push_back(make_pair(start[i], end[i]));
  }
  sort(v.begin(), v.end(), cmp);
  int ans = 1;
  int ansEnd = v[0].second;
  for (int i = 1; i < n; i++) {
    if (v[i].first > ansEnd) {
      ans++;
      ansEnd = v[i].second;
    }
  }
  return ans;
}

int main() { return 0; }