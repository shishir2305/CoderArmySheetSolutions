// container with most water

// algorithm 1 -> use two for loops and calculate the required answer
// t.c -> O(n^2)
// s.c -> O(1)

// algorithm 2 -> using two pointer approach, if A[i]<A[j] then there may be a possibility of a greater number on its right else there may be a chance that there is a greater number in the left part of A[j]
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

long long maxArea(long long A[], int len)
{
    long long ans = 0;
    int i = 0, j = len - 1;
    while (i < j)
    {
        ans = max(ans, (j - i) * min(A[i], A[j]));
        if (A[i] < A[j])
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return ans;
}

int main()
{

    return 0;
}