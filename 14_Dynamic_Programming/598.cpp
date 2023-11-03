// count number of hops

// algorithm 1 -> we can use recursion and memoization, we can reach 0th stair
// by 1 way i.e. by not moving anywhere, 1th stair by 1 way from 0th stair and
// 2nd stair by 2 ways from 0 and 1th stair
// t.c -> O(3^n)
// s.c -> O(n)

// algorithm 2 -> we can optimize the time complexity by converting the
// recursive function using tabulation method
// t.c -> O(n)
// s.c -> O(n)

// algorithm 3 -> space optimized approach can be used to remove the extra space
// by using variables instead of array to store intermediate results
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

// tabulation method
long long countWaysTab(int n) {
  int mod = 1000000007;
  vector<long long> dp(n + 1, -1);
  dp[0] = 1;
  dp[1] = 1;
  dp[2] = 2;
  for (int i = 3; i <= n; i++) {
    dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % mod;
  }
  return dp[n];
}

// space optimized
long long countWaysOptimized(int n) {
  int mod = 1000000007;
  if (n == 0 || n == 1)
    return 1;
  if (n == 2)
    return 2;
  long long a = 1;
  long long b = 1;
  long long c = 2;
  for (int i = 3; i <= n; i++) {
    long long ans = (a + b + c) % mod;
    a = b;
    b = c;
    c = ans;
  }
  return c;
}

int main() { return 0; }