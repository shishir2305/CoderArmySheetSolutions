// print binary tree levels in sorted order

// algorithm -> for a level in complete binary tree there are s^level (0,1,2...)
// nodes so we use this formula and get 2^level elements from the array, sort it
// and insert it in the result array
// t.c -> O(n log(n))
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> binTreeSortedLevels(int arr[], int n) {
  vector<vector<int>> ans;
  if (n == 0) {
    return ans;
  }
  int i = 0, lvl = 1;
  while (i < n) {
    vector<int> temp;
    for (int j = 0; j < lvl; j++) {
      if (i < n) {
        temp.push_back(arr[i]);
        i++;
      }
    }
    lvl = lvl << 1; // multiply by 2
    sort(temp.begin(), temp.end());
    ans.push_back(temp);
  }
  return ans;
}

int main() { return 0; }