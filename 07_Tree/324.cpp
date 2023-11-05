// maximum sum of non adjacent nodes

// algorithm -> use a pair to store the values, if we include the root then we
// will not include the value of its children t.c -> O(n) s.c -> O(height)

#include <bits/stdc++.h>
using namespace std;

pair<int, int> solve(Node *root) {
  if (root == NULL) {
    pair<int, int> p = {0, 0};
    return p;
  }
  pair<int, int> leftAns = solve(root->left);
  pair<int, int> rightAns = solve(root->right);

  pair<int, int> ans;
  ans.first = root->data + leftAns.second + rightAns.second;
  ans.second =
      max(leftAns.first, leftAns.second) + max(rightAns.first, rightAns.second);
  return ans;
}

int getMaxSum(Node *root) {
  pair<int, int> ans = solve(root);
  return max(ans.first, ans.second);
}

int main() { return 0; }