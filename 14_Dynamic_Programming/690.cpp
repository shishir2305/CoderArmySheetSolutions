// pascal's triangle II

// algorithm -> same algo as pascal's triangle 1 just tweak the return value
// t.c -> O(N^2)
// s.c -> O(N^2)

#include <bits/stdc++.h>
using namespace std;

vector<int> getRow(int rowIndex) {
  vector<vector<int>> ans;
  for (int i = 0; i <= rowIndex; i++) {
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
  return ans[rowIndex];
}

int main() { return 0; }