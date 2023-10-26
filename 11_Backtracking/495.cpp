// N Queens

// algorithm -> use classical backtracking algorithm and try placing queen at
// every position and check for different combinations and store the ones that
// satisfy the conditions
// t.c -> O(n!)
// s.c -> O(n^2)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  bool isSafe(int row, int col, vector<string> &board, int n) {
    int tempRow = row;
    int tempCol = col;

    while (tempRow >= 0) {
      if (board[tempRow][tempCol] == 'Q')
        return false;
      tempRow--;
    }

    tempRow = row;
    while (tempCol >= 0) {
      if (board[tempRow][tempCol] == 'Q')
        return false;
      tempCol--;
    }
    tempCol = col;
    while (tempRow >= 0 && tempCol >= 0) {
      if (board[tempRow][tempCol] == 'Q')
        return false;
      tempRow--;
      tempCol--;
    }
    tempRow = row;
    tempCol = col;
    while (tempRow < n && tempCol >= 0) {
      if (board[tempRow][tempCol] == 'Q')
        return false;
      tempRow++;
      tempCol--;
    }
    return true;
  }

  void solve(int col, vector<string> &board, vector<vector<string>> &ans,
             int n) {
    if (col == n) {
      ans.push_back(board);
      return;
    }
    for (int row = 0; row < n; row++) {
      if (isSafe(row, col, board, n)) {
        board[row][col] = 'Q';
        solve(col + 1, board, ans, n);
        board[row][col] = '.';
      }
    }
  }

  vector<vector<string>> solveNQueens(int n) {
    vector<vector<string>> res;
    vector<string> board(n);
    string s(n, '.');

    for (int i = 0; i < n; i++) {
      board[i] = s;
    }
    solve(0, board, res, n);
    return res;
  }
};

int main() { return 0; }