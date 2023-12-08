// populate next right pointers tree

// algorithm -> use level order traversal and a temp node for each level check
// if the element is the first element then simply mark the flag as true else
// point the nextRight pointer to the current node and move the temp node to the
// current element
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

void connect(Node *root) {
  queue<Node *> q;
  q.push(root);
  while (!q.empty()) {
    int size = q.size();
    Node *curr = q.front();
    bool flag = false;
    for (int i = 0; i < size; i++) {
      Node *front = q.front();
      q.pop();
      if (!flag) {
        flag = true;
      } else {
        curr->nextRight = front;
        curr = front;
      }
      if (front->left) {
        q.push(front->left);
      }
      if (front->right) {
        q.push(front->right);
      }
    }
  }
}

int main() { return 0; }