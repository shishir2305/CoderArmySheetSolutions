// relative ranks

// algorithm -> use priority queue and store a pair of the element and its
// index, the max heap will store the element in descending order at the end
// traverse the priority queue and construct the answer accordingly
// t.c -> O(n log(n))
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

vector<string> findRelativeRanks(vector<int> &score) {
  vector<string> ans(score.size());
  priority_queue<pair<int, int>> pq;
  for (int i = 0; i < score.size(); i++) {
    pq.push({score[i], i});
  }
  int count = 1;
  while (!pq.empty()) {
    pair<int, int> temp = pq.top();
    pq.pop();
    if (count == 1) {
      ans[temp.second] = "Gold Medal";
    } else if (count == 2) {
      ans[temp.second] = "Silver Medal";
    } else if (count == 3) {
      ans[temp.second] = "Bronze Medal";
    } else {
      ans[temp.second] = to_string(count);
    }
    count++;
  }
  return ans;
}

int main() { return 0; }