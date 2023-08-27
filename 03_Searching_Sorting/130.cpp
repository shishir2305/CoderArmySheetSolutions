// sorting elements of an array by frequency

// algorithm -> use hashmap to store the frequency, then store the element as well as their frequency in an array and at last sort the array using a custom comparator according to the frequency of elements

#include <bits/stdc++.h>
using namespace std;

static bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
    {
        return a.first < b.first;
    }
    return a.second > b.second;
}

vector<int> sortByFreq(int arr[], int n)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    vector<pair<int, int>> v(mp.begin(), mp.end());
    sort(v.begin(), v.end(), cmp);

    vector<int> res;
    for (auto it : v)
    {
        while (it.second--)
        {
            res.push_back(it.first);
        }
    }
    return res;
}

int main()
{
    int arr[] = {5, 5, 4, 6, 4};
    sortByFreq(arr, 5);
    return 0;
}