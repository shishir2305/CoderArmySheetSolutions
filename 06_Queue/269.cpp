// time needed to buy tickets

// algorithm -> use a queue to repeatedly decrease elements and insert element
// until the required conditition is satisfied
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

int timeRequiredToBuy(vector<int> &tickets, int k) {
  int count = 0;
  queue<pair<int, int>> q;
  for (int i = 0; i < tickets.size(); i++) {
    if (i == k) {
      q.push({tickets[i], 1});
    } else {
      q.push({tickets[i], 0});
    }
  }
  while (true) {
    if (q.empty()) {
      break;
    }
    count++;
    pair<int, int> front = q.front();
    q.pop();
    if (front.first - 1 == 0 && front.second == 1) {
      return count;
    }
    if (front.first - 1 > 0) {
      q.push({front.first - 1, front.second});
    }
  }
  return count;
}

int main() { return 0; }