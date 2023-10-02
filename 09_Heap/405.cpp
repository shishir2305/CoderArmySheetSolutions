// k largest elements

// algorithm -> use min heap to store the elements, if min heap size is less
// than k then simply store elements else check whether the top of min heap is
// less than the current element or not this optimizes the process by only
// storing k elements at a time in the min heap
// t.c -> O(K+(N-K)*logK)
// s.c -> O(K+(N-K)*logK)

#include <bits/stdc++.h>
using namespace std;

vector<int> kLargest(int arr[], int n, int k) {
  priority_queue<int, vector<int>, greater<int>> pq;
  for (int i = 0; i < n; i++) {
    if (pq.size() == k) {
      if (pq.top() < arr[i]) {
        pq.pop();
        pq.push(arr[i]);
      }
    } else {
      pq.push(arr[i]);
    }
  }
  vector<int> ans(pq.size());
  int count = pq.size() - 1;
  while (!pq.empty()) {
    ans[count--] = pq.top();
    pq.pop();
  }
  return ans;
}

int main() { return 0; }