// count the zeroes

// algorithm 1 -> use linear search and count the zeroes
// t.c -> O(n)
// s.c -> O(1)

// algorithm 2 -> use binary search and the first occurence of 0 and then subtract n from first occurence index, since 1 is placed before 0 so it is possible that the last index is always 0
// t.c -> O(log n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

int binSearch(int arr[], int n)
{
    int low = 0, high = n - 1, ans = 0;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == 0)
        {
            ans = mid;
            high = mid - 1;
        }
        else if (arr[mid] > 0)
        {
            low = mid + 1;
        }
    }
    return ans;
}
int main()
{
    int arr[] = {1, 1, 1, 1, 1, 0, 0, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int firstZeroIndex = binSearch(arr, n);
    return n - firstZeroIndex;
    return 0;
}