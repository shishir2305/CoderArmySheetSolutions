// insert a node in bst

// algorithm -> check the root node if the data is smaller than the root node
// the insert data in the left part else in the right part
// t.c -> O(height)
// s.c -> O(height)

#include <bits/stdc++.h>
using namespace std;

Node *insert(Node *root, int key) {
  if (root == NULL) {
    return new Node(key);
  } else if (root->data < key) {
    root->right = insert(root->right, key);
  } else if (root->data > key) {
    root->left = insert(root->left, key);
  }
  return root;
}

int main() { return 0; }