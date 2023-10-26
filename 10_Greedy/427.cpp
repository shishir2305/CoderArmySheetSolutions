// assign mice to holes

// algorithm -> sort both the arrays and then find the pair with maximum
// absolute difference
// t.c -> O(n log(n))
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

int assignMiceHoles(int N, int A[], int B[]) {
  sort(A, A + N);
  sort(B, B + N);
  int maxi = INT_MIN;
  for (int i = 0; i < N; i++) {
    maxi = max(maxi, abs(A[i] - B[i]));
  }
  return maxi;
}

int main() { return 0; }