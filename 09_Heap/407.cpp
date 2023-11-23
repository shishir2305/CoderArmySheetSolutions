// is binary tree heap

// algorithm -> at first check whether the binary tree is complete or not and
// then check whether root data is greater than both its children or not
// to check complete binary tree, we simply count all the nodes and then for
// every index check whether it is within the total nodes range or not
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

int countNodes(Node *root) {
  if (root == NULL)
    return 0;
  int ans = 1 + countNodes(root->left) + countNodes(root->right);
  return ans;
}

bool isCbt(Node *root, int index, int totalNodes) {
  if (root == NULL)
    return true;
  if (index >= totalNodes) {
    return false;
  } else {
    bool left = isCbt(root->left, 2 * index + 1, totalNodes);
    bool right = isCbt(root->right, 2 * index + 2, totalNodes);
    return left && right;
  }
}

bool maxOrder(Node *root) {
  if (!root->left && !root->right)
    return true;
  if (!root->right) {
    return root->data > root->left->data;
  } else {
    bool left = maxOrder(root->left);
    bool right = maxOrder(root->right);
    if (left && right && root->data > root->left->data &&
        root->data > root->right->data) {
      return true;
    } else {
      return false;
    }
  }
}

bool isHeap(struct Node *root) {
  if (root == NULL)
    return true;
  int index = 0;
  int totalNodes = countNodes(root);
  return (isCbt(root, index, totalNodes) && maxOrder(root));
}

int main() { return 0; }