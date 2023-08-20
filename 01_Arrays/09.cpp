// find minimum and maximum element from an array

// algorithm -> take two variables maxi and mini and iterate through all the array elements
// if the current array element is greater than maxi, change maxi
// if the current array element is lesser than mini, change mini
// t.c. -> O(n)
// s.c. -> O(1)

#include <bits/stdc++.h>
using namespace std;

pair<long long, long long> getMinMax(long long arr[], int n)
{
    long long maxi = INT_MIN, mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
        if (arr[i] < mini)
        {
            mini = arr[i];
        }
    }
    pair<long long, long long> ans = make_pair(mini, maxi);
    return ans;
}

int main()
{
    long long arr[] = {3, 2, 1, 56, 10000, 167};
    int n = 6;
    pair<long long, long long> result = getMinMax(arr, n);
    cout << "Minimum Element -> " << result.first << endl;
    cout << "Maximum Element -> " << result.second << endl;
    return 0;
}