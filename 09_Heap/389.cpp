// height of heap

// algorithm -> The number of elements in the nth row of a binary heap can be
// calculated using the formula 2^(n-1), where "n" is the row number
// t.c -> O(log(n))
// s.c -> O(1)
// floor(log2(N)); t.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

int heapHeight(int N, int arr[]) {
  int i = 0;
  while (N > 0) {
    N -= pow(2, i);
    i++;
  }
  return i - 1;
}

int main() { return 0; }