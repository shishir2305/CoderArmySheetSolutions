// sort the array

// algorithm -> use the stl sort function
// t.c -> O(n log(n))
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

vector<int> sortArr(vector<int> &arr, int n)
{
    sort(arr.begin(), arr.end());
    return arr;
}

int main()
{
    vector<int> arr = {4, 2, 7, 2, 6, 5, 8, 1, 0};
    int n = arr.size();
    sortArr(arr, n);
    for (auto it : arr)
    {
        cout << it << endl;
    }
    return 0;
}