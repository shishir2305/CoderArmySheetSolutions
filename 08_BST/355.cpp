// array to bst

// algorithm -> we can use the middle element of the sorted array and make it
// root, then form left subtree using elements of the left of middle element and
// right subtree using elements on right side of middle element, then find the
// preorder
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
  int data;
  Node *left;
  Node *right;

  Node(int x) {
    data = x;
    left = NULL;
    right = NULL;
  }
};

class Solution {
public:
  Node *buildTree(int s, int e, vector<int> &nums) {
    if (s > e)
      return NULL;
    int mid = s + (e - s) / 2;
    Node *root = new Node(nums[mid]);
    root->left = buildTree(s, mid - 1, nums);
    root->right = buildTree(mid + 1, e, nums);
    return root;
  }

  void preorder(Node *root, vector<int> &ans) {
    if (root == NULL)
      return;
    ans.push_back(root->data);
    preorder(root->left, ans);
    preorder(root->right, ans);
  }

  vector<int> sortedArrayToBST(vector<int> &nums) {
    Node *root = buildTree(0, nums.size() - 1, nums);
    vector<int> ans;
    preorder(root, ans);
    return ans;
  }
};

int main() { return 0; }