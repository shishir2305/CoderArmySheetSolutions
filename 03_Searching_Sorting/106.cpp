// count more than n/k occurences

// algorithm -> use hashmap to store the count of every element, at last check whether their occurence is more than n/k or not
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

int countOccurence(int arr[], int n, int k)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    int ans = 0;
    for (auto it : mp)
    {
        if (it.second > n / k)
        {
            ans++;
        }
    }
    return ans;
}

int main()
{
    int arr[] = {3, 1, 2, 2, 1, 2, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
    cout << countOccurence(arr, n, k) << endl;
    return 0;
}