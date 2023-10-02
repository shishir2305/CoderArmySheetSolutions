// last stone weight

// algorithm -> use the property of max heap that stores elements in a
// descending order, and at every traversal pop out two elements and perform the
// said actions until the size is greater than 1
// t.c -> O(n log(n))
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

int lastStoneWeight(vector<int> &stones) {
  priority_queue<int> pq;
  for (int i = 0; i < stones.size(); i++) {
    pq.push(stones[i]);
  }
  while (pq.size() > 1) {
    int temp1 = pq.top();
    pq.pop();
    int temp2 = pq.top();
    pq.pop();
    if (temp1 != temp2) {
      pq.push(temp1 - temp2);
    }
  }
  if (pq.empty()) {
    return 0;
  }
  return pq.top();
}

int main() { return 0; }