// normal bst to balanced bst

// algorithm -> we will store the inorder traversal of the tree in an array and
// then build the tree with the middle node and make its left and right subtree
// from the element on the left and right of middle element
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

void inorder(Node *root, vector<int> &store) {
  if (root == NULL)
    return;
  inorder(root->left, store);
  store.push_back(root->data);
  inorder(root->right, store);
}

Node *treeBuilder(int s, int e, vector<int> &store) {
  if (s > e) {
    return NULL;
  }
  int mid = (s + e) / 2;
  Node *root = new Node(store[mid]);
  root->left = treeBuilder(s, mid - 1, store);
  root->right = treeBuilder(mid + 1, e, store);
  return root;
}

Node *buildBalancedTree(Node *root) {
  vector<int> store;
  inorder(root, store);
  return treeBuilder(0, store.size() - 1, store);
}

int main() { return 0; }