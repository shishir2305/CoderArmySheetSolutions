// right view of binary tree

// algorithm -> the idea is to keep one element for a level but this time we
// will traverse right first instead of left
// t.c -> O(n)
// s.c -> O(height)

#include <bits/stdc++.h>
using namespace std;

void solve(Node *root, vector<int> &ans, int lvl) {
  if (root == NULL)
    return;
  if (ans.size() == lvl) {
    ans.push_back(root->data);
  }
  solve(root->right, ans, lvl + 1);
  solve(root->left, ans, lvl + 1);
}

vector<int> rightView(Node *root) {
  vector<int> ans;
  solve(root, ans, 0);
  return ans;
}

int main() { return 0; }