// min subsets with consecutive numbers

// algorithm -> sort the array and then count accordingly
// t.c -> O(n log(n))
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

int numofsubset(int arr[], int n)
{
    int minSubsetsCount = 0;
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        if (i + 1 < n && arr[i + 1] == arr[i] + 1)
        {
            continue;
        }
        else
        {
            minSubsetsCount++;
        }
    }
    return minSubsetsCount;
}

int main()
{
    int arr[] = {100, 56, 5, 6, 102, 58, 101, 57, 7, 103};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << numofsubset(arr, n);
    return 0;
}