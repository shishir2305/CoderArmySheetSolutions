// find missing and repeating element

// algorithm 1 ->. use two for loops to find the repeating element and from that using the summation of the number find the missing number
// t.c -> O(n^2)
// s.c -> O(1)

// algorithm 2 -> use sorting to sort the array and find the repeating element and from that find missing element
// t.c -> O(n log(n))
// s.c -> O(1)

// algorithm 3 -> use hashmap to find repeating element and then from that find missing element
// t.c -> O(n)
// s.c -> O(n)

// algorithm 4 -> using bit manipulation
// intuition -> if we xor all the array elements and 1 to n then we get (missing ^ repeating) element, then we use the algorithm to find the tw odd occuring element using bit manipulation
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

vector<int> findTwoElement(vector<int> arr, int n)
{
    vector<int> ans;
    int xorVal = 0;
    for (int i = 0; i <= n; i++)
    {
        if (i < n)
        {
            xorVal ^= arr[i];
        }
        xorVal ^= i;
    }
    int x = 0, y = 0;
    // since we will segregate based on last set bit so we need a number that has all teh other bits as 0 except the corresponding set bit of xorValue.
    int k = (xorVal & (~(xorVal - 1)));
    for (int i = 0; i <= n; i++)
    {
        if (i < n)
        {
            if (k & arr[i])
            {
                x ^= arr[i];
            }
            else
            {
                y ^= arr[i];
            }
        }
        if (k & i)
        {
            x ^= i;
        }
        else
        {
            y ^= i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x || arr[i] == y)
        {
            if (arr[i] == x)
            {
                ans.push_back(x);
                ans.push_back(y);
                return ans;
            }
            else
            {
                ans.push_back(y);
                ans.push_back(x);
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 3, 3};
    return 0;
}