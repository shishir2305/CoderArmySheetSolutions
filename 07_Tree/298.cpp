// print all nodes that don't have sibling

// algorithm -> use level order traversal and check whether the front of the
// node has only one child or not by checking for its left and right child
// pointers
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

void solve(Node *root, vector<int> &ans) {
  queue<Node *> q;
  q.push(root);
  while (!q.empty()) {
    int size = q.size();
    while (size--) {
      Node *curr = q.front();
      q.pop();
      if (curr->left && !curr->right) {
        ans.push_back(curr->left->data);
        q.push(curr->left);
      }
      if (curr->right && !curr->left) {
        ans.push_back(curr->right->data);
        q.push(curr->right);
      }
      if (curr->left && curr->right) {
        q.push(curr->left);
        q.push(curr->right);
      }
    }
  }
}

vector<int> noSibling(Node *node) {
  vector<int> ans;
  if (node == NULL) {
    return ans;
  }
  solve(node, ans);
  if (!ans.empty()) {
    sort(ans.begin(), ans.end());
    return ans;
  }
  ans.push_back(-1);
  return ans;
}

int main() { return 0; }