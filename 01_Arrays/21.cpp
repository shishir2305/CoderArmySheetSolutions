// find transition point (index from where 1 starts in a sorted binary array)

// algorithm 1 -> use linear search to find the first occurence of 1
// t.c. -> O(n)
// s.c. -> O(1)

// algorithm 2 -> use binary search to find the occurence of 1 and then check on its left part for any other occurence of 1
// t.c -> O(log n)
// s.c. -> O(1)

#include <bits/stdc++.h>
using namespace std;

int binSearch(int arr[], int n)
{
    int low = 0, high = n - 1, ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == 1)
        {
            ans = mid;
            high = mid - 1;
        }
        else if (arr[mid] < 1)
        {
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int arr[] = {0, 0, 0, 0, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << binSearch(arr, n);
    return 0;
}