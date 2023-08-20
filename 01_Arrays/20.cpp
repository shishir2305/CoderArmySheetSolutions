// peak element

// naive approach -> traverse through all the elements and find the index of the maximum element and store it in the answer, since maximum element will always be greater than both its adjacent neighbours
// t.c. -> O(n)
// s.c. -> O(1)

// optimized approach -> using binary search to reduce the search space and find the element
// find the mid and compare arr[mid] with its adjacent element, if arr[mid] is greater than both the adjacent elements then simply return the mid, else if  arr[mid] greater than arr[mid-1] but lesser than arr[mid+1] then we should move right as there is a chance of peak
// and if arr[mid-1] is greater than arr[mid] then we should move left and search for peak element
// intuition -> only binary search can have the t.c of O(log n)
// t.c. ->. O(log n)
// s.c. -> O(1)

#include <bits/stdc++.h>
using namespace std;

// optimized approach using binary search
int findPeakElement(vector<int> &arr)
{

    int n = arr.size();
    if (n == 1)
    {
        return 0;
    }
    int low = 0, high = n - 1;
    while (low <= high)
    {

        int mid = low + (high - low) / 2;
        // handling corner cases separetely
        if (mid == 0)
        {
            if (arr[mid] > arr[mid + 1])
            {
                return mid;
            }
            else
            {
                low = mid + 1;
            }
        }
        else if (mid == n - 1)
        {
            if (arr[mid - 1] < arr[mid])
            {
                return mid;
            }
            else
            {
                high = mid - 1;
            }
        }
        else
        {
            if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
            {
                return mid; // peak element found
            }
            else if (arr[mid] < arr[mid + 1])
            {
                low = mid + 1; // move right of mid as there is a chance of peak
            }
            else
            {
                high = mid - 1; // move left of mid
            }
        }
    }

    return -1;
}

int main()
{

    return 0;
}