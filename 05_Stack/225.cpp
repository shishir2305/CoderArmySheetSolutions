// print bracket number

// algorithm -> maintain a pair in the stack with curr bracket number and opening bracket, whenever a closing bracket is encountered simply store the st.top().second in the answer and pop the stack
// t.c -> O(n)
// s.c -> (n)

#include <bits/stdc++.h>
using namespace std;

vector<int> bracketNumbers(string s)
{
    stack<pair<char, int>> st;
    vector<int> ans;
    int curr = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            curr++;
            st.push({'(', curr});
            ans.push_back(curr);
        }
        else if (!st.empty() && s[i] == ')')
        {
            ans.push_back(st.top().second);
            st.pop();
        }
    }
    return ans;
}

int main()
{

    return 0;
}