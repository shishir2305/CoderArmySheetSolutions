// binary tree to bst

// algorithm -> store the elements of binary tree in an array, sort it and then
// use inorder traversal to store the elements in bst
// t.c -> O(n log(n))
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

void traversal(Node *root, vector<int> &inorder) {
  if (root == NULL)
    return;
  traversal(root->left, inorder);
  inorder.push_back(root->data);
  traversal(root->right, inorder);
}

void solve(Node *root, vector<int> &inorder, int &index) {
  if (root == NULL)
    return;
  solve(root->left, inorder, index);
  root->data = inorder[index++];
  solve(root->right, inorder, index);
}

Node *binaryTreeToBST(Node *root) {
  int index = 0;
  vector<int> inorder;
  traversal(root, inorder);
  sort(inorder.begin(), inorder.end());
  solve(root, inorder, index);
  return root;
}

int main() { return 0; }