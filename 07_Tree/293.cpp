// check for balanced tree

// algorithm 1 -> for every node check it height and then check whether it is
// balanced or not t.c -> O(n^2) s.c -> O(n)

// algorithm 2 -> use a pair to store the current height and whether the current
// node is balanced or unbalanced
// t.c -> O(n)
// s.c -> O(height);

#include <bits/stdc++.h>
using namespace std;

pair<bool, int> solve(Node *root) {
  if (root == NULL) {
    pair<int, int> p = make_pair(true, 0);
    return p;
  }
  pair<int, int> left = solve(root->left);
  pair<int, int> right = solve(root->right);

  pair<int, int> ans;
  bool leftAns = left.first;
  bool rightAns = right.first;
  bool diff = abs(left.second - right.second) <= 1;

  if (leftAns && rightAns && diff) {
    ans.first = true;
  } else {
    ans.first = false;
  }
  ans.second = max(left.second, right.second) + 1;
  return ans;
}

bool isBalanced(Node *root) {
  if (root == NULL)
    return true;
  return solve(root).first;
}

int main() { return 0; }