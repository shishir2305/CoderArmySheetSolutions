// merge two binary trees

// algorithm -> case 1: both roots are null - return null
//              case 2: only one root is null, return the not null root
//              case 3 : both are not null - simply make a new node and make its
//              value the summation of the other two nodes
// t.c -> O(n)
// s.c -> O(height)

#include <bits/stdc++.h>
using namespace std;

TreeNode *mergeTrees(TreeNode *root1, TreeNode *root2) {
  if (!root1 && !root2) // T.C --> O(n)   ||  S.C --> O(h)
    return NULL;

  if (root1 && !root2)
    return root1;

  if (!root1 && root2)
    return root2;

  TreeNode *root = new TreeNode(root1->val + root2->val);

  root->left = mergeTrees(root1->left, root2->left);

  root->right = mergeTrees(root1->right, root2->right);

  return root;
}

int main() { return 0; }