// move all negative elements to the end

// algorithm -> store the positive and negative elements in two separate arrays and at the end copy the elements of both these arrays in the original array
// t.c. -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

void segregateElements(int arr[], int n)
{
    vector<int> pos;
    vector<int> neg;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            pos.push_back(arr[i]);
        }
        else
        {
            neg.push_back(arr[i]);
        }
    }
    vector<int> ans;
    for (auto it : pos)
    {
        ans.push_back(it);
    }
    for (auto it : neg)
    {
        ans.push_back(it);
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = ans[i];
    }
}

int main()
{
    int arr[] = {1, -1, 3, 2, -7, -5, 11, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    segregateElements(arr, n);
    for (auto it : arr)
    {
        cout << it << endl;
    }
    return 0;
}