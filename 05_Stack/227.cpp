// string manipulation

// algorithm -> use stack to check if the top of the stack is same as current element, if yes then pop the stack else push the element in the stack
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

int removeConsecutiveSame(vector<string> v)
{
    stack<string> st;
    for (int i = 0; i < v.size(); i++)
    {
        if (st.empty())
        {
            st.push(v[i]);
        }
        else if (st.top() == v[i])
        {
            st.pop();
        }
        else
        {
            st.push(v[i]);
        }
    }
    return st.size();
}

int main()
{
    vector<string> v = {"ab", "aa", "aa", "bcd", "ab"};
    cout << removeConsecutiveSame(v) << endl;
    return 0;
}