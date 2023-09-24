// largest value in each level

// algorithm -> use level order traversal to traverse level by level and store
// the maximum element of each element
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

void solve(Node *root, vector<int> &ans) {
  if (root == NULL)
    return;
  queue<Node *> q;
  q.push(root);
  while (!q.empty()) {
    int size = q.size();
    int maxi = INT_MIN;
    while (size--) {
      Node *front = q.front();
      q.pop();
      if (front->data > maxi) {
        maxi = front->data;
      }
      if (front->left) {
        q.push(front->left);
      }
      if (front->right) {
        q.push(front->right);
      }
    }
    ans.push_back(maxi);
  }
}

vector<int> largestValues(Node *root) {
  vector<int> ans;
  solve(root, ans);
  return ans;
}

int main() { return 0; }