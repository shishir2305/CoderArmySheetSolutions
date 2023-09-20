// the celebrity problem

// algorithm 1 -> since celebrity knows no one so its row will contain all 0s and since everyone knows celebrity so it column will contain all 1s exceept for the diagonal elements
// t.c -> O(n^2)
// s.c -> O(1)

// algorithm 2 -> we will push all the elements into the stack and do some operations till the size of stack is greater than 1. We will pop two elements and check whether a knows b or b knows a and put one element back to the stack. At the very end we will check for the one last element as a possible celebrity by counting the zeroes in its row and 1s in its column
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

// brute force approach
int celebrity(vector<vector<int>> &M, int n)
{
    for (int i = 0; i < n; i++)
    {
        bool rowFlag = true, colFlag = true;
        for (int j = 0; j < n; j++)
        {
            if (M[i][j] != 0)
            {
                rowFlag = false;
            }
            if (i != j && M[j][i] != 1)
            {
                colFlag = false;
            }
        }
        if (rowFlag && colFlag)
        {
            return i;
        }
    }
    return -1;
}

// optimized approach
bool knows(vector<vector<int>> &M, int a, int b, int n)
{
    if (M[a][b] == 1)
    {
        return true;
    }
    return false;
}
int celebrity(vector<vector<int>> &M, int n)
{
    // create a stack and push all the elements in it
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        st.push(i);
    }

    // pop till the stack size is 1
    while (st.size() > 1)
    {
        int a = st.top();
        st.pop();
        int b = st.top();
        st.pop();

        if (knows(M, a, b, n))
        {
            st.push(b);
        }
        else
        {
            st.push(a);
        }
    }

    // check whether the last element left in the stack is the celebrity or not

    int candidate = st.top();
    int zeroCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (M[candidate][i] == 0)
        {
            zeroCount++;
        }
    }
    if (zeroCount != n)
    {
        return -1;
    }

    int oneCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (M[i][candidate] == 1)
        {
            oneCount++;
        }
    }
    if (oneCount != n - 1)
    {
        return -1;
    }
    return candidate;
}

int main()
{

    return 0;
}