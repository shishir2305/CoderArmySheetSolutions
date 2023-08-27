// merging two sorted arrays in sorted order

// algorithm -> sort both the arrays at first and then sorted insert in the provided resultant array
// t.c -> O(n log(n) + m log(m) +(n+m))
// s.c -> O(n+m)

#include <bits/stdc++.h>
using namespace std;

void sortedMerge(int a[], int b[], int res[], int n, int m)
{
    sort(a, a + n);
    sort(b, b + m);
    int i = 0, j = 0, count = -1;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            count++;
            res[count] = a[i];
            i++;
        }
        else
        {
            count++;
            res[count] = b[j];
            j++;
        }
    }
    while (i < n)
    {
        count++;
        res[count] = a[i];
        i++;
    }
    while (j < m)
    {
        count++;
        res[count] = b[j];
        j++;
    }
}

int main()
{
    int A[] = {1, 10, 5, 15};
    int B[] = {20, 0, 2};
    return 0;
}