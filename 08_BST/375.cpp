// minimum absolute difference in bst

// algorithm 1 -> use the inorder traversal and store the elements in a sorted
// order format and then traverse elements one by one and storing the minimum
// absolute difference.
// t.c -> O(n)
// s.c -> O(n)

// algorithm 2 -> we can discard storing the elements and simply use a previous
// variable to store the previous and at every node find (root->data-prev) to
// get the result. This algorithm will work since preorder traversal generates
// elements in sorted order.
// t.c -> O(n)
// s.c -> O(height)

#include <bits/stdc++.h>
using namespace std;

void solve(Node *root, int &prev, int &ans) {
  if (!root)
    return;

  solve(root->left, prev, ans);
  if (prev != INT_MIN) {
    ans = min(ans, abs(root->data - prev));
  }
  prev = root->data;
  solve(root->right, prev, ans);
}

int absolute_diff(Node *root) {
  int ans = INT_MAX;
  int prev = INT_MIN;
  solve(root, prev, ans);
  return ans;
}

int main() { return 0; }