// count non-leaf nodes in tree

// algorithm -> count all the nodes and count leaf nodes now simply subtract
// leaf nodes from nodes
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

void solve(Node *root, int &leaf, int &nodes) {
  if (root == NULL)
    return;
  if (!root->left && !root->right) {
    leaf++;
  }
  nodes++;
  solve(root->left, leaf, nodes);
  solve(root->right, leaf, nodes);
}

int countNonLeafNodes(Node *root) {
  int leafNodes = 0, nodes = 0;
  solve(root, leafNodes, nodes);
  return nodes - leafNodes;
}

int main() { return 0; }