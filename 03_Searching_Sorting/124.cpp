// quick sort

// algorithm -> we need choose an element (last element) as pivot and place it
// at its correct position and then repeat the above step for its left and right
// half.
// t.c -> O(n^2)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

void quickSort(int arr[], int low, int high) {
  if (low >= high)
    return;

  int pivot = partition(arr, low, high);
  quickSort(arr, low, pivot - 1);
  quickSort(arr, pivot + 1, high);
}

int partition(int arr[], int start, int end) {
  int pos = start;

  for (int i = start; i <= end; i++) {
    if (arr[i] <= arr[end]) {
      swap(arr[pos], arr[i]);
      pos++;
    }
  }

  return pos - 1;
}

int main() { return 0; }