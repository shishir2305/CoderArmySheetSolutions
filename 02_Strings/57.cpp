// reverse words in a given string

// algorithm -> use a stack to store the words till a white space or . and then put back the stack element in the answer string

#include <bits/stdc++.h>
using namespace std;

string reverseWords(string S)
{
    stack<char> st;
    string res = "";
    for (int i = S.size() - 1; i >= 0; i--)
    {
        if (S[i] != '.')
            st.push(S[i]);
        else
        {
            while (!st.empty())
            {
                res += st.top();
                st.pop();
            }
            res += '.';
        }
    }
    // for last word which will not terminate by '.'
    while (!st.empty())
    {
        res += st.top();
        st.pop();
    }

    return res;
}

int main()
{
    string str = "i.like.this.program.very.much";
    cout << reverseWords(str) << endl;
    return 0;
}