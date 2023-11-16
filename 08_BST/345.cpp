// check for bst

// algorithm 1 -> check whether its inorder traversal is sorted or not
// t.c -> O(n)
// s.c -> O(n)

// algorithm 2 -> for a root node the left subtree can have value from INT_MIN
// to root->data and the right subtree caan have value from root->data to
// INT_MAX if this rule is violated then return false else traverse left and
// right
// t.c -> O(n)
// s.c -> O(height)

#include <bits/stdc++.h>
using namespace std;

bool solve(Node *root, int mini, int maxi) {
  if (root == NULL)
    return true;
  if (root->data > mini && root->data < maxi) {
    bool left = solve(root->left, mini, root->data);
    bool right = solve(root->right, root->data, maxi);
    return left && right;
  }
  return false;
}

bool isBST(Node *root) { return solve(root, INT_MIN, INT_MAX); }

int main() { return 0; }