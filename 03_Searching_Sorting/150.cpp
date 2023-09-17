// painter's partition problem

// algorithm -> same as book allocation problem
// t.c -> O(n log(n))
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

bool isPossible(int arr[], int n, int m, long long int mid)
{
    long long int painterCount = 1;
    long long int paintSum = 0;
    for (long long int i = 0; i < n; i++)
    {
        if (paintSum + arr[i] <= mid)
        {
            paintSum += arr[i];
        }
        else
        {
            painterCount++;
            if (painterCount > m || arr[i] > mid)
            {
                return false;
            }
            paintSum = arr[i];
        }
    }
    return true;
}

long long minTime(int arr[], int n, int m)
{
    long long int start = 0;
    long long int sum = 0;
    for (long long int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    long long int end = sum, mid;
    long long int ans = 0;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{

    return 0;
}