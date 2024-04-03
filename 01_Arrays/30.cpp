// Rearrange an array with O(1) extra space

// algorithm -> the main idea is to store 2 numbers on the same index using the
// logic of (dividend= divisor * quotient + remainder) or
// arr[i]=arr[i]+(arr[arr[i]]%n)*n;
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

void arrange(long long arr[], int n) {

  for (int i = 0; i < n; i++) {
    long long x = arr[i];
    long long y = arr[x];
    arr[i] = x + (y % n) * n;
  }

  for (int i = 0; i < n; i++) {
    arr[i] /= n;
  }
}

int main() { return 0; }