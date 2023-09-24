// count leaves in binary tree

// algorithm -> if root is null then return 0 else if it is a leaf node then
// return 1 now recursively check for both the left and right part of the root
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

int countLeaves(Node *root) {
  if (root == NULL) {
    return 0;
  }
  if (!root->left && !root->right) {
    return 1;
  }
  return countLeaves(root->left) + countLeaves(root->right);
}

int main() { return 0; }