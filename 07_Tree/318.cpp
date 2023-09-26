// sum tree

// algorithm -> maintain a pair data structure with boolean and integer value,
// it will contain the result of subtree and sum of sub tree, now recursively we
// can check whether the left and right subtree sum is same as that of root
// t.c -> O(n)
// s.c -> O(height)

#include <bits/stdc++.h>
using namespace std;

pair<bool, int> solve(Node *root) {
  if (root == NULL) {
    pair<int, int> p = make_pair(true, 0);
    return p;
  }
  if (root->left == NULL && root->right == NULL) {
    pair<int, int> p = make_pair(true, root->data);
    return p;
  }
  pair<int, int> left = solve(root->left);
  pair<int, int> right = solve(root->right);

  bool temp = root->data == (left.second + right.second);
  pair<int, int> ans;
  if (left.first && right.first && temp) {
    ans.first = true;
  } else {
    ans.first = false;
  }
  ans.second = left.second + right.second + root->data;
  return ans;
}

bool isSumTree(Node *root) {
  if (root == NULL)
    return 0;
  return solve(root).first;
}

int main() { return 0; }