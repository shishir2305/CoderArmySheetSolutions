// rotate image

// algorithm 1 -> use some space and place elements accordingly
// t.c -> O(n^2)
// s.c -> O(n*n)

// algorithm 2 -> transpose the matrix and then reverse each and every row
// t.c -> O(n^2)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> &v)
{
    int rows = v.size();
    int cols = v[0].size();
    for (int i = 0; i < rows; i++)
    {
        for (int j = i; j < cols; j++)
        {
            swap(v[i][j], v[j][i]);
        }
        int l = 0, r = cols - 1;
        while (l <= r)
        {
            swap(v[i][l], v[i][r]);
            l++;
            r--;
        }
    }
}

int main()
{
    vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    return 0;
}