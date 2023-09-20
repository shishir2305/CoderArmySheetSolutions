// redundant braces

// algorithm -> the idea is if there is an operator between a pair of brackets then the pair of brackets are not redundant else they are redundant. We will use stack to store all the '(' and operators and whenever we have a closing bracket we will try finding its opening bracket in the stack and if we get an operator then it is not redundant else it is redundant
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

int checkRedundancy(string s)
{
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            st.push(s[i]);
        }
        else
        {
            if (s[i] == ')')
            {
                bool isRedundant = true;
                while (!st.empty() && st.top() != '(')
                {
                    char top = st.top();
                    if (top == '+' || top == '-' || top == '*' || top == '/')
                    {
                        isRedundant = false;
                    }
                    st.pop();
                }
                if (isRedundant)
                {
                    return true;
                }
                st.pop();
            }
        }
    }
    return false;
}

int main()
{

    return 0;
}