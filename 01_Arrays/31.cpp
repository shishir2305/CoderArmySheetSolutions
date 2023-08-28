// count triplets with sum smaller than x

// algorithm 1 -> use three loops to find the triplets
// t.c -> O(n^3)
// s.c -> O(1)

// algorithm 2 -> sort the original array, fix every element and use two pointer technique similar as two sum question to search triplets smaller than x
// t.c -> O(n^2)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

long long countTriplets(long long arr[], int n, long long sum)
{
    long long count = 0;
    sort(arr, arr + n);
    for (int i = 0; i < n - 2; i++)
    {
        int left = i + 1, right = n - 1;
        while (left < right)
        {
            if (arr[i] + arr[left] + arr[right] < sum)
            {
                count += (right - left); // since between two range there are x-y elements that can also be the potential count
                left++;
            }
            else
            {
                right--;
            }
        }
    }
    return count;
}

int main()
{
    int n = 4, sum = 2;
    long long arr[] = {-2, 0, 1, 3};
    cout << countTriplets(arr, n, sum) << endl;
    return 0;
}