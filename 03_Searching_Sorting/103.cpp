// search in a matrix (row and colukn sorted)

// algorithm 1 -> use linear search
// t.c -> O(n^2)
// s.c -> O(1)

// algorithm 2 -> optimizing the searching technique using two pointer approach
// t.c -> O(n+m)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

int matSearch(vector<vector<int>> &matrix, int n, int m, int x)
{
    int i = 0, j = m - 1;
    while (i < n && j >= 0)
    {
        if (matrix[i][j] == x)
        {
            return true;
        }
        else if (matrix[i][j] < x)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return false;
}

int main()
{
    int n = 3, m = 3;
    vector<vector<int>> arr = {{3, 30, 38}, {44, 52, 54}, {57, 60, 69}};
    cout << matSearch(arr, n, m, 54);
    return 0;
}