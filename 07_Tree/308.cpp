// check if two nodes are cousins or not

// algorithm -> use level order traversal to find the nodes, on getting the
// nodes store its parent and level. At the end compare whether the parents of
// two nodes are different and the two nodes lie on the same level.
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

bool isCousins(Node *root, int a, int b) {
  vector<pair<Node *, int>> parents;
  queue<Node *> q;
  q.push(root);

  int levels = 0;
  while (!q.empty()) {
    int size = q.size();
    levels++;

    while (size--) {
      Node *front = q.front();
      q.pop();

      if (front->left) {
        if (front->left->data == a || front->left->data == b) {
          parents.push_back({front, levels});
        }
        q.push(front->left);
      }

      if (front->right) {
        if (front->right->data == a || front->right->data == b) {
          parents.push_back({front, levels});
        }
        q.push(front->right);
      }
    }
  }

  if (parents.size() > 1 && parents[0].second == parents[1].second &&
      parents[0].first != parents[1].first) {
    return true;
  }
  return false;
}

int main() { return 0; }