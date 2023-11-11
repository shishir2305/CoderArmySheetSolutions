// cyclically rotate an array by one

// algorithm -> shift all the elements from left to right one place and then
// copy the last element in the first place
// t.c. -> O(n)
// s.c.-> O(1)

#include <bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n) {
  int element = arr[n - 1];
  for (int i = n - 1; i >= 0; i--) {
    arr[i] = arr[i - 1];
  }
  arr[0] = element;
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  rotate(arr, 5);
  for (auto it : arr) {
    cout << it << endl;
  }
  return 0;
}