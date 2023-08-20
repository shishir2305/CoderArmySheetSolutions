// search an element in an array

#include <bits/stdc++.h>
using namespace std;

// algorithm -> traverse through each element in the array and check if it is equal to the given element
// t.c. -> O(n)
// s.c. -> O(1)

int search(vector<int> &arr, int element)
{

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int x = 3;
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << search(arr, x) << endl;
    return 0;
}