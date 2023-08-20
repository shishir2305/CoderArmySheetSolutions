// binary array sorting

// algorithm 1 -> store the count of zeroes and ones in seperate variables and then modify the array with zero and one according to the counts
// t.c. -> O(n) but no. of traversals can be optimized
// s.c. -> O(1)

// algorithm 2 -> use two pointer approach and keep start pointer to 0th index and end pointer to n-1th index
// move the start index until arr[i]==0
// move the end index until arr[j]==1
// the intution is move in such a way that all the elements before ith index are smaller than it and all the elements after jth index are greater than it
// if i<j then swap both elements
// t.c.-> O(n)
// s.c. -> O(1)

#include <bits/stdc++.h>
using namespace std;

void binArraySort_naive(int arr[], int n)
{
    int zero_count = 0, one_count = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zero_count++;
        }
        else if (arr[i] == 1)
        {
            one_count++;
        }
    }
    for (int i = 0; i < zero_count; i++)
    {
        arr[count++] = 0;
    }
    for (int i = 0; i < one_count; i++)
    {
        arr[count++] = 1;
    }
}

void binArraySort_efficient(int arr[], int N)
{
    int i = 0, j = N - 1;
    while (i < j)
    {
        while (i < j && arr[i] == 0)
        {
            i++;
        }
        while (i < j && arr[j] == 1)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}

int main()
{
    int arr[] = {1, 0, 1, 1, 0};
    int n = 5;
    binArraySort_efficient(arr, n);
    for (auto it : arr)
    {
        cout << it << endl;
    }
    return 0;
}