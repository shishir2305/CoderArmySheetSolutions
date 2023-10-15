// binary tree paths

// algorithm -> we use recursion to traverse the tree and store the value of the
// node if it is not null and then check whether it is a leaf node if yes then
// we store it in the answer array
// t.c -> O(n)
// s.c -> O(height)

#include <bits/stdc++.h>
using namespace std;

void solve(TreeNode *root, vector<string> &ans, string temp) {
  if (root == NULL)
    return;
  temp += to_string(root->val);
  temp += "->";
  if (root->left == NULL && root->right == NULL) {
    temp.pop_back();
    temp.pop_back();
    ans.push_back(temp);
    return;
  }
  solve(root->left, ans, temp);
  solve(root->right, ans, temp);
}
vector<string> binaryTreePaths(TreeNode *root) {
  vector<string> ans;
  string temp = "";
  solve(root, ans, temp);
  return ans;
}

int main() { return 0; }