// sum of binary tree

// algorithm -> recursively find the sum of left part then right part then add
// root value to it
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

long int sumBT(Node *root) {
  if (root == NULL) {
    return 0;
  }
  int leftSum = sumBT(root->left);
  int rightSum = sumBT(root->right);
  int ans = leftSum + rightSum + root->key;
  return ans;
}

int main() { return 0; }