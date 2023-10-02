// inorder traversal and bst

// algorithm -> the inorder traversal of a bst gives a sorted array
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

int isRepresentingBST(int arr[], int N) {
  for (int i = 0; i < N - 1; i++) {
    if (arr[i] >= arr[i + 1]) {
      return false;
    }
  }
  return true;
}

int main() { return 0; }