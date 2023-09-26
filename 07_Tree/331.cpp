// print nodes having k leaves

// algorithm -> recursively count leaves of the left and right subtree of root
// and add them, at least check if they are equal to k then add them in the
// answer
// t.c -> O(n)
// s.c -> O(height)

#include <bits/stdc++.h>
using namespace std;

int getLeaves(Node *root, vector<int> &ans, int k) {
  if (root == NULL) {
    return 0;
  }
  if (root->left == NULL && root->right == NULL) {
    return 1;
  }
  int left = getLeaves(root->left, ans, k);
  int right = getLeaves(root->right, ans, k);

  int leaves = left + right;
  if (leaves == k) {
    ans.push_back(root->data);
  }
  return leaves;
}

vector<int> btWithKleaves(Node *root, int k) {
  vector<int> ans;
  getLeaves(root, ans, k);
  if (ans.size() == 0) {
    ans.push_back(-1);
  }
  return ans;
}

int main() { return 0; }