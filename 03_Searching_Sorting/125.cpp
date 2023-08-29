// count inversion

// algorithm 1 -> use two for loops to find inversions
// t.c -> O(n^2)
// s.c -> O(1)

// algorithm 2 -> use the concept of merge sort to count inversions
// t.c -> O(n log(n))
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

void merge(long long arr[], long long low, long long mid, long long high, long long &count)
{
    vector<long long> temp;
    long long i = low, j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i++]);
        }
        else
        {
            count += mid - i + 1; // since the arrays are sorted so if a number in arr[i] is greater than arr[j] then greater number of arr[i] will also be counted in the inversion
            temp.push_back(arr[j++]);
        }
    }
    while (i <= mid)
    {
        temp.push_back(arr[i++]);
    }

    while (j <= high)
    {
        temp.push_back(arr[j++]);
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

void mergeSort(long long arr[], long long low, long long high, long long &cnt)
{
    if (low >= high)
        return;

    long long int mid = (low + high) / 2;

    mergeSort(arr, low, mid, cnt);
    mergeSort(arr, mid + 1, high, cnt);
    merge(arr, low, mid, high, cnt);
}

int main()
{
    long long arr[] = {9, 1, 7, 2, 3, 4, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    long long int count = 0;
    mergeSort(arr, 0, n - 1, count);
    return count;
    return 0;
}