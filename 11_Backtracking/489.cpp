// rat in a maze problem -1

// algorithm -> we explore all the paths by moving in all directions and always
// checking if the element is safe to visit or not, and whether it is already
// visited or not
// t.c -> O(3^(n^2)) As there are N^2 cells from each cell there are 3 unvisited
// neighboring cells. So the time complexity O(3^(N^2).
// s.c -> O(3^(n^2))

#include <bits/stdc++.h>
using namespace std;

bool isSafe(int newX, int newY, vector<vector<bool>> &vis,
            vector<vector<int>> &arr, int n) {
  if ((newX >= 0 && newX < n) && (newY >= 0 && newY < n) &&
      vis[newX][newY] != 1 && arr[newX][newY] == 1) {
    return true;
  }
  return false;
}

void solve(int x, int y, vector<vector<int>> &arr, int n, vector<string> &ans,
           vector<vector<bool>> vis, string path) {
  // base case
  if (x == n - 1 && y == n - 1) {
    ans.push_back(path);
    return;
  }
  vis[x][y] = 1;
  // 4 movement D L R U
  if (isSafe(x + 1, y, vis, arr, n)) {
    solve(x + 1, y, arr, n, ans, vis, path + 'D');
  }
  if (isSafe(x, y - 1, vis, arr, n)) {
    solve(x, y - 1, arr, n, ans, vis, path + 'L');
  }
  if (isSafe(x, y + 1, vis, arr, n)) {
    solve(x, y + 1, arr, n, ans, vis, path + 'R');
  }
  if (isSafe(x - 1, y, vis, arr, n)) {
    solve(x - 1, y, arr, n, ans, vis, path + 'U');
  }
  vis[x][y] = 0;
}

vector<string> findPath(vector<vector<int>> &arr, int n) {
  vector<string> ans;
  if (arr[0][0] == 0) {
    return ans;
  }
  vector<vector<bool>> visited(n, vector<bool>(n, 0));
  string path = "";
  solve(0, 0, arr, n, ans, visited, path);
  return ans;
}

int main() { return 0; }