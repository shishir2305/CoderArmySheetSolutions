// floor in a sorted array

// algorithm 1 -> use simple linear search and find the floor
// t.c -> O(n)
// s.c -> O(1)

// algorithm 2 -> use binary search, find the mid and if the mid is smaller than x then store it and move ahead, else decrease the high value to mid-1 and reduce the search space
// t.c -> O(log n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

int findFloor(vector<long long> v, long long n, long long x)
{
    int tempAns = -1;
    long long s = 0, e = n - 1;
    while (s <= e)
    {
        long long mid = s + (e - s) / 2;
        if (v[mid] <= x)
        {
            tempAns = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return tempAns;
}

int main()
{
    vector<long long> arr = {1, 2, 8, 10, 11, 12, 19};
    cout << findFloor(arr, arr.size(), 5);
    return 0;
}