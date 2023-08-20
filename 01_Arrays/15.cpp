// greater element on the right

// naive approach -> traverse the array for every element and find the greatest element on its right and replace the array element with it.
// t.c. -> O(n^2)
// s.c. -> O(n)

// optimized approach -> traverse the array from rightmost element and keep track of the greatest encountered so far and keep replacing the array elements with it and also update the greatest element when a greater number is encountered
// t.c. -> O(n)
// s.c. -> O(1)

#include <bits/stdc++.h>
using namespace std;

// optimized approach
void nextGreatest(int arr[], int n)
{
    int maxi = -1; // since there is not element after the last element
    for (int i = n - 1; i >= 0; i--)
    {
        int temp = arr[i];
        arr[i] = maxi;
        maxi = max(maxi, temp);
    }
}

int main()
{
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    nextGreatest(arr, n);
    for (auto it : arr)
    {
        cout << it << endl;
    }
    return 0;
}