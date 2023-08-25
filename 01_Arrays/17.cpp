// subarray with given sum

// algorithm 1 -> using hashmap and prefix sum
// t.c -> O(n)
// s.c. -> O(n)

// algorithm 2 -> using two pointers approach
// t.c -> O(n)
// s.c. -> O(1)

#include <bits/stdc++.h>
using namespace std;

// using hashmap
vector<int> subarraySum1(vector<int> arr, int n, long long s)
{
    vector<int> ans;
    long long sum = 0;
    unordered_map<long long, long long> mp;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum == s)
        {
            ans.push_back(1);
            ans.push_back(i + 1);
            return ans;
        }
        int reqSum = sum - s;
        if (mp.find(reqSum) != mp.end())
        {
            int start = mp[reqSum] + 2;
            int end = i + 1;
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
        mp[sum] = i;
    }
    ans.push_back(-1);
    return ans;
}

// optimized approach
vector<int> subarraySum2(vector<int> arr, int n, long long s)
{
    if (s == 0)
    {
        return {-1};
    }
    long long sum = 0;
    int i = 0, j = 1;
    sum = arr[i] + arr[j];
    while (i < n && j < n)
    {
        if (arr[i] == s)
        {
            return {i + 1, i + 1};
        }
        if (sum == s)
        {
            return {i + 1, j + 1};
        }
        if (sum < s)
        {
            j++;
            sum += arr[j];
        }
        else
        {
            sum -= arr[i]; // instead of calculating everything again, we can simply deduct ith element and check the sum
            i++;
            if (sum == s)
            {
                return {i + 1, j + 1};
            }
        }
    }
    return {-1};
}

int main()
{
    vector<int> arr = {1, 2, 3, 7, 5};
    int n = 5;
    long long s = 12;
    return 0;
}