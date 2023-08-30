// first and last occurence of x

// algorithm 1 -> use linear search
// t.c -> O(n)
// s.c -> O(1)

// algorithm 2 -> use binary search to find first and last occurence
// t.c -> O(log n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

int firstOccurence(vector<int> &arr, int n, int key)
{
    int start = 0;
    int end = n - 1;
    int ans = 0;
    int flag = 0;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
            flag = 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    if (flag == 0)
    {
        ans = -1;
    }
    return ans;
}
int lastOccurence(vector<int> &arr, int n, int key)
{
    int start = 0;
    int end = n - 1;
    int ans = 0;
    int flag = 0;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
            flag = 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    if (flag == 0)
    {
        ans = -1;
    }
    return ans;
}

int main()
{
    int n = 4;
    int x = 3;
    vector<int> arr = {1, 3, 3, 4};
    vector<int> ans;
    int check = firstOccurence(arr, n, x);
    if (check == -1)
    {
        ans.push_back(-1);
    }
    ans.push_back(firstOccurence(arr, n, x));
    ans.push_back(lastOccurence(arr, n, x));
    return 0;
}