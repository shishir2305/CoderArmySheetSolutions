// preorder to postorder

// algorithm 1 -> sort preorder to get inorder and use it to create a bst using
// preorder and inorder
// t.c -> O(n log(n))
// s.c -> O(n)

// algorithm 2 -> use range based approach and start from first index and keep
// inserting elements if it lies in the range of min and max else return null,
// at last recursive build the left and right subtree
// t.c -> o(n)
// s.c -> O(height)

#include <bits/stdc++.h>
using namespace std;

Node *solve(int pre[], int mini, int maxi, int &index, int n) {
  if (index >= n) {
    return NULL;
  }
  if (pre[index] < mini || pre[index] > maxi) {
    return NULL;
  }
  Node *root = newNode(pre[index++]);
  root->left = solve(pre, mini, root->data, index, n);
  root->right = solve(pre, root->data, maxi, index, n);
  return root;
}

Node *post_order(int pre[], int size) {
  int index = 0;
  int mini = INT_MIN;
  int maxi = INT_MAX;
  Node *root = solve(pre, mini, maxi, index, size);
}

int main() { return 0; }