// pascal's triangle

// algorithm -> the idea is to add elements of the previous row and store it in
// an array and keep repeating the process until number of rows given
// t.c -> O(N^2)
// s.c -> O(N^2)

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int numRows) {
  vector<vector<int>> ans;
  for (int i = 0; i < numRows; i++) {
    if (ans.size() == 0) {
      ans.push_back({1});
      continue;
    } else {
      vector<int> temp;
      temp.push_back(1);
      for (int j = 1; j < ans[i - 1].size(); j++) {
        temp.push_back(ans[i - 1][j - 1] + ans[i - 1][j]);
      }
      temp.push_back(1);
      ans.push_back(temp);
    }
  }
  return ans;
}

int main() { return 0; }