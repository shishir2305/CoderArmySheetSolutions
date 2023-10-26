// nth fibonacci number

// algorithm 1 -> tabulation method of dynamic programming and use an array to
// store and calculate the results
// t.c -> O(n)
// s.c -> O(n)

// algorithm 2 -> use two variables and keep shifting them to optimize some
// space
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

// algorithm 1
int nthFibonacciTabulation(int n) {
  int mod = 1000000007;
  if (n == 1) {
    return 1;
  }
  vector<int> ans(n);
  ans[0] = 1;
  ans[1] = 1;
  for (int i = 2; i < n; i++) {
    ans[i] = (ans[i - 1] + ans[i - 2]) % mod;
  }
  return ans[n - 1];
}

// space optimized
int nthFibonacci(int n) {
  int mod = 1000000007;
  if (n == 1) {
    return 1;
  }
  int a = 1, b = 1;
  for (int i = 2; i < n; i++) {
    int currVal = (a + b) % mod;
    a = b;
    b = currVal;
  }
  return b;
}

int main() { return 0; }