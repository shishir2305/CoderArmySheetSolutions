// next greater element

// algorithm 1 -> use two for loops and find next greater element
// t.c -> O(n^2)
// s.c -> O(1)

// algorithm -> start from the back and maintain a stack, pop out elements from the stack till arr[i] >= top element and if a greater element is found store it in the answer elese store -1 and store the number in the stack
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

vector<long long> nextLargerElement(vector<long long> arr, int n)
{
    vector<long long> ans;
    stack<long long> st;
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && st.top() <= arr[i])
        {
            st.pop();
        }
        if (st.empty())
        {
            ans.push_back(-1);
            st.push(arr[i]);
        }
        else
        {
            ans.push_back(st.top());
            st.push(arr[i]);
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{

    return 0;
}