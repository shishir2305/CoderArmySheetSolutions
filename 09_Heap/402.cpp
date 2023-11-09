// merge k sorted arrays

// algorithm -> use a min heap to store all the elements and then store it in a
// result array
// t.c -> O(n * k * log(k))
// s.c -> O(n * k)

#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<vector<int>> &A) {
  vector<int> ans;
  priority_queue<int, vector<int>, greater<int>> pq;
  for (int i = 0; i < A.size(); i++) {
    for (int j = 0; j < A[i].size(); j++) {
      pq.push(A[i][j]);
    }
  }
  while (!pq.empty()) {
    ans.push_back(pq.top());
    pq.pop();
  }
  return ans;
}

int main() { return 0; }