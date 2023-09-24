// level order traversal

// algorithm -> use a queue to process element of the same level. keep popping
// out the front and storing it in the answer and insert its left and right
// child in the queue
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

void traverse(Node *root, vector<int> &ans) {
  if (root == NULL)
    return;
  queue<Node *> q;
  q.push(root);
  while (!q.empty()) {
    int levelSize = q.size();
    while (levelSize--) {
      Node *front = q.front();
      q.pop();
      ans.push_back(front->data);
      if (front->left) {
        q.push(front->left);
      }
      if (front->right) {
        q.push(front->right);
      }
    }
  }
}

vector<int> levelOrder(Node *node) {
  vector<int> ans;
  traverse(node, ans);
  return ans;
}

int main() { return 0; }