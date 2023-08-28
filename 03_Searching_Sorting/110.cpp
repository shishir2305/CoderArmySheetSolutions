// sort in specific order

// algorithm -> sort the array and then store even odd separately and then fill the original according to the question
// t.c -> O(n log(n))
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

void sortIt(long long arr[], long long n)
{
    sort(arr, arr + n);
    long long count = 0;
    vector<long long> even, odd;
    for (long long i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even.push_back(arr[i]);
        }
        else
        {
            odd.push_back(arr[i]);
        }
    }
    reverse(odd.begin(), odd.end());
    for (long long i = 0; i < odd.size(); i++)
    {
        arr[count++] = odd[i];
    }
    for (long long i = 0; i < even.size(); i++)
    {
        arr[count++] = even[i];
    }
}

int main()
{
    long long arr[] = {1, 2, 3, 5, 4, 7, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    sortIt(arr, n);
    return 0;
}