// union of two sorted arrays

// algorithm1 -> store all the elements of both the arrays in the set and then copy the contents of the set to the result array, since set stores only distinct elements and in sorted order.
// Time Complexity: O(m*log(m) + n*log(n)) where ‘m’ and ‘n’ are the size of the arrays
// Auxiliary Space: O(m + n)

// algorithm2 -> store the elements of both the arrays one by one but do check whether the current element is same as the last inserted element, if yes then don't store and move forward otherwise store and move forward
// store the element that is smaller after comparing both the array elements
// Expected Time Complexity: O(n+m).
// Expected Auxiliary Space: O(n+m).

#include <bits/stdc++.h>
using namespace std;

// set solution
vector<int> Unionarray(int arr1[], int arr2[], int n, int m)
{
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr1[i]);
    }

    for (int i = 0; i < m; i++)
    {
        s.insert(arr2[i]);
    }
    // copying elements of set to vector
    vector<int> vec(s.begin(), s.end());
    return vec;
}

// optimized solution
vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    vector<int> result;
    int i = 0, j = 0;
    bool filledFirstElement = false;
    while (i < n && j < m)
    {
        if (filledFirstElement) // arr.back() only works when atleast one element is inserted in the array, handling that case separately
        {
            if (arr1[i] <= arr2[j])
            {
                // checking if last element is same as current element
                if (result.back() != arr1[i])
                {
                    result.push_back(arr1[i]);
                }
                i++;
            }
            else
            {
                if (result.back() != arr2[j])
                {
                    result.push_back(arr2[j]);
                }
                j++;
            }
        }
        else
        {
            if (arr1[i] <= arr2[j])
            {
                result.push_back(arr1[i]);
                i++;
            }
            else
            {
                result.push_back(arr2[j]);
                j++;
            }
            filledFirstElement = true;
        }
    }

    // inserting left over elements if any
    while (i < n)
    {
        if (result.back() != arr1[i])
        {
            result.push_back(arr1[i]);
        }
        i++;
    }
    while (j < m)
    {
        if (result.back() != arr2[j])
        {
            result.push_back(arr2[j]);
        }
        j++;
    }
    return result;
}

int main()
{
    int arr1[] = {1, 2, 2, 2, 3};
    int arr2[] = {2, 3, 3, 4, 5, 5};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);
    return 0;
}