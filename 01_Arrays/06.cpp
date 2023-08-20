// check if two arrays are equal or not

// algorithm 1 -> sort both the arrays and compare the elements in both the arrays
// t.c -> O(n log(n))
// s.c -> O(1)

// algorithm 2 -> use hashmap to store the frequency of all the elements in it
// increment the frequency of elements in array1 and decrement the frequency of elements in array 2, check in the end if all the elements have a frequency of zero then return true otherwise false
// t.c. -> O(n)
// s.c. -> O(n)

#include <bits/stdc++.h>
using namespace std;

#define ll long long

// sorting algorithm code
bool check1(vector<ll> A, vector<ll> B, int N)
{
    if (A.size() != B.size())
    {
        return false;
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] != B[i])
        {
            return false;
        }
    }
    return true;
}

// hashmap solution
bool check2(vector<ll> A, vector<ll> B, int N)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < N; i++)
    {
        mp[A[i]]++;
    }
    for (int i = 0; i < N; i++)
    {
        if (mp.find(B[i]) == mp.end())
        {
            return false;
        }
        if (mp[B[i]] == 0)
        {
            return false;
        }
        mp[B[i]]--;
    }
    return true;
}

int main()
{

    return 0;
}