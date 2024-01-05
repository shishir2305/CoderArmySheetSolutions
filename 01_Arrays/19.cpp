// find equillibrium point

// algorithm -> start adding values from both left and right and at the end
// check whether they are equal or not
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

int equilibriumPoint(long long a[], int n) {

  int i = 0, j = n - 1;
  long long sum1 = a[i];
  long long sum2 = a[j];
  while (i < j) {
    if (sum1 < sum2) {
      sum1 += a[i + 1];
      i++;
    } else {
      sum2 += a[j - 1];
      j--;
    }
  }
  if (sum1 == sum2) {
    return i + 1;
  }
  return -1;
}

int main() {
  long long arr[] = {1, 3, 5, 2, 2};
  int n = sizeof(arr) / sizeof(arr[0]);
  equilibriumPoint(arr, n);
  return 0;
}