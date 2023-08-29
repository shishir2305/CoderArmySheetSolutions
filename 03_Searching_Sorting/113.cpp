// merge and sort

// algorithm -> use hashmap to store the frequency of elements, find a max element and traverse from 0 to max element and if the element's frequency is greaater than 0 then store it itn the answer
// t.c -> O(max(arr[i]))
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

int mergeNsort(int a[], int b[], int n, int m, int answer[])
{
    int count = 0;
    unordered_map<int, int> mp;
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        mp[a[i]]++;
        maxi = max(maxi, a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        mp[b[i]]++;
        maxi = max(maxi, b[i]);
    }
    for (int i = 0; i <= maxi; i++)
    {
        if (mp[i])
        {
            answer[count++] = i;
        }
    }
    return count;
}

int main()
{
    int N = 2;
    int a[] = {1, 8};
    int M = 2;
    int b[] = {10, 11};
    return 0;
}