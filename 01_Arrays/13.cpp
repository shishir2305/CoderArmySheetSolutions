// search in a row-column sorted matrix

// algorithm 1 -> use binanry search at each row and find the element
// t.c -> O(n log(m))
// s.c -> O(1)

// algorithm 2 -> use the sorted property to optimize search, start from low=0, and high =n-1 and keep traversing from right side and check if x is greater than the current element then increase the low else decrease high
// t.c -> O(n+m)
// s.c -> O(1)

// algorithm 3 -> treat entire matrix as 1d array ,low=0 and high=n*m-1 and search element in this space
// t.c -> O(log(n*m))
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

int matSearch1(vector<vector<int>> &matrix, int n, int m, int x)
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

// optimal solution
bool searchMatrix2(vector<vector<int>> &matrix, int target)
{
    if (matrix.size() == 0)
    {
        return false;
    }
    int n = matrix.size();
    int m = matrix[0].size();

    int low = 0, high = n * m - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (matrix[mid / m][mid % m] == target) // mid/m for row because high=n*m-1 so to get row value we divide it with the column value
        {
            return true;
        }
        else if (matrix[mid / m][mid % m] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return false;
}

int main()
{
    int mat[][3] = {3, 30, 38,
                    44, 52, 54,
                    57, 60, 69};
    return 0;
}