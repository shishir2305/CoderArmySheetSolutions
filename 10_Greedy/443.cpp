// meeting rooms

// algorithm -> we seperate the arrays and sort them independently and use the
// greedy approach of checking whether the current arr element is smaller than
// dep element or not and increment the count else decrement the count
// t.c -> O(n log(n))
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

int Solution::solve(vector<vector<int>> &A) {

  vector<int> arr, dep;
  for (int i = 0; i < A.size(); i++) {
    arr.push_back(A[i][0]);
    dep.push_back(A[i][1]);
  }

  sort(arr.begin(), arr.end());
  sort(dep.begin(), dep.end());
  int i = 0, j = 0, res = 0, curr = 0, n = A.size();
  while (i < n && j < n)

  {
    if (arr[i] < dep[j]) {
      i++;
      curr++;
    } else {
      j++;
      curr--;
    }
    res = max(res, curr);
  }
  return res;
}

int main() { return 0; }