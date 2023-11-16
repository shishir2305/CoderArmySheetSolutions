// kth largest element in bst

// algorithm 1 -> store the inorder traversal in an array and then find the kth
// largest element
// t.c -> O(n)
// s.c -> O(n)

// algorithm 2 -> we use the inorder traversal without storing the elements but
// keeping a count i and keep checking whether it is equal to k and return the
// root
// t.c -> O(n)
// s.c -> O(height)

#include <bits/stdc++.h>
using namespace std;

int solve(Node *root, int k, int &index) {
  if (root == NULL)
    return -1;

  int right = solve(root->right, k, index);
  if (right != -1)
    return right;
  index++;
  if (index == k)
    return root->data;
  return solve(root->left, k, index);
}

int kthLargest(Node *root, int k) {
  int index = 0;
  return solve(root, k, index);
}

int main() { return 0; }