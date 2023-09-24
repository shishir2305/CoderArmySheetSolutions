// height of binary tree

// algorithm -> recursively find height of left and right part thenfind the
// maximum out of this and add 1 to it to count the root node and return
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

int height(struct Node *node) {
  if (node == NULL)
    return 0;
  int leftHeight = height(node->left);
  int rightHeight = height(node->right);
  return max(leftHeight, rightHeight) + 1;
}

int main() { return 0; }