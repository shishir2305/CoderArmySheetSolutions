// searching an element in a sorted array

// algorithm 1 -> use linear search
// t.c. -> O(n)
// s.c. -> O(1)

// algorithm 2 -> use binary search if the array is sorted
// t.c. -> O(log n)
// s.c. -> O(1)

#include <bits/stdc++.h>
using namespace std;

int binSearch(int arr[], int N, int K)
{
    int low = 0, high = N - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == K)
            return 1;
        else if (arr[mid] > K)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    cout << binSearch(arr, n, 4);
    return 0;
}