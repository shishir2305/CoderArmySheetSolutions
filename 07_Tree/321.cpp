// lowest common ancestor in a binary tree

// algorithm -> whenever we find a node with given value we return that node,
// and move left and right. for a root node we can have 4 cases : if both its
// left and right are not null, if only it left is not null, if only its right
// is not null, if both its left and right are null
// t.c -> O(n)
// s.c -> O(height)

#include <bits/stdc++.h>
using namespace std;

Node *lca(Node *root, int n1, int n2) {
  if (root == NULL)
    return NULL;
  if (root->data == n1 || root->data == n2) {
    return root;
  }

  Node *left = lca(root->left, n1, n2);
  Node *right = lca(root->right, n1, n2);
  if (left != NULL && right != NULL)
    return root;
  else if (left == NULL && right != NULL)
    return right;
  else if (left != NULL && right == NULL)
    return left;
  else
    return NULL;
}

int main() { return 0; }