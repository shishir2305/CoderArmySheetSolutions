// inorder traversal

// algorithm -> recursively first traverse the left part then store the answer
// then traverse the right part
// t.c ->O(n)
// s.c ->O(n)

#include <bits/stdc++.h>
using namespace std;

void traverse(Node *root, vector<int> &ans) {
  if (root == NULL) {
    return;
  }
  traverse(root->left, ans);
  ans.push_back(root->data);
  traverse(root->right, ans);
}

vector<int> inOrder(Node *root) {
  vector<int> ans;
  traverse(root, ans);
  return ans;
}

int main() { return 0; }