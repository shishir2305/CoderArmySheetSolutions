// evaluate expression

// algorithm -> if +,-,*,/ is encountered then push it into the stack else take out two elements a and b from the top and then perform b operation a
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

int evalRPN(vector<string> &tokens)
{
    stack<int> st;
    for (int i = 0; i < tokens.size(); i++)
    {
        if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/")
        {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            if (tokens[i] == "+")
            {
                st.push(a + b);
            }
            else if (tokens[i] == "-")
            {
                st.push(b - a);
            }
            else if (tokens[i] == "*")
            {
                st.push(a * b);
            }
            else if (tokens[i] == "/")
            {
                st.push(b / a);
            }
        }
        else
        {
            st.push(stoi(tokens[i]));
        }
    }
    return st.top();
}

int main()
{

    return 0;
}