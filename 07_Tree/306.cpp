// maximum node level

// algorithm -> use level order traversal and store the number of nodes at every
// level
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

int maxNodeLevel(Node *root) {
  int mx = 0;
  int ans = 1;
  int level = 0;
  queue<Node *> q1;
  q1.push(root);

  while (!q1.empty()) {

    int n = q1.size();
    if (n > mx) {
      mx = n;
      ans = level;
    }

    for (int i = 0; i < n; i++) {
      root = q1.front();
      q1.pop();

      if (root->left)
        q1.push(root->left);
      if (root->right)
        q1.push(root->right);
    }

    level++;
  }

  return ans;
}

int main() { return 0; }