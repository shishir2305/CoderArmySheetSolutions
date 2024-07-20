// diagonal traversal

// algorithm -> push the root into the queue and then move as much right as
// possible and whenever there is a left child of any element then simply put it
// into the queue.
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

vector<int> diagonal(Node *root) {
  vector<int> ans;
  queue<Node *> q;
  q.push(root);

  while (!q.empty()) {
    Node *curr = q.front();
    q.pop();

    while (curr) {
      if (curr->left) {
        q.push(curr->left);
      }
      ans.push_back(curr->data);
      curr = curr->right;
    }
  }
  return ans;
}

int main() { return 0; }