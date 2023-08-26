// frogs and jump

// algorithm -> use the concept of sieve of erastothenes
// t.c -> O(n log(leaves))
// s.c -> O(leaves)

#include <bits/stdc++.h>
using namespace std;

int unvisitedLeaves(int n, int leaves, int frogs[])
{
    vector<bool> visited(leaves + 1, false);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (frogs[i] == 1)
        {
            return 0;
        }
        long long int j = frogs[i];
        if (j <= leaves && !visited[j]) // this is an important optimization as if a number is visited, then we can assume that its multiples have also been visited so we will not check them and also the number we will check must be within the range of the leaves
        {
            while (j <= leaves)
            {
                if (!visited[j])
                {
                    visited[j] = true;
                    count++;
                }
                j += frogs[i];
            }
        }
    }
    return leaves - count;
}

int main()
{
    int N = 3;
    int leaves = 4;
    int frogs[] = {3, 2, 4};
    cout << unvisitedLeaves(N, leaves, frogs);
    return 0;
}