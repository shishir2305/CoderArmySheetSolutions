// number and the digit sum

// algorithm 1 -> simply for every number check whether it satisfies the
// condition or not by checking its digitsum
// t.c -> O(n log(n))
// s.c -> O(1)

// algorithm 2 -> use the concept of binary search and minimize the search
// space, simply find a number that satisfies the given condition and then check
// numbers on its left by decreasing the value of high
// t.c -> O(log n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

int digitSum(int n) {
  int ans = 0;
  while (n) {
    ans += n % 10;
    n /= 10;
  }
  return ans;
}

long long int numberCount(long long int N, long long int K) {
  long long low = 1, high = N;
  while (low <= high) {
    long long int mid = low + (high - low) / 2;
    if (mid - digitSum(mid) < K) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return N - high;
}

int main() { return 0; }