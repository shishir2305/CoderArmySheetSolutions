// sort array of 0,1 and 2

// algorithm 1 -> sort the array using stl sort function
// t.c -> O(n log(n))
// s.c. -> O(1)

// algorithm 2 -> count the number of 0,1 and 2 and then place these elements according to their count
// t.c -> O(n)
// s.c. -> O(n)

// algorithm 3 -> Using dutch national flag algorithm
// this algorithm divides the entire array into three regions low, mid and high and places elements according to this regions
// t.c. -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

void sort012(int arr[], int n)
{
    int i = 0, j = 0, k = n - 1;
    while (j <= k)
    {
        if (arr[j] == 0)
        {
            swap(arr[i], arr[j]);
            i++;
            j++;
        }
        else if (arr[j] == 1)
        {
            j++;
        }
        else
        {
            swap(arr[j], arr[k]);
            k--;
        }
    }
}

int main()
{
    int arr[] = {0, 2, 2, 0, 1, 2, 1, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort012(arr, n);
    for (auto it : arr)
    {
        cout << it << endl;
    }
    return 0;
}