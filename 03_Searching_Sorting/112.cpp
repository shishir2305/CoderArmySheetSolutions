// triplet family

// algorithm 1 -> use three loops to find the triplet elements
// t.c -> O(n^3)
// s.c -> O(1)

// algorithm 2 -> use sorting and the approach of 3 sum to find the triplet
// t.c -> O(n^2)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

vector<int> findTriplet(int arr[], int n)
{
    vector<int> result;
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        int low = 0, high = n - 1;
        while (low < high)
        {
            if (arr[low] + arr[high] == arr[i])
            {
                result.push_back(arr[i]);
                result.push_back(arr[low]);
                result.push_back(arr[high]);
                return result;
            }
            else if (arr[low] + arr[high] < arr[i]) // since the sum is lesser than arr[i] so we will move right
            {
                low++;
            }
            else
            {
                high--; // greater sum so we will move left
            }
        }
    }
    return {-1};
}

int main()
{

    return 0;
}