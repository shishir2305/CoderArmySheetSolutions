// next greater element II

// algorithm 1 -> use two for loop and traverse the array circularly using the modulo operator to find the next greater element
// t.c -> O(n^2)
// s.c -> O(1)

// algorithm 2 -> use a stack and at first insert all the elements in the stack from back side and then start traversing the elements from back side and find the next greater element in the stack
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElements(vector<int> &nums)
{
    vector<int> ans(nums.size());
    stack<int> st;
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        st.push(nums[i]);
    }
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        while (!st.empty() && nums[i] >= st.top())
        {
            st.pop();
        }
        if (st.empty())
        {
            ans[i] = (-1);
        }
        else
        {
            ans[i] = st.top();
        }
        st.push(nums[i]);
    }
    return ans;
}

int main()
{

    return 0;
}