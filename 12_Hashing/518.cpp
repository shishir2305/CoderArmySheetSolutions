// triple sum in array

// algorithm -> sort the array, now for every element check whether there is a
// pair whose sum is equal to the target-currElement
// t.c -> O(n^2)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

bool find3Numbers(int arr[], int n, int x) {
  sort(arr, arr + n);
  for (int i = 0; i < n - 2; i++) {
    int j = i + 1, k = n - 1;
    while (j < k) {
      if (arr[j] + arr[k] == x - arr[i]) {
        return true;
      }
      if (arr[j] + arr[k] < x - arr[i]) {
        j++;
      } else {
        k--;
      }
    }
  }
  return false;
}

int main() { return 0; }