// predecessor and successor

// algorithm 1 -> store the inorder traversal in an array and then find the
// predecessor and successor from that array
// t.c -> O(n)
// s.c -> O(n)

// algorithm 2 -> at first spot the element by moving left till we reach null,
// predecessor will always be the maximum element on the key's left subtree and
// successor will always be the minimum element on the key's right subtree
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

void prede(Node *root, Node *&pre, int key) {
  while (root) {
    if (key <= root->key) {
      root = root->left;
    } else {
      pre = root;
      root = root->right;
    }
  }
}
void succe(Node *root, Node *&suc, int key) {
  while (root) {
    if (key >= root->key) {
      root = root->right;
    } else {
      suc = root;
      root = root->left;
    }
  }
}

void findPreSuc(Node *root, Node *&pre, Node *&suc, int key) {
  prede(root, pre, key);
  succe(root, suc, key);
}

int main() { return 0; }