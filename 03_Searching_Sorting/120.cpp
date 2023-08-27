// square root of a number

// algorithm 1 -> using linear search, calculate the square of every number from 1 to n and check its square with n.
// t.c -> O(n)
// s.c -> O(1)

// algorithm 2 -> using binary search to calculate the square of a mid number between the range and keep storing the answer if its value is less than n
// t.c -> O(log n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

long long int floorSqrt(long long int x)
{
    int ans = 0;
    long long int low = 0, high = x;
    while (low <= high)
    {
        long long int mid = low + (high - low) / 2;
        long long int sq = mid * mid;
        if (sq == x)
        {
            return mid;
        }
        else if (sq < x)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

int main()
{
    long long int x = 10;
    cout << floorSqrt(x);
    return 0;
}