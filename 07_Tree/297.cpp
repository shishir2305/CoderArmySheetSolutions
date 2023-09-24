// mirror tree

// algorithm -> store the left part of the root in a temporary node now make
// left =right and right =temp, the nodes have been interchanged now rest leave
// it for recursion to do
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

void mirror(Node *root) {
  if (root == NULL)
    return;
  Node *temp = root->left;
  root->left = root->right;
  root->right = temp;
  mirror(root->left);
  mirror(root->right);
}

int main() { return 0; }