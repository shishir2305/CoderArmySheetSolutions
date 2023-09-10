// smallest number on left

// algorithm 1 -> use two for loops and find the required number
// t.c -> O(n^2)
// s.c -> O(1)

// algorithm 2 -> use a stack and the concept of just like next greater, pop element till we find a lesser than arr[i] and then store the answer
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

vector<int> leftSmaller(int n, int arr[])
{
    vector<int> ans;
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && arr[i] <= st.top())
        {
            st.pop();
        }
        if (st.empty())
        {
            ans.push_back(-1);
        }
        else
        {
            ans.push_back(st.top());
        }
        st.push(arr[i]);
    }
    return ans;
}

int main()
{

    return 0;
}