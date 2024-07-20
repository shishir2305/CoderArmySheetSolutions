// postorder traversal (iterative)

// algorithm -> in postorder the order remains LRN, so we put the left child
// then right child, at the end to get the desired result we need to reverse the
// result.
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

vector<int> postOrder(Node *root) {
  vector<int> ans;
  stack<Node *> st;
  st.push(root);

  while (!st.empty()) {
    Node *top = st.top();
    st.pop();

    ans.push_back(top->data);
    if (top->left) {
      st.push(top->left);
    }
    if (top->right) {
      st.push(top->right);
    }
  }
  reverse(ans.begin(), ans.end());
  return ans;
}

int main() { return 0; }