// Array subset of another array

// algorithm -> use a frequency array to store the frequency of elements of arr1, then iterate through elements of arr2 and check whether the elements are present in the hashtable and whether their frequency is greater than 1 and if found reduce the frequency by one else return false
// t.c -> O(n+m)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m)
{
    if (m > n)
    {
        return "No";
    }
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[a1[i]]++;
    }
    for (int i = 0; i < m; i++)
    {
        if (mp[a2[i]] == 0)
        {
            return "No";
        }
        mp[a2[i]]--;
    }
    return "Yes";
}

int main()
{
    int a1[] = {11, 7, 1, 13, 21, 3, 7, 3};
    int a2[] = {11, 3, 7, 1, 7};
    return 0;
}