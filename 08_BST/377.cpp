// pairs violating bst property

// algorithm 1 -> store the inorder in an array and then count if arr[i]>arr[j]
// using two for loops
// t.c -> O(n^2)
// s.c -> O(1)

// algorithm 2 -> Store the in-order traversal of the binary tree in an array.
// Now, count the number of inversions (i.e. a[i] > a[j] and i < j) in this
// array using Mergesort algorithm
// t.c -> O(n log(n))
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

void inorder(Node *root, vector<int> &store) {
  if (root == NULL)
    return;
  inorder(root->left, store);
  store.push_back(root->data);
  inorder(root->right, store);
}

void merge(vector<int> &arr, int l, int mid, int r, int &inversions) {
  int i = l, j = mid + 1, k = 0;
  int temp[r - l + 1];
  while (i <= mid && j <= r)
    if (arr[i] <= arr[j])
      temp[k++] = arr[i++];
    else {
      inversions += (mid - i + 1);
      temp[k++] = arr[j++];
    }
  while (i <= mid)
    temp[k++] = arr[i++];
  while (j <= r)
    temp[k++] = arr[j++];
  k = 0;
  for (int i = l; i <= r; i++) {
    arr[i] = temp[k++];
  }
}

void mergeSort(vector<int> &arr, int s, int e, int &ans) {
  if (s < e) {
    int mid = (s + e) / 2;
    mergeSort(arr, s, mid, ans);
    mergeSort(arr, mid + 1, e, ans);
    merge(arr, s, mid, e, ans);
  }
}

int pairsViolatingBST(Node *root, int n) {
  int ans = 0;
  vector<int> store;
  inorder(root, store);
  mergeSort(store, 0, store.size() - 1, ans);
  return ans;
}

int main() { return 0; }