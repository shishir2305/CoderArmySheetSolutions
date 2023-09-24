// size of binary tree (count nodes)

// algorithm -> recursively find the count of left nodes and right nodes then
// simply add 1 to it to count the root node
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

int getSize(Node *root) {
  if (root == NULL)
    return 0;
  return getSize(root->left) + getSize(root->right) + 1;
}

int main() { return 0; }