// take gifts from the richest pile

// algorithm -> use a max heap, keep popping out an element and push back its
// square root in to max heap again, at the end sum all the elements of the max
// heap and return the answer
// t.c -> O(n log(n))
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

long long pickGifts(vector<int> &gifts, int k) {
  long long ans = 0;
  priority_queue<int> pq;
  for (int i = 0; i < gifts.size(); i++) {
    pq.push(gifts[i]);
  }
  for (int i = 0; i < k; i++) {
    if (!pq.empty()) {
      int temp = pq.top();
      pq.pop();
      pq.push(sqrt(temp));
    }
  }
  while (!pq.empty()) {
    ans += pq.top();
    pq.pop();
  }
  return ans;
}

int main() { return 0; }