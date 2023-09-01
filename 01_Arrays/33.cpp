// row with max 1's

// algorithm 1 -> traverse all the rows one by one and count the number of 1's
// t.c -> O(n*m)
// s.c -> O(1)

// algorithm 2 -> since the rows are sorted, so we can use binary search and find the first occurence of 1 and subtract it with the column index of that row
// t.c -> O(n log(m))
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

int firstOccurence(vector<int> arr, int n, int x)
{
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] >= x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
int rowWithMax1s(vector<vector<int>> &matrix, int n, int m)
{
    int cnt_max = 0;
    int index = -1;

    for (int i = 0; i < n; i++)
    {
        int cnt_ones = m - firstOccurence(matrix[i], m, 1);
        if (cnt_ones > cnt_max)
        {
            cnt_max = cnt_ones;
            index = i;
        }
    }
    return index;
}

int main()
{
    vector<vector<int>> matrix = {{1, 1, 1}, {0, 0, 1}, {0, 0, 0}};
    int n = 3, m = 3;
    cout << "The row with maximum no. of 1's is: " << rowWithMax1s(matrix, n, m) << '\n';
}
