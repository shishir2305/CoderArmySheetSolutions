// maximum difference

// algorithm 1 -> use two for loops to find the smaller element on the left and right of it and store it in an array and then use the array to find the required result
// t.c -> O(n^2)
// s.c -> O(n)

// algorithm 2 -> we can use the concept of smaller element on the left to find the smaller element on the left as well as right just for right smaller element traverse the array from right to element and store the answer
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
            ans.push_back(0);
        }
        else
        {
            ans.push_back(st.top());
        }
        st.push(arr[i]);
    }
    return ans;
}

vector<int> rightSmaller(int n, int arr[])
{
    vector<int> ans(n);
    stack<int> st;
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && arr[i] <= st.top())
        {
            st.pop();
        }
        if (st.empty())
        {
            ans[i] = 0;
        }
        else
        {
            ans[i] = st.top();
        }
        st.push(arr[i]);
    }
    return ans;
}

int findMaxDiff(int arr[], int n)
{
    vector<int> left = leftSmaller(n, arr);
    vector<int> right = rightSmaller(n, arr);
    int ans = INT_MIN;
    for (int i = 0; i < left.size(); i++)
    {
        ans = max(ans, abs(left[i] - right[i]));
    }
    return ans;
}

int main()
{

    return 0;
}