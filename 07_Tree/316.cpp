// boundary traversal of binary tree

// algorithm -> first traverse all the boundary nodes of left part without leaf
// nodes, next traverse all the leaf nodes, at last traverse the right part
// t.c -> O(n)
// s.c -> O(height)

#include <bits/stdc++.h>
using namespace std;

void traverseLeft(Node *root, vector<int> &ans) {
  if (root == NULL || (root->left == NULL && root->right == NULL)) {
    return;
  }
  ans.push_back(root->data);
  // if the node has left child then move left else move right
  if (root->left) {
    traverseLeft(root->left, ans);
  } else {
    traverseLeft(root->right, ans);
  }
}

void traverseLeaf(Node *root, vector<int> &ans) {
  if (root == NULL) {
    return;
  }
  if (root->left == NULL && root->right == NULL) {
    ans.push_back(root->data);
  }
  // call for left and right
  traverseLeaf(root->left, ans);
  traverseLeaf(root->right, ans);
}

void traverseRight(Node *root, vector<int> &ans) {
  if (root == NULL || (root->left == NULL && root->right == NULL)) {
    return;
  }
  if (root->right) {
    traverseRight(root->right, ans);
  } else {
    traverseRight(root->left, ans);
  }
  // while returning store the data
  ans.push_back(root->data);
}

vector<int> boundary(Node *root) {
  vector<int> ans;
  if (root == NULL)
    return ans;
  ans.push_back(root->data);
  traverseLeft(root->left, ans);
  traverseLeaf(root->left, ans);
  traverseLeaf(root->right, ans);
  traverseRight(root->right, ans);
  return ans;
}

int main() { return 0; }