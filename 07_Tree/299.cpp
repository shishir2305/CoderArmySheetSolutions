// maximum depth of binary tree

// algorithm -> recursively find max depth for left and right node of the root
// now find the max out of two and add one to it
// t.c -> O(n)
// s.c -> O(height)

#include <bits/stdc++.h>
using namespace std;

int maxDepth(Node *root) {
  if (root == NULL)
    return 0;
  int left = maxDepth(root->left);
  int right = maxDepth(root->right);
  return max(left, right) + 1;
}

int main() { return 0; }