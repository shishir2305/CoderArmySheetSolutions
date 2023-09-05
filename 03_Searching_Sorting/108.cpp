// find triplets with zero sum

// algorithm 1 -> use three loops and find the required result
// t.c -> O(n^3)
// s.c -> O(1)

// algorithm 2 -> use sorting and the concept of 3 sum check whether there are two number whose sum is equal to the -arr[i] (negative of arr[i])
// t.c -> O(n^2)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

bool findTriplets(int arr[], int n)
{
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        int t = -arr[i];
        int s = i + 1;
        int e = n - 1;
        while (s < e)
        {
            if (arr[s] + arr[e] == t) // arr[i]+arr[s]+arr[e]=0 ,
            // so arr[s]+arr[e]=-arr[i]
            {
                return true;
            }
            else if (arr[s] + arr[e] < t)
            {
                s++;
            }
            else
            {
                e--;
            }
        }
    }
    return false;
}

int main()
{

    return 0;
}