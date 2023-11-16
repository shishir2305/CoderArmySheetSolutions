// delete a node in bst

// algorithm -> at first search the node to be deleted now handle 3 cases :- if
// the node has no child then simply delete it and return null, else if the node
// has one child then delete node and return its single child else if the node
// has two child then first find the minimum element in the right of the root
// and make node's data equal to that minimum element, now call the delete
// function for the right part
// t.c -> O(height)
// s.c -> O(height)

#include <bits/stdc++.h>
using namespace std;

Node *minValue(Node *root) {
  if (root == NULL)
    return NULL;
  while (root->left != NULL) {
    root = root->left;
  }
  return root;
}

Node *deleteNode(Node *root, int x) {
  if (root == NULL) {
    return NULL;
  }
  if (root->data == x) {
    // 0 child case
    if (root->left == NULL && root->right == NULL) {
      delete root;
      return NULL;
    }

    // 1 child case
    if (root->left != NULL && root->right == NULL) {
      Node *temp = root->left;
      delete root;
      return temp;
    }
    if (root->left == NULL && root->right != NULL) {
      Node *temp = root->right;
      delete root;
      return temp;
    }

    // 2 child
    if (root->left != NULL && root->right != NULL) {
      int mini = minValue(root->right)->data;
      root->data = mini;
      root->right = deleteNode(root->right, mini);
      return root;
    }
  } else if (root->data > x) {
    root->left = deleteNode(root->left, x);
    return root;
  } else if (root->data < x) {
    root->right = deleteNode(root->right, x);
    return root;
  }
  return root;
}

int main() { return 0; }