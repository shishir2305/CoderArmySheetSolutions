// left view of binary tree

// algorithm -> in a level the first node will only get stored and in order to
// do that simply the current size of the answer and will store the level of the
// tree
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
  solve(root->left, ans, lvl + 1);
  solve(root->right, ans, lvl + 1);
}

vector<int> leftView(Node *root) {
  vector<int> ans;
  solve(root, ans, 0);
  return ans;
}

int main() { return 0; }