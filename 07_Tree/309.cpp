// vertical order traversal of binary tree

// algorithm -> use a map to store the nodes according to their horizontal
// distance, root being at hd 0 and elements to its left will be considered by 0
// - position of node and for elements on right 0 + position of node
// t.c -> O(n log(n))
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

void levelOrder(Node *root, map<int, vector<int>> &mp) {
  if (root == NULL)
    return;
  queue<pair<Node *, int>> st;
  st.push({root, 0});
  while (!st.empty()) {
    int size = st.size();
    while (size-- > 0) {
      pair<Node *, int> temp = st.front();
      st.pop();
      mp[temp.second].push_back(temp.first->data);
      if (temp.first->left) {
        st.push({temp.first->left, temp.second - 1});
      }
      if (temp.first->right) {
        st.push({temp.first->right, temp.second + 1});
      }
    }
  }
}

vector<int> verticalOrder(Node *root) {
  map<int, vector<int>> mp;
  levelOrder(root, mp);
  vector<int> ans;
  for (auto it : mp) {
    for (auto i : it.second) {
      ans.push_back(i);
    }
  }
  return ans;
}

int main() { return 0; }