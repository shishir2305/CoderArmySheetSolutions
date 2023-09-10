// make the array beautiful

// algorithm -> use a vector to store the answer and check if the last element of the vector and current element have different signs then pop the last element else store the current element
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

vector<int> makeBeautiful(vector<int> arr)
{
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        if (ans.size() == 0)
        {
            ans.push_back(arr[i]);
            continue;
        }
        if ((ans.back() < 0 && arr[i] >= 0) || (ans.back() >= 0 && arr[i] < 0))
        {
            ans.pop_back();
        }
        else
        {
            ans.push_back(arr[i]);
        }
    }
    return ans;
}

int main()
{

    return 0;
}