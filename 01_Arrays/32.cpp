// boolean matrix

// algorithm -> use two arrays row and col and whenver an element with value one is encountered, mark its row and col value as 1. At the end traverse through the row and col arr and mark the entire row or column as 1 if there value is 1

#include <bits/stdc++.h>
using namespace std;

void booleanMatrix(vector<vector<int>> &matrix)
{
    int rows = matrix.size();
    int cols = matrix[0].size();

    vector<int> row(rows, 0);
    vector<int> col(cols, 0);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == 1)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    for (int i = 0; i < row.size(); i++)
    {
        for (int j = 0; j < col.size(); j++)
        {
            if (row[i] == 1 || col[j] == 1)
            {
                matrix[i][j] = 1;
            }
        }
    }
}

int main()
{
    vector<vector<int>> matrix = {{1, 0, 0},
                                  {1, 0, 0},
                                  {1, 0, 0},
                                  {0, 0, 0}};
    booleanMatrix(matrix);
    return 0;
}
