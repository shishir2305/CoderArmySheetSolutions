// next right node

// algorithm -> use a queue and bfs to check level wise if there is a node that
// the given key and if you find a match and there is an element left in the
// queue then simply return that spare element
// t.c -> O(N)
// s.c -> O(N)

#include <bits/stdc++.h>
using namespace std;

Node *nextRight(Node *root, int key) {
  queue<Node *> q;
  q.push(root);
  while (!q.empty()) {
    int size = q.size();
    while (size--) {
      Node *front = q.front();
      q.pop();
      if (front->data == key && size) {
        return q.front();
      }
      if (front->left) {
        q.push(front->left);
      }
      if (front->right) {
        q.push(front->right);
      }
    }
  }
  return new Node(-1);
}

int main() { return 0; }