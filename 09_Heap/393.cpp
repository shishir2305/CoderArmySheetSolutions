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
  pair<int, int> first = {INT_MIN, -1};
  pair<int, int> second = {INT_MIN, -1};
  for (int i = 0; i < nums.size(); i++) {
    if (first.first < nums[i]) {
      first.first = nums[i];
      first.second = i;
    }
  }
  for (int i = 0; i < nums.size(); i++) {
    if (second.first < nums[i] && i != first.second) {
      second.first = nums[i];
      second.second = i;
    }
  }
  return (first.first - 1) * (second.first - 1);
}

int main() { return 0; }