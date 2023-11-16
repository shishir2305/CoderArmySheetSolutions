// 2-sum binary tree

// algorithm -> store the inorder traversal in an array, since it is sorted so
// apply 2sum logic on the sorted array
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

void inorder(TreeNode *root, vector<int> &ans) {
  if (root == NULL) {
    return;
  }
  inorder(root->left, ans);
  ans.push_back(root->val);
  inorder(root->right, ans);
}
bool findTarget(TreeNode *root, int target) {
  if (root == NULL) {
    return 0;
  }
  vector<int> ans;
  inorder(root, ans);
  int i = 0, j = ans.size() - 1;
  while (i < j) {
    int sum = ans[i] + ans[j];
    if (sum == target) {
      return 1;
    } else if (sum > target) {
      j--;
    } else {
      i++;
    }
  }
  return 0;
}

int main() { return 0; }