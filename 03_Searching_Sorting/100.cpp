// selection sort

// algorithm -> pick the minimum element and place it to its suitable place
// t.c -> O(n^2)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int miniIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[miniIndex])
            {
                miniIndex = j;
            }
        }
        swap(arr[miniIndex], arr[i]);
    }
}

int main()
{

    return 0;
}