// find missing element in an array

// algorithm -> add all the elements of the array and add all the numbers from 1 to n, then subtract both the resultant is the answer, since the missing number will be the difference between the array sum and total sum

#include <bits/stdc++.h>
using namespace std;

int missingNumber(int A[], int N)
{
    int arrSum = 0;
    int totalSum = 0;

    for (int i = 0; i <= N; i++)
    {
        if (i < N - 1)
        {
            arrSum += A[i];
        }
        totalSum += i;
    }

    return totalSum - arrSum;
}

int main()
{
    int N = 4;
    int A[] = {1, 4, 3};
    cout << missingNumber(A, N) << endl;
    return 0;
}