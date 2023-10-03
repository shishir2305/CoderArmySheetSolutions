// print bst elements in given range

// algorithm -> use inorder traversal to traverse the bst and store the elements
// t.c -> O(n)
// s.c -> O(height)

#include <bits/stdc++.h>
using namespace std;

void solve(Node *root, int low, int high, vector<int> &ans) {
  if (root == NULL)
    return;
  solve(root->left, low, high, ans);
  if (root->data >= low && root->data <= high) {
    ans.push_back(root->data);
  }
  solve(root->right, low, high, ans);
}

vector<int> printNearNodes(Node *root, int low, int high) {
  vector<int> ans;
  solve(root, low, high, ans);
  return ans;
}

int main() { return 0; }