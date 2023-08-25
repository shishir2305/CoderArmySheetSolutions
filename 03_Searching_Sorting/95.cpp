// bubble sort

// algorithm -> the bubble sort algorithm says push the largest element to the very end and consider that part as sorted and now repeat this with reduced array size
// t.c -> O(n^2)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int arr[] = {5, 1, 3, 5, 6, 3, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    for (auto it : arr)
    {
        cout << it << endl;
    }
    return 0;
}