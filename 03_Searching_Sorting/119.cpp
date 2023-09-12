// sort an array according to the other

// algorithm -> use a map to store the frequency of all the elements, now one by one store elements in the result array by traversing the map according to the second array
// t.c -> O(n log(n))
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

vector<int> sortA1ByA2(vector<int> A1, int N, vector<int> A2, int M)
{
    map<int, int> mp;
    for (int i = 0; i < N; i++)
    {
        mp[A1[i]]++;
    }
    int j = 0;
    for (int i = 0; i < M; i++)
    {
        while (mp[A2[i]] > 0)
        {
            A1[j++] = A2[i];
            mp[A2[i]]--;
        }
    }

    for (auto it : mp)
    {
        if (it.second > 0)
        {
            while (it.second > 0)
            {
                A1[j++] = it.first;
                it.second--;
            }
        }
    }
    return A1;
}

int main()
{

    return 0;
}