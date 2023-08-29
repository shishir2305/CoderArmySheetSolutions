// sort an array

// algorithm -> use merge sort
// t.c -> O(n log(n))
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int left[n1], right[n2];
    for (int i = 0; i < n1; i++)
    {
        left[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        right[i] = arr[mid + i + 1];
    }
    int start = l, i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            arr[start++] = left[i++];
        }
        else
        {
            arr[start++] = right[j++];
        }
    }
    while (i < n1)
    {
        arr[start++] = left[i++];
    }
    while (j < n2)
    {
        arr[start++] = right[j++];
    }
}
void mergeSort(vector<int> &arr, int l, int r)
{
    if (l < r)
    {
        int mid = l + (r - l) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}

int main()
{
    vector<int> nums = {5, 2, 3, 1};
    mergeSort(nums, 0, nums.size() - 1);
    return 0;
}