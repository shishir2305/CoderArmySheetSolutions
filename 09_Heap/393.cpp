// maximum product of two elements

// algorithm -> sort the array and return the product of the last 2 elements
// t.c -> O(n log(n))
// s.c -> O(1)

// algorithm 2 -> return the product of 2 max elements
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

int maxProduct(vector<int> &nums) {
  int maxA = INT_MIN, maxB = INT_MIN;
  for (int i = 0; i < nums.size(); i++) {
    if (maxA < nums[i]) {
      maxB = maxA;
      maxA = nums[i];
    } else if (maxB < nums[i]) {
      maxB = nums[i];
    }
  }
  return (maxA - 1) * (maxB - 1);
}

int main() { return 0; }