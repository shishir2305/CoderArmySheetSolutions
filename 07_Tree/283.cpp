// preorder traversal

// algorithm -> recursively first store the answer then traverse left
// then traverse the right part
// t.c ->O(n)
// s.c ->O(n)

#include <bits/stdc++.h>
using namespace std;

void traverse(Node *root, vector<int> &ans) {
  if (root == NULL) {
    return;
  }
  ans.push_back(root->data);
  traverse(root->left, ans);
  traverse(root->right, ans);
}

vector<int> inOrder(Node *root) {
  vector<int> ans;
  traverse(root, ans);
  return ans;
}

int main() { return 0; }