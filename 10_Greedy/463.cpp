// gas station

// algorithm -> the idea is to find a point which satisfies the condition and
// then calculate whether the balance fuel left is greater than the deficit or
// not
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

int Solution::canCompleteCircuit(const vector<int> &A, const vector<int> &B) {
  int deficit = 0;
  int balance = 0;
  int start = 0;
  for (int i = 0; i < A.size(); i++) {
    balance += A[i] - B[i];
    if (balance < 0) {
      deficit += balance;
      start = i + 1;
      balance = 0;
    }
  }
  if (deficit + balance >= 0) {
    return start;
  }
  return -1;
}

int main() { return 0; }