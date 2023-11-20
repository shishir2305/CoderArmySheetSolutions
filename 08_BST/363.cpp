// construct bst from postorder

// algorithm 1 -> we can sort the preorder and get the inorder and use it to
// create a height balanced bst
// t.c -> O(n log(n))
// s.c -> O(n)

// algorithm 2 -> we can use a range based approach, we can start traversing
// from the last index and create element only if its with the range of min and
// max else we will return null at last we will call the recursive function for
// the lest and right part
// t.c -> O(n)
// s.c -> O(height)

#include <bits/stdc++.h>
using namespace std;

Node *solve(int post[], int mini, int maxi, int &index, int n) {
  if (index < 0) {
    return NULL;
  }
  if (post[index] < mini || post[index] > maxi) {
    return NULL;
  }
  Node *root = new Node(post[index--]);
  root->right = solve(post, root->data, maxi, index, n);
  root->left = solve(post, mini, root->data, index, n);
  return root;
}

Node *constructTree(int post[], int size) {
  int index = size - 1;
  int mini = INT_MIN;
  int maxi = INT_MAX;
  return solve(post, mini, maxi, index, size);
}

int main() { return 0; }