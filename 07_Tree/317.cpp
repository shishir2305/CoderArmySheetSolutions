// diameter of a binary tree

// algorithm 1 -> there can be 3 cases : diameter is in the left subtree,
// diameter is in the right subtree and last diameter can be the combination of
// left, right and height of current root node
// t.c -> O(n^2)
// s.c -> O(height)

// algorithm 2 -> we can optimize the time complexity by storing the height of
// current node
// t.c -> O(n)
// s.c -> O(height)

#include <bits/stdc++.h>
using namespace std;

// naive approach
int height(Node *root) {
  if (root == NULL) {
    return 0;
  }
  int left = height(root->left);
  int right = height(root->right);
  int ans = max(left, right) + 1;
  return ans;
}

int diameter(Node *root) {
  if (root == NULL) {
    return 0;
  }
  int op1 = diameter(root->left);
  int op2 = diameter(root->right);
  int op3 = height(root->left) + height(root->right) + 1;
  int ans = max(op1, max(op2, op3));
  return ans;
}

// optimized approach
pair<int, int> solve(TreeNode *root) {
  if (root == NULL) {
    pair<int, int> p = make_pair(0, 0);
    return p;
  }
  pair<int, int> left = solve(root->left);
  pair<int, int> right = solve(root->right);

  int op1 = left.first;
  int op2 = right.first;
  int op3 = left.second + right.second + 1;

  pair<int, int> ans;
  ans.first = max(op1, max(op2, op3));
  ans.second = max(left.second, right.second) + 1;
  return ans;
}

int main() { return 0; }