// minimum cost of ropes

// algorithm -> use a min heap to get the two smallest elements sum them and
// then again push it to the min heap repeat these steps until the size of min
// heap is one
// tc -> O(n log(n))
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

long long minCost(long long arr[], long long n) {
  long long ans = 0;
  priority_queue<long long, vector<long long>, greater<long long>> pq;
  for (int i = 0; i < n; i++) {
    pq.push(arr[i]);
  }
  while (pq.size() > 1) {
    long long ele1 = pq.top();
    pq.pop();
    long long ele2 = pq.top();
    pq.pop();
    ans += ele1 + ele2;
    pq.push(ele1 + ele2);
  }
  return ans;
}

int main() { return 0; }