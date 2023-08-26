// three way partitioning

// algorithm 1 -> sort the array
// t.c. -> O(n log(n))
// s.c. -> O(1)

// algorithm 2 -> use some space and solve the question
// t.c -> O(n)
// s.c. -> O(n)

// algorithm 3 -> use dutch national flag algorithm
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

void threeWayPartition(vector<int> &arr, int a, int b)
{
    int low = 0, mid = 0, high = arr.size() - 1;
    while (mid <= high)
    {
        if (arr[mid] < a)
        {
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }
        else if (arr[mid] >= a && arr[mid] <= b)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int a = 2, b = 4;
    return 0;
}