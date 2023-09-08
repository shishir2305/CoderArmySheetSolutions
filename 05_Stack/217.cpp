// immediate smaller element

// algorithm -> just compare the adjacent elements and store the answer
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

void immediateSmaller(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            arr[i] = arr[i + 1];
        }
        else
        {
            arr[i] = -1;
        }
    }
    arr[n - 1] = -1;
}

int main()
{

    return 0;
}