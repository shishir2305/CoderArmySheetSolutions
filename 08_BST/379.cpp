// print leaf nodes from preorder traversal of bst

// algorithm 1 -> build tree from preorder traversal and range based approach
// where left subtree cannot have a value greater than the root node and right
// node cannot have a smaller value than the root node.
// t.c -> O(n)
// s.c -> O(n)

// algorithm 2 -> use the same range based approach but instead of building the
// tree simply check whether the left and right of a node are null using the
// base condition.
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

int solve(int arr[], int &index, int mini, int maxi, int n, vector<int> &ans) {
  if (index >= n || arr[index] < mini || arr[index] > maxi) {
    return 1;
  }

  int temp = arr[index++];
  int left = solve(arr, index, mini, temp, n, ans);
  int right = solve(arr, index, temp, maxi, n, ans);

  if (left == 1 && right == 1) {
    ans.push_back(temp);
  }
  return 0;
}
vector<int> leafNodes(int arr[], int N) {
  vector<int> ans;
  int index = 0;
  solve(arr, index, INT_MIN, INT_MAX, N, ans);
  return ans;
}

int main() { return 0; }