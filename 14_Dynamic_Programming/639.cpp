// stickler thief

// algorithm 1 -> use recursion + memoization and use the include exclude
// principle, if you include current index then move two indexes ahead else move
// one index ahead
// t.c -> O(n)
// s.c -> O(n)

// algorithm 2 -> convert the same recursive code to tabulation method
// t.c -> O(n)
// s.c -> O(n)

// algorithm 3 -> space can be optimized by removing the helper array used in
// tabulation method and instead two variables can be used to store the
// intermediate result, and keep moving them ahead
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

// recursion + memoization
int solve(int arr[], int n, vector<int> &dp) {
  if (n < 0)
    return 0;
  if (n == 0)
    return arr[0];

  if (dp[n] != -1) {
    return dp[n];
  }

  int include = solve(arr, n - 2, dp) + arr[n];
  int exclude = solve(arr, n - 1, dp) + 0;

  dp[n] = max(include, exclude);
  return dp[n];
}

// tabulation
int FindMaxSum(int arr[], int n) {
  vector<int> dp(n, 0);
  dp[0] = arr[0];
  for (int i = 1; i < n; i++) {
    int include = dp[i - 2] + arr[i];
    int exclude = dp[i - 1] + 0;
    dp[i] = max(include, exclude);
  }
  return dp[n - 1];
}

// space optimized
int rob(vector<int> &arr) {
  int prev1 = arr[0];
  int prev2 = 0;

  for (int i = 1; i < arr.size(); i++) {
    int include = prev2 + arr[i];
    int exclude = prev1 + 0;
    int ans = max(include, exclude);
    prev2 = prev1;
    prev1 = ans;
  }
  return prev1;
}

int main() { return 0; }