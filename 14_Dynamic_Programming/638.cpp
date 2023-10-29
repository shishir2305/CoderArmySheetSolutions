// count ways to reach the nth stair

// algorithm 1 -> we can reach a stair from either n-1th or n-2th stair, so we
// add them and move forward but we use recursion + memoization to optimize the
// solution
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

// House Robber

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
int solve(int n, int index, vector<int> &dp) {
  int mod = 1000000007;
  if (n == 0)
    return 0;
  if (index > n)
    return 0;
  if (index == n)
    return 1;

  if (dp[index] != -1) {
    return dp[index];
  }
  dp[index] = (solve(n, index + 1, dp) + solve(n, index + 2, dp)) % mod;
  return dp[index];
}

// tabulation
int countWays(int n) {
  int mod = 1e9 + 7;
  vector<int> dp(n + 1, 0);
  dp[0] = 1;
  dp[1] = 1;
  for (int i = 2; i <= n; i++) {
    dp[i] = (dp[i - 1] + dp[i - 2]) % mod;
  }
  return dp[n] % mod;
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

int main() { return 0; }