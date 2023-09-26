// foldable binary tree

// algorithm -> we need to check whether the sub trees are identical or not by
// comparing the structure of root1->left with root2->right and root1->right
// with root2->left
// t.c -> O(n)
// s.c -> O(height)

#include <bits/stdc++.h>
using namespace std;

bool isIdentical(Node *root1, Node *root2) {
  if (root1 == NULL && root2 == NULL) {
    return true;
  }
  if (root1 == NULL || root2 == NULL) {
    return false;
  }
  bool res1 = isIdentical(root1->left, root2->right);
  bool res2 = isIdentical(root1->right, root2->left);
  return res1 && res2;
}

bool IsFoldable(Node *root) {
  if (root == NULL) {
    return true;
  }
  return isIdentical(root->left, root->right);
}

int main() { return 0; }