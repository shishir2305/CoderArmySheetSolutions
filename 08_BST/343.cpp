// search a node in bst

// algorithm -> if root->data is lesser then traverse right of the root else
// traverse left till you find the required node
// t.c -> O(height)
// s.c -> O(height)

#include <bits/stdc++.h>
using namespace std;

bool search(Node *root, int x) {
  if (root == NULL) {
    return false;
  }
  if (root->data == x) {
    return true;
  } else if (root->data > x) {
    search(root->left, x);
  } else {
    search(root->right, x);
  }
}

int main() { return 0; }