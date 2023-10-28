// bottom view of binary tree

// algorithm -> use the concept of vertical order traversal and on a single
// horizontal distance keep storing element till you reach the end
// t.c -> o(n log(n))
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

vector<int> bottomView(Node *root) {
  vector<int> ans;
  map<int, int> mp;
  queue<pair<Node *, int>> q;
  q.push({root, 0});
  while (!q.empty()) {
    pair<Node *, int> front = q.front();
    q.pop();

    mp[front.second] = front.first->data;

    if (front.first->left) {
      q.push({front.first->left, front.second - 1});
    }
    if (front.first->right) {
      q.push({front.first->right, front.second + 1});
    }
  }
  for (auto it : mp) {
    ans.push_back(it.second);
  }
  return ans;
}

int main() { return 0; }