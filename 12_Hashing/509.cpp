// largest subarray with sum 0

// algorithm 1 -> use brute force way and find the maximum size subarray with
// sum 0
// t.c -> O(n^2)
// s.c -> O(1)

// algorithm 2 -> use the concept of prefix sum and hashing, keep storing the
// prefix sums if they are not already present in the map and keep checking for
// the condition where the same prefix sum is present in map and then count the
// indexes
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

int maxLen(int arr[], int n) {
  unordered_map<int, int> mp;
  int preSum = 0;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] == 0) {
      preSum += (-1);
    } else {
      preSum += 1;
    }
    if (preSum == 0) {
      ans = max(ans, i + 1);
    }
    if (mp.find(preSum) == mp.end()) {
      mp[preSum] = i;
    }
    if (mp.find(preSum) != mp.end()) {
      ans = max(ans, i - mp[preSum]);
    }
  }
  return ans;
}

int main() { return 0; }