// level order traversal in spiral form

// algorithm -> use queue to do level order traversal, for every alternate array
// in the ans reverse it
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> zigzagLevelOrder(TreeNode *root) {
  vector<vector<int>> ans;
  if (root == NULL) {
    return ans;
  }
  queue<TreeNode *> q;
  q.push(root);
  while (!q.empty()) {
    vector<int> tempAns;
    int size = q.size();
    while (size-- > 0) {
      TreeNode *curr = q.front();
      q.pop();
      tempAns.push_back(curr->val);
      if (curr->left != NULL) {
        q.push(curr->left);
      }
      if (curr->right != NULL) {
        q.push(curr->right);
      }
    }
    ans.push_back(tempAns);
  }
  for (int i = 0; i < ans.size(); i++) {
    if (i % 2 != 0) {
      reverse(ans[i].begin(), ans[i].end());
    }
  }
  return ans;
}

int main() { return 0; }