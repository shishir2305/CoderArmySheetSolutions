// minimum element in bst

// algorithm -> the left most leaf node will be the minimum element since it is
// a bst, so use while loop to traverse
// t.c -> O(height)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

int minValue(Node *root) {
  if (root == NULL) {
    return -1;
  }
  int ans = root->data;
  while (root != NULL) {
    ans = root->data;
    root = root->left;
  }
  return ans;
}

int main() { return 0; }