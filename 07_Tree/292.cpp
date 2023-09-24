// root to leaf path sums

// algorithm -> use the individual root nodes data to create a temp value and if
// the node is a leaf node then add this value to the answer
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

void solve(Node *root, long long &ans, long long temp) {
  if (root == NULL) {
    return;
  }
  temp = temp * 10 + root->data;
  if (!root->left && !root->right) {
    ans += temp;
    return;
  }
  solve(root->left, ans, temp);
  solve(root->right, ans, temp);
}

long long treePathsSum(Node *root) {
  long long ans = 0;
  solve(root, ans, 0);
  return ans;
}

int main() { return 0; }