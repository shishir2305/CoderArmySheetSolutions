// ishaan loves chocolate

// algorithm -> we follow the greedy approach and find the minimum element from
// the array given
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

int chocolates(int n, vector<int> &arr) {
  return *min_element(arr.begin(), arr.end());
}

int main() { return 0; }