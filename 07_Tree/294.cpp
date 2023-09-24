// determine if two tree are identical

// algorithm -> recursively check the left and right part if they are identical
// or not
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