// inorder traversal (iterative)

// algorithm -> we use a stack to maintain the nodes, we start traversing from
// the root and traverse the left most nodes until we reach NULL, then we store
// the stack top in the answer and make the current node as right of the stack
// top, every time we keep a check at whether the stack is empty or not to avoid
// falling in infinite loop
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

vector<int> inOrder(Node *root) {
  vector<int> ans;
  if (root == NULL)
    return ans;
  stack<Node *> st;
  Node *curr = root;
  while (true) {
    if (curr) {
      st.push(curr);
      curr = curr->left;
    } else {
      if (st.empty()) {
        break;
      }
      ans.push_back(st.top()->data);
      curr = st.top()->right;
      st.pop();
    }
  }
  return ans;
}

int main() { return 0; }