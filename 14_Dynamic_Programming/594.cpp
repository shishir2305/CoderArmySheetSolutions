// print first n fibonacci numbers

// algorithm -> use tabulation method of dynamic programming and for every ith
// element its value will be the summation of its previous two elements
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

vector<long long> printFibb(int n) {
  vector<long long> ans(n);
  ans[0] = 1;
  ans[1] = 1;
  for (int i = 2; i < n; i++) {
    ans[i] = ans[i - 1] + ans[i - 2];
  }
  return ans;
}

int main() { return 0; }