// postorder traversal

// algorithm -> recursively first traverse the left part, then traverse the
// right part then store the answer
// t.c ->O(n)
// s.c ->O(n)

#include <bits/stdc++.h>
using namespace std;

void traverse(Node *root, vector<int> &ans) {
  if (root == NULL) {
    return;
  }
  traverse(root->left, ans);
  traverse(root->right, ans);
  ans.push_back(root->data);
}

vector<int> inOrder(Node *root) {
  vector<int> ans;
  traverse(root, ans);
  return ans;
}

int main() { return 0; }