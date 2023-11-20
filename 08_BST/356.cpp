// inorder successor in bst

// algorithm -> find the element first, then find the minimum element in its
// subtree
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

Node *inOrderSuccessor(Node *root, Node *x) {
  Node *ans = NULL;
  while (root) {
    if (root->data <= x->data) {
      root = root->right;
    } else {
      ans = root;
      root = root->left;
    }
  }
  return ans;
}

int main() { return 0; }