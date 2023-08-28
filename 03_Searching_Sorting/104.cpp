// bitonic point
// point where previous elements are strictly increasing and next elements may be strictly decreasing

// algorithm 1 -> using linear search find that point
// t.c -> O(n)
// s.c -> O(1)

// algorithm 2 -> using binary search
// t.c -> O(log n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

int findMaximum(int arr[], int n)
{
    if (n == 1)
    {
        return arr[0];
    }
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            return arr[mid];
        }
        if (arr[mid] > arr[mid - 1] && arr[mid] < arr[mid + 1])
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return arr[n - 1];
}

int main()
{
    int arr[] = {1, 15, 25, 45, 42, 21, 17, 12, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << findMaximum(arr, n);
    return 0;
}