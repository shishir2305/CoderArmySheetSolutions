// rain water trapped

#include <bits/stdc++.h>
using namespace std;

// algorithm 1 -> for every element we need to find greater elements both on its
// entire left and right and then find min out of these two and subtract it with
// the current height and store it in the result
// t.c -> O(n^2)
// s.c -> O(1)

// algorithm 2 -> we can do some preprocessing by already processing the greater
// element on every elements complete left and right
// t.c -> O(n)
// s.c -> O(n)

// brute force
int trap(vector<int> &height) {
  int res = 0;
  for (int i = 1; i < height.size() - 1; i++) {
    int temp1 = height[i];
    for (int j = 0; j < i; j++) {
      temp1 = max(height[j], temp1);
    }
    int temp2 = height[i];
    for (int j = i + 1; j < height.size(); j++) {
      temp2 = max(height[j], temp2);
    }
    res += min(temp1, temp2) - height[i];
  }
  return res;
}

// optimized
int trap(vector<int> &height) {
  int res = 0;
  int n = height.size();
  int left[n], right[n];
  left[0] = height[0];
  right[n - 1] = height[n - 1];
  for (int i = 1; i < n; i++) {
    left[i] = max(left[i - 1], height[i]);
  }
  for (int i = n - 2; i >= 0; i--) {
    right[i] = max(right[i + 1], height[i]);
  }
  for (int i = 1; i < n - 1; i++) {
    res += (min(left[i], right[i]) - height[i]);
  }
  return res;
}

int main() { return 0; }